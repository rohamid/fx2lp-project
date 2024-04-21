#include <stdio.h>
#include <stdlib.h>
#include <libusb-1.0/libusb.h>

#define USB_VID		0x04b4
#define USB_PID		0x0083
#define CMD_REQ		0xB2


int main(int argc, char **argv) {
	libusb_device_handle *handle = NULL;
	libusb_context *ctx = NULL;

	int rc = 0;

	// Initialize the libusb library
	rc = libusb_init(&ctx);
	if(rc) {
		fprintf(stderr, "Error libusb_init(): %s\n", libusb_error_name(rc));
		return 1;
	}

	libusb_set_option(ctx, LIBUSB_OPTION_LOG_LEVEL, LIBUSB_LOG_LEVEL_INFO);

	handle = libusb_open_device_with_vid_pid(ctx, USB_VID, USB_PID);
	if(!handle) {
		fprintf(stderr, "Unable to open device\n");
		goto exit;
	}

	rc = libusb_claim_interface(handle, 0);
	if(rc < 0) {
		fprintf(stderr, "Error claiming interface: %s\n", libusb_error_name(rc));
		goto close;
	}

	// Control transfer parameters
	uint8_t bmRequestType = LIBUSB_ENDPOINT_OUT | LIBUSB_REQUEST_TYPE_VENDOR | LIBUSB_RECIPIENT_DEVICE;
	uint8_t bRequest = CMD_REQ;
	uint16_t wValue = 0x00;
	uint16_t wIndex = 0x00;
	unsigned char data[4];
	int argData1 = 0x00;
	int argData2 = 0x00;
	if(argc > 1) {
		if(argc == 3) {
			argData1 = (unsigned char)strtol(argv[1], NULL, 16);
			argData2 = (unsigned char)strtol(argv[2], NULL, 16);
			data[0] = argData1;
			data[1] = argData2;
			data[2] = (unsigned char)0x00;
			data[3] = (unsigned char)0x00;
		} else if(argc == 2) {
			argData1 = (unsigned char)strtol(argv[1], NULL, 16);
			data[0] = argData1;
			data[1] = (unsigned char)0x00;
			data[2] = (unsigned char)0x00;
			data[3] = (unsigned char)0x00;
		}

	} else {
		data[0] = (unsigned char)0x00;
		data[1] = (unsigned char)0x00;
		data[2] = (unsigned char)0x00;
		data[3] = (unsigned char)0x00;

	}
	int length = sizeof(data);

	int transferred = libusb_control_transfer(handle,
											  bmRequestType,
											  bRequest,
											  wValue,
											  wIndex,
										  	  data,
											  length,
											  1000);

	if(transferred < 0) {
		fprintf(stderr, "Control transfer failed: %s\n", libusb_error_name(transferred));
	} else {
		printf("Control transfer succeded, %d bytes transferred\n", transferred);
	}

	libusb_release_interface(handle, 0);

close:
	if(handle) {
		libusb_close(handle);
	}

exit:
	libusb_exit(ctx);
	return 0;
}
