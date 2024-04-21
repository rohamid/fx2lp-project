#include <stdio.h>
#include <stdint.h>
#include <fx2regs.h>

void delay_1ms(void) __naked {
	__asm
	mov dptr, #(-1200 & 0xffff)
	1$:
	inc dptr
	mov a, dpl
	orl a, dph
	jnz 1$
	ret
	__endasm;
}

void delay_ms(unsigned int delay) {
	while(--delay) {
		delay_1ms();
	}
}

void main(void) {
	CPUCS = (2ul <<3);
	OEA |= (1<<bmBIT0) | (1<<bmBIT1);
	IOA |= (1<<bmBIT0);
	IOA &= ~(bmBIT1);
	for(;;) {
		IOA ^= (1<<bmBIT0);
		IOA ^= (1<<bmBIT1);
		delay_ms(1000);
		IOA ^= (1<<bmBIT0);
		IOA ^= (1<<bmBIT1);
		delay_ms(1000);
	}
}
