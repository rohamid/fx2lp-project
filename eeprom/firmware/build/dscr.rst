ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Intel 8051), page 1.
Hexadecimal [24-Bits]



                                      1 ; Copyright (C) 2009 Ubixum, Inc. 
                                      2 ;
                                      3 ; This library is free software; you can redistribute it and/or
                                      4 ; modify it under the terms of the GNU Lesser General Public
                                      5 ; License as published by the Free Software Foundation; either
                                      6 ; version 2.1 of the License, or (at your option) any later version.
                                      7 ; 
                                      8 ; This library is distributed in the hope that it will be useful,
                                      9 ; but WITHOUT ANY WARRANTY; without even the implied warranty of
                                     10 ; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
                                     11 ; Lesser General Public License for more details.
                                     12 ; 
                                     13 ; You should have received a copy of the GNU Lesser General Public
                                     14 ; License along with this library; if not, write to the Free Software
                                     15 ; Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
                                     16 
                                     17 ; this is a the default 
                                     18 ; full speed and high speed 
                                     19 ; descriptors found in the TRM
                                     20 ; change however you want but leave 
                                     21 ; the descriptor pointers so the setupdat.c file works right
                                     22  
                                     23 
                                     24 .module DEV_DSCR 
                                     25 
                                     26 ; descriptor types
                                     27 ; same as setupdat.h
                           000001    28 DSCR_DEVICE_TYPE=1
                           000002    29 DSCR_CONFIG_TYPE=2
                           000003    30 DSCR_STRING_TYPE=3
                           000004    31 DSCR_INTERFACE_TYPE=4
                           000005    32 DSCR_ENDPOINT_TYPE=5
                           000006    33 DSCR_DEVQUAL_TYPE=6
                                     34 
                                     35 ; for the repeating interfaces
                           000009    36 DSCR_INTERFACE_LEN=9
                           000007    37 DSCR_ENDPOINT_LEN=7
                                     38 
                                     39 ; endpoint types
                           000000    40 ENDPOINT_TYPE_CONTROL=0
                           000001    41 ENDPOINT_TYPE_ISO=1
                           000002    42 ENDPOINT_TYPE_BULK=2
                           000003    43 ENDPOINT_TYPE_INT=3
                                     44 
                                     45     .globl	_dev_dscr, _dev_qual_dscr, _highspd_dscr, _fullspd_dscr, _dev_strings, _dev_strings_end
                                     46 ; These need to be in code memory.  If
                                     47 ; they aren't you'll have to manully copy them somewhere
                                     48 ; in code memory otherwise SUDPTRH:L don't work right
                                     49     .area  DSCR_AREA	(CODE)
                                     50 
      003E00                         51 _dev_dscr:
      003E00 12                      52 	.db	dev_dscr_end-_dev_dscr    ; len
      003E01 01                      53 	.db	DSCR_DEVICE_TYPE		  ; type
      003E02 00 02                   54 	.dw	0x0002					  ; usb 2.0
      003E04 FF                      55 	.db	0xff  					  ; class (vendor specific)
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Intel 8051), page 2.
Hexadecimal [24-Bits]



      003E05 FF                      56 	.db	0xff					  ; subclass (vendor specific)
      003E06 FF                      57 	.db	0xff					  ; protocol (vendor specific)
      003E07 40                      58 	.db	64						  ; packet size (ep0)
      003E08 B4 04                   59 	.dw	0xb404			      ; vendor id 
      003E0A 83 00                   60 	.dw	0x8300					  ; product id
      003E0C 01 00                   61 	.dw	0x0100					  ; version id
      003E0E 00                      62 	.db	0		                  ; manufacturure str idx				
      003E0F 01                      63 	.db	1				          ; product str idx	
      003E10 00                      64 	.db	0				          ; serial str idx 
      003E11 01                      65 	.db	1			              ; n configurations
      003E12                         66 dev_dscr_end:
                                     67 
      003E12                         68 _dev_qual_dscr:
      003E12 0A                      69 	.db	dev_qualdscr_end-_dev_qual_dscr
      003E13 06                      70 	.db	DSCR_DEVQUAL_TYPE
      003E14 00 02                   71 	.dw	0x0002                              ; usb 2.0
      003E16 FF                      72 	.db	0xff
      003E17 FF                      73 	.db	0xff
      003E18 FF                      74 	.db	0xff
      003E19 40                      75 	.db	64                                  ; max packet
      003E1A 01                      76 	.db	1									; n configs
      003E1B 00                      77 	.db	0									; extra reserved byte
      003E1C                         78 dev_qualdscr_end:
                                     79 
      003E1C                         80 _highspd_dscr:
      003E1C 09                      81 	.db	highspd_dscr_end-_highspd_dscr      ; dscr len											;; Descriptor length
      003E1D 02                      82 	.db	DSCR_CONFIG_TYPE
                                     83     ; can't use .dw because byte order is different
      003E1E 3C                      84 	.db	(highspd_dscr_realend-_highspd_dscr) % 256 ; total length of config lsb
      003E1F 00                      85 	.db	(highspd_dscr_realend-_highspd_dscr) / 256 ; total length of config msb
      003E20 01                      86 	.db	1								 ; n interfaces
      003E21 01                      87 	.db	1								 ; config number
      003E22 00                      88 	.db	0								 ; config string
      003E23 80                      89 	.db	0x80                             ; attrs = bus powered, no wakeup
      003E24 32                      90 	.db	0x32                             ; max power = 100ma
      003E25                         91 highspd_dscr_end:
                                     92 
                                     93 ; all the interfaces next 
                                     94 ; NOTE the default TRM actually has more alt interfaces
                                     95 ; but you can add them back in if you need them.
                                     96 ; here, we just use the default alt setting 1 from the trm
      003E25 09                      97 	.db	DSCR_INTERFACE_LEN
      003E26 04                      98 	.db	DSCR_INTERFACE_TYPE
      003E27 00                      99 	.db	0				 ; index
      003E28 00                     100 	.db	0				 ; alt setting idx
      003E29 06                     101 	.db	6				 ; n endpoints	
      003E2A FF                     102 	.db	0xff			 ; class
      003E2B FF                     103 	.db	0xff
      003E2C FF                     104 	.db	0xff
      003E2D 00                     105 	.db	0	             ; string index	
                                    106 
                                    107 ; endpoint 1 out
      003E2E 07                     108 	.db	DSCR_ENDPOINT_LEN
      003E2F 05                     109 	.db	DSCR_ENDPOINT_TYPE
      003E30 01                     110 	.db	0x01				;  ep1 dir=out and address
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Intel 8051), page 3.
Hexadecimal [24-Bits]



      003E31 02                     111 	.db	ENDPOINT_TYPE_BULK	; type
      003E32 00                     112 	.db	0x00				; max packet LSB
      003E33 02                     113 	.db	0x02				; max packet size=512 bytes
      003E34 00                     114 	.db	0x00				; polling interval
                                    115       
                                    116 ; endpoint 1 in 
      003E35 07                     117 	.db	DSCR_ENDPOINT_LEN
      003E36 05                     118 	.db	DSCR_ENDPOINT_TYPE
      003E37 81                     119 	.db	0x81				;  ep1 dir=in and address
      003E38 02                     120 	.db	ENDPOINT_TYPE_BULK	; type
      003E39 00                     121 	.db	0x00				; max packet LSB
      003E3A 02                     122 	.db	0x02				; max packet size=512 bytes
      003E3B 00                     123 	.db	0x00				; polling interval
                                    124 
                                    125 ; endpoint 2 out
      003E3C 07                     126 	.db	DSCR_ENDPOINT_LEN
      003E3D 05                     127 	.db	DSCR_ENDPOINT_TYPE
      003E3E 02                     128 	.db	0x02				;  ep2 dir=OUT and address
      003E3F 02                     129 	.db	ENDPOINT_TYPE_BULK	; type
      003E40 00                     130 	.db	0x00				; max packet LSB
      003E41 02                     131 	.db	0x02				; max packet size=512 bytes
      003E42 00                     132 	.db	0x00				; polling interval
                                    133 
                                    134 ; endpoint 4 out
      003E43 07                     135 	.db	DSCR_ENDPOINT_LEN
      003E44 05                     136 	.db	DSCR_ENDPOINT_TYPE
      003E45 04                     137 	.db	0x04				;  ep4 dir=OUT and address
      003E46 02                     138 	.db	ENDPOINT_TYPE_BULK	; type
      003E47 00                     139 	.db	0x00				; max packet LSB
      003E48 02                     140 	.db	0x02				; max packet size=512 bytes
      003E49 00                     141 	.db	0x00				; polling interval
                                    142 
                                    143 ; endpoint 6 in
      003E4A 07                     144 	.db	DSCR_ENDPOINT_LEN
      003E4B 05                     145 	.db	DSCR_ENDPOINT_TYPE
      003E4C 86                     146 	.db	0x86				;  ep6 dir=in and address
      003E4D 02                     147 	.db	ENDPOINT_TYPE_BULK	; type
      003E4E 00                     148 	.db	0x00				; max packet LSB
      003E4F 02                     149 	.db	0x02				; max packet size=512 bytes
      003E50 00                     150 	.db	0x00				; polling interval
                                    151 
                                    152 ; endpoint 8 in
      003E51 07                     153 	.db	DSCR_ENDPOINT_LEN
      003E52 05                     154 	.db	DSCR_ENDPOINT_TYPE
      003E53 88                     155 	.db	0x88				;  ep8 dir=in and address
      003E54 02                     156 	.db	ENDPOINT_TYPE_BULK	; type
      003E55 00                     157 	.db	0x00				; max packet LSB
      003E56 02                     158 	.db	0x02				; max packet size=512 bytes
      003E57 00                     159 	.db	0x00				; polling interval
      003E58                        160 highspd_dscr_realend:
                                    161 
      003E58                        162     .even
      003E58                        163 _fullspd_dscr:
      003E58 09                     164 	.db	fullspd_dscr_end-_fullspd_dscr      ; dscr len
      003E59 02                     165 	.db	DSCR_CONFIG_TYPE
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Intel 8051), page 4.
Hexadecimal [24-Bits]



                                    166     ; can't use .dw because byte order is different
      003E5A 3C                     167 	.db	(fullspd_dscr_realend-_fullspd_dscr) % 256 ; total length of config lsb
      003E5B 00                     168 	.db	(fullspd_dscr_realend-_fullspd_dscr) / 256 ; total length of config msb
      003E5C 01                     169 	.db	1								 ; n interfaces
      003E5D 01                     170 	.db	1								 ; config number
      003E5E 00                     171 	.db	0								 ; config string
      003E5F 80                     172 	.db	0x80                             ; attrs = bus powered, no wakeup
      003E60 32                     173 	.db	0x32                             ; max power = 100ma
      003E61                        174 fullspd_dscr_end:
                                    175 
                                    176 ; all the interfaces next 
                                    177 ; NOTE the default TRM actually has more alt interfaces
                                    178 ; but you can add them back in if you need them.
                                    179 ; here, we just use the default alt setting 1 from the trm
      003E61 09                     180 	.db	DSCR_INTERFACE_LEN
      003E62 04                     181 	.db	DSCR_INTERFACE_TYPE
      003E63 00                     182 	.db	0				 ; index
      003E64 00                     183 	.db	0				 ; alt setting idx
      003E65 06                     184 	.db	6				 ; n endpoints	
      003E66 FF                     185 	.db	0xff			 ; class
      003E67 FF                     186 	.db	0xff
      003E68 FF                     187 	.db	0xff
      003E69 00                     188 	.db	0	             ; string index	
                                    189 
                                    190 ; endpoint 1 out
      003E6A 07                     191 	.db	DSCR_ENDPOINT_LEN
      003E6B 05                     192 	.db	DSCR_ENDPOINT_TYPE
      003E6C 01                     193 	.db	0x01				;  ep1 dir=out and address
      003E6D 02                     194 	.db	ENDPOINT_TYPE_BULK	; type
      003E6E 40                     195 	.db	0x40				; max packet LSB
      003E6F 00                     196 	.db	0x00				; max packet size=64 bytes
      003E70 00                     197 	.db	0x00				; polling interval
                                    198       
                                    199 ; endpoint 1 in 
      003E71 07                     200 	.db	DSCR_ENDPOINT_LEN
      003E72 05                     201 	.db	DSCR_ENDPOINT_TYPE
      003E73 81                     202 	.db	0x81				;  ep1 dir=in and address
      003E74 02                     203 	.db	ENDPOINT_TYPE_BULK	; type
      003E75 40                     204 	.db	0x40				; max packet LSB
      003E76 00                     205 	.db	0x00				; max packet size=64 bytes
      003E77 00                     206 	.db	0x00				; polling interval
                                    207 
                                    208 ; endpoint 2 out
      003E78 07                     209 	.db	DSCR_ENDPOINT_LEN
      003E79 05                     210 	.db	DSCR_ENDPOINT_TYPE
      003E7A 02                     211 	.db	0x02				;  ep2 dir=OUT and address
      003E7B 02                     212 	.db	ENDPOINT_TYPE_BULK	; type
      003E7C 40                     213 	.db	0x40				; max packet LSB
      003E7D 00                     214 	.db	0x00				; max packet size=64 bytes
      003E7E 00                     215 	.db	0x00				; polling interval
                                    216 
                                    217 ; endpoint 4 out
      003E7F 07                     218 	.db	DSCR_ENDPOINT_LEN
      003E80 05                     219 	.db	DSCR_ENDPOINT_TYPE
      003E81 04                     220 	.db	0x04				;  ep4 dir=OUT and address
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Intel 8051), page 5.
Hexadecimal [24-Bits]



      003E82 02                     221 	.db	ENDPOINT_TYPE_BULK	; type
      003E83 40                     222 	.db	0x40				; max packet LSB
      003E84 00                     223 	.db	0x00				; max packet size=64 bytes
      003E85 00                     224 	.db	0x00				; polling interval
                                    225 
                                    226 ; endpoint 6 in
      003E86 07                     227 	.db	DSCR_ENDPOINT_LEN
      003E87 05                     228 	.db	DSCR_ENDPOINT_TYPE
      003E88 86                     229 	.db	0x86				;  ep6 dir=in and address
      003E89 02                     230 	.db	ENDPOINT_TYPE_BULK	; type
      003E8A 40                     231 	.db	0x40				; max packet LSB
      003E8B 00                     232 	.db	0x00				; max packet size=64 bytes
      003E8C 00                     233 	.db	0x00				; polling interval
                                    234 ; endpoint 6 in
      003E8D 07                     235 	.db	DSCR_ENDPOINT_LEN
      003E8E 05                     236 	.db	DSCR_ENDPOINT_TYPE
      003E8F 88                     237 	.db	0x88				;  ep6 dir=in and address
      003E90 02                     238 	.db	ENDPOINT_TYPE_BULK	; type
      003E91 40                     239 	.db	0x40				; max packet LSB
      003E92 00                     240 	.db	0x00				; max packet size=64 bytes
      003E93 00                     241 	.db	0x00				; polling interval
      003E94                        242 fullspd_dscr_realend:
                                    243 
      003E94                        244     .even
      003E94                        245 _dev_strings:
                                    246 ; sample string
      003E94                        247 _string0:
      003E94 04                     248 	.db	string0end-_string0 ; len
      003E95 03                     249 	.db	DSCR_STRING_TYPE
      003E96 09 04                  250     .db 0x09, 0x04 ; 0x0409 is the language code for English.  Possible to add more codes after this. 
      003E98                        251 string0end:
                                    252 ; add more strings here
                                    253 
      003E98                        254 string1:
      003E98 12                     255     .db string1end-string1
      003E99 03                     256     .db DSCR_STRING_TYPE
      003E9A 55                     257     .ascii 'U'
      003E9B 00                     258     .db 0
      003E9C 73                     259     .ascii 's'
      003E9D 00                     260     .db 0
      003E9E 62                     261     .ascii 'b'
      003E9F 00                     262     .db 0
      003EA0 20                     263     .ascii ' '
      003EA1 00                     264     .db 0
      003EA2 54                     265     .ascii 'T'
      003EA3 00                     266     .db 0
      003EA4 65                     267     .ascii 'e'
      003EA5 00                     268     .db 0
      003EA6 72                     269     .ascii 'r'
      003EA7 00                     270     .db 0
      003EA8 6D                     271     .ascii 'm'
      003EA9 00                     272     .db 0
      003EAA                        273 string1end:
                                    274 
      003EAA                        275 _dev_strings_end:
ASxxxx Assembler V02.00 + NoICE + SDCC mods  (Intel 8051), page 6.
Hexadecimal [24-Bits]



      003EAA 00 00                  276     .dw 0x0000
                                    277 ; in case you wanted to look at memory between _dev_strings and _dev_strings_end
