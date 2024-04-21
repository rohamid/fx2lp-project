                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module eeprom
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _handle_get_interface_PARM_2
                                     12 	.globl _handle_set_configuration
                                     13 	.globl _handle_get_configuration
                                     14 	.globl _handle_set_interface
                                     15 	.globl _handle_get_interface
                                     16 	.globl _handle_vendorcommand
                                     17 	.globl _handle_get_descriptor
                                     18 	.globl _main
                                     19 	.globl _sio0_init
                                     20 	.globl _eeprom_write
                                     21 	.globl _eeprom_read
                                     22 	.globl _handle_hispeed
                                     23 	.globl _handle_setupdata
                                     24 	.globl _delay
                                     25 	.globl _printf
                                     26 	.globl _EIPX6
                                     27 	.globl _EIPX5
                                     28 	.globl _EIPX4
                                     29 	.globl _PI2C
                                     30 	.globl _PUSB
                                     31 	.globl _EIEX6
                                     32 	.globl _EIEX5
                                     33 	.globl _EIEX4
                                     34 	.globl _EI2C
                                     35 	.globl _EUSB
                                     36 	.globl _SMOD1
                                     37 	.globl _ERESI
                                     38 	.globl _RESI
                                     39 	.globl _INT6
                                     40 	.globl _CY
                                     41 	.globl _AC
                                     42 	.globl _F0
                                     43 	.globl _RS1
                                     44 	.globl _RS0
                                     45 	.globl _OV
                                     46 	.globl _FL
                                     47 	.globl _P
                                     48 	.globl _TF2
                                     49 	.globl _EXF2
                                     50 	.globl _RCLK
                                     51 	.globl _TCLK
                                     52 	.globl _EXEN2
                                     53 	.globl _TR2
                                     54 	.globl _C_T2
                                     55 	.globl _CP_RL2
                                     56 	.globl _SM01
                                     57 	.globl _SM11
                                     58 	.globl _SM21
                                     59 	.globl _REN1
                                     60 	.globl _TB81
                                     61 	.globl _RB81
                                     62 	.globl _TI1
                                     63 	.globl _RI1
                                     64 	.globl _PS1
                                     65 	.globl _PT2
                                     66 	.globl _PS0
                                     67 	.globl _PT1
                                     68 	.globl _PX1
                                     69 	.globl _PT0
                                     70 	.globl _PX0
                                     71 	.globl _PD7
                                     72 	.globl _PD6
                                     73 	.globl _PD5
                                     74 	.globl _PD4
                                     75 	.globl _PD3
                                     76 	.globl _PD2
                                     77 	.globl _PD1
                                     78 	.globl _PD0
                                     79 	.globl _EA
                                     80 	.globl _ES1
                                     81 	.globl _ET2
                                     82 	.globl _ES0
                                     83 	.globl _ET1
                                     84 	.globl _EX1
                                     85 	.globl _ET0
                                     86 	.globl _EX0
                                     87 	.globl _PC7
                                     88 	.globl _PC6
                                     89 	.globl _PC5
                                     90 	.globl _PC4
                                     91 	.globl _PC3
                                     92 	.globl _PC2
                                     93 	.globl _PC1
                                     94 	.globl _PC0
                                     95 	.globl _SM0
                                     96 	.globl _SM1
                                     97 	.globl _SM2
                                     98 	.globl _REN
                                     99 	.globl _TB8
                                    100 	.globl _RB8
                                    101 	.globl _TI
                                    102 	.globl _RI
                                    103 	.globl _PB7
                                    104 	.globl _PB6
                                    105 	.globl _PB5
                                    106 	.globl _PB4
                                    107 	.globl _PB3
                                    108 	.globl _PB2
                                    109 	.globl _PB1
                                    110 	.globl _PB0
                                    111 	.globl _TF1
                                    112 	.globl _TR1
                                    113 	.globl _TF0
                                    114 	.globl _TR0
                                    115 	.globl _IE1
                                    116 	.globl _IT1
                                    117 	.globl _IE0
                                    118 	.globl _IT0
                                    119 	.globl _PA7
                                    120 	.globl _PA6
                                    121 	.globl _PA5
                                    122 	.globl _PA4
                                    123 	.globl _PA3
                                    124 	.globl _PA2
                                    125 	.globl _PA1
                                    126 	.globl _PA0
                                    127 	.globl _EIP
                                    128 	.globl _B
                                    129 	.globl _EIE
                                    130 	.globl _ACC
                                    131 	.globl _EICON
                                    132 	.globl _PSW
                                    133 	.globl _TH2
                                    134 	.globl _TL2
                                    135 	.globl _RCAP2H
                                    136 	.globl _RCAP2L
                                    137 	.globl _T2CON
                                    138 	.globl _SBUF1
                                    139 	.globl _SCON1
                                    140 	.globl _GPIFSGLDATLNOX
                                    141 	.globl _GPIFSGLDATLX
                                    142 	.globl _GPIFSGLDATH
                                    143 	.globl _GPIFTRIG
                                    144 	.globl _EP01STAT
                                    145 	.globl _IP
                                    146 	.globl _OEE
                                    147 	.globl _OED
                                    148 	.globl _OEC
                                    149 	.globl _OEB
                                    150 	.globl _OEA
                                    151 	.globl _IOE
                                    152 	.globl _IOD
                                    153 	.globl _AUTOPTRSETUP
                                    154 	.globl _EP68FIFOFLGS
                                    155 	.globl _EP24FIFOFLGS
                                    156 	.globl _EP2468STAT
                                    157 	.globl _IE
                                    158 	.globl _INT4CLR
                                    159 	.globl _INT2CLR
                                    160 	.globl _IOC
                                    161 	.globl _AUTOPTRL2
                                    162 	.globl _AUTOPTRH2
                                    163 	.globl _AUTOPTRL1
                                    164 	.globl _AUTOPTRH1
                                    165 	.globl _SBUF0
                                    166 	.globl _SCON0
                                    167 	.globl __XPAGE
                                    168 	.globl _EXIF
                                    169 	.globl _IOB
                                    170 	.globl _CKCON
                                    171 	.globl _TH1
                                    172 	.globl _TH0
                                    173 	.globl _TL1
                                    174 	.globl _TL0
                                    175 	.globl _TMOD
                                    176 	.globl _TCON
                                    177 	.globl _PCON
                                    178 	.globl _DPS
                                    179 	.globl _DPH1
                                    180 	.globl _DPL1
                                    181 	.globl _DPH
                                    182 	.globl _DPL
                                    183 	.globl _SP
                                    184 	.globl _IOA
                                    185 	.globl _D5OFF
                                    186 	.globl _D5ON
                                    187 	.globl _D4OFF
                                    188 	.globl _D4ON
                                    189 	.globl _D3OFF
                                    190 	.globl _D3ON
                                    191 	.globl _D2OFF
                                    192 	.globl _D2ON
                                    193 	.globl _GPCR2
                                    194 	.globl _ECC2B2
                                    195 	.globl _ECC2B1
                                    196 	.globl _ECC2B0
                                    197 	.globl _ECC1B2
                                    198 	.globl _ECC1B1
                                    199 	.globl _ECC1B0
                                    200 	.globl _ECCRESET
                                    201 	.globl _ECCCFG
                                    202 	.globl _EP8FIFOBUF
                                    203 	.globl _EP6FIFOBUF
                                    204 	.globl _EP4FIFOBUF
                                    205 	.globl _EP2FIFOBUF
                                    206 	.globl _EP1INBUF
                                    207 	.globl _EP1OUTBUF
                                    208 	.globl _EP0BUF
                                    209 	.globl _UDMACRCQUAL
                                    210 	.globl _UDMACRCL
                                    211 	.globl _UDMACRCH
                                    212 	.globl _GPIFHOLDAMOUNT
                                    213 	.globl _FLOWSTBHPERIOD
                                    214 	.globl _FLOWSTBEDGE
                                    215 	.globl _FLOWSTB
                                    216 	.globl _FLOWHOLDOFF
                                    217 	.globl _FLOWEQ1CTL
                                    218 	.globl _FLOWEQ0CTL
                                    219 	.globl _FLOWLOGIC
                                    220 	.globl _FLOWSTATE
                                    221 	.globl _GPIFABORT
                                    222 	.globl _GPIFREADYSTAT
                                    223 	.globl _GPIFREADYCFG
                                    224 	.globl _XGPIFSGLDATLNOX
                                    225 	.globl _XGPIFSGLDATLX
                                    226 	.globl _XGPIFSGLDATH
                                    227 	.globl _EP8GPIFTRIG
                                    228 	.globl _EP8GPIFPFSTOP
                                    229 	.globl _EP8GPIFFLGSEL
                                    230 	.globl _EP6GPIFTRIG
                                    231 	.globl _EP6GPIFPFSTOP
                                    232 	.globl _EP6GPIFFLGSEL
                                    233 	.globl _EP4GPIFTRIG
                                    234 	.globl _EP4GPIFPFSTOP
                                    235 	.globl _EP4GPIFFLGSEL
                                    236 	.globl _EP2GPIFTRIG
                                    237 	.globl _EP2GPIFPFSTOP
                                    238 	.globl _EP2GPIFFLGSEL
                                    239 	.globl _GPIFTCB0
                                    240 	.globl _GPIFTCB1
                                    241 	.globl _GPIFTCB2
                                    242 	.globl _GPIFTCB3
                                    243 	.globl _GPIFADRL
                                    244 	.globl _GPIFADRH
                                    245 	.globl _GPIFCTLCFG
                                    246 	.globl _GPIFIDLECTL
                                    247 	.globl _GPIFIDLECS
                                    248 	.globl _GPIFWFSELECT
                                    249 	.globl _SETUPDAT
                                    250 	.globl _SUDPTRCTL
                                    251 	.globl _SUDPTRL
                                    252 	.globl _SUDPTRH
                                    253 	.globl _EP8FIFOBCL
                                    254 	.globl _EP8FIFOBCH
                                    255 	.globl _EP6FIFOBCL
                                    256 	.globl _EP6FIFOBCH
                                    257 	.globl _EP4FIFOBCL
                                    258 	.globl _EP4FIFOBCH
                                    259 	.globl _EP2FIFOBCL
                                    260 	.globl _EP2FIFOBCH
                                    261 	.globl _EP8FIFOFLGS
                                    262 	.globl _EP6FIFOFLGS
                                    263 	.globl _EP4FIFOFLGS
                                    264 	.globl _EP2FIFOFLGS
                                    265 	.globl _EP8CS
                                    266 	.globl _EP6CS
                                    267 	.globl _EP4CS
                                    268 	.globl _EP2CS
                                    269 	.globl _EP1INCS
                                    270 	.globl _EP1OUTCS
                                    271 	.globl _EP0CS
                                    272 	.globl _EP8BCL
                                    273 	.globl _EP8BCH
                                    274 	.globl _EP6BCL
                                    275 	.globl _EP6BCH
                                    276 	.globl _EP4BCL
                                    277 	.globl _EP4BCH
                                    278 	.globl _EP2BCL
                                    279 	.globl _EP2BCH
                                    280 	.globl _EP1INBC
                                    281 	.globl _EP1OUTBC
                                    282 	.globl _EP0BCL
                                    283 	.globl _EP0BCH
                                    284 	.globl _FNADDR
                                    285 	.globl _MICROFRAME
                                    286 	.globl _USBFRAMEL
                                    287 	.globl _USBFRAMEH
                                    288 	.globl _TOGCTL
                                    289 	.globl _WAKEUPCS
                                    290 	.globl _SUSPEND
                                    291 	.globl _USBCS
                                    292 	.globl _XAUTODAT2
                                    293 	.globl _XAUTODAT1
                                    294 	.globl _I2CTL
                                    295 	.globl _I2DAT
                                    296 	.globl _I2CS
                                    297 	.globl _PORTECFG
                                    298 	.globl _PORTCCFG
                                    299 	.globl _PORTACFG
                                    300 	.globl _INTSETUP
                                    301 	.globl _INT4IVEC
                                    302 	.globl _INT2IVEC
                                    303 	.globl _CLRERRCNT
                                    304 	.globl _ERRCNTLIM
                                    305 	.globl _USBERRIRQ
                                    306 	.globl _USBERRIE
                                    307 	.globl _GPIFIRQ
                                    308 	.globl _GPIFIE
                                    309 	.globl _EPIRQ
                                    310 	.globl _EPIE
                                    311 	.globl _USBIRQ
                                    312 	.globl _USBIE
                                    313 	.globl _NAKIRQ
                                    314 	.globl _NAKIE
                                    315 	.globl _IBNIRQ
                                    316 	.globl _IBNIE
                                    317 	.globl _EP8FIFOIRQ
                                    318 	.globl _EP8FIFOIE
                                    319 	.globl _EP6FIFOIRQ
                                    320 	.globl _EP6FIFOIE
                                    321 	.globl _EP4FIFOIRQ
                                    322 	.globl _EP4FIFOIE
                                    323 	.globl _EP2FIFOIRQ
                                    324 	.globl _EP2FIFOIE
                                    325 	.globl _OUTPKTEND
                                    326 	.globl _INPKTEND
                                    327 	.globl _EP8ISOINPKTS
                                    328 	.globl _EP6ISOINPKTS
                                    329 	.globl _EP4ISOINPKTS
                                    330 	.globl _EP2ISOINPKTS
                                    331 	.globl _EP8FIFOPFL
                                    332 	.globl _EP8FIFOPFH
                                    333 	.globl _EP6FIFOPFL
                                    334 	.globl _EP6FIFOPFH
                                    335 	.globl _EP4FIFOPFL
                                    336 	.globl _EP4FIFOPFH
                                    337 	.globl _EP2FIFOPFL
                                    338 	.globl _EP2FIFOPFH
                                    339 	.globl _EP8AUTOINLENL
                                    340 	.globl _EP8AUTOINLENH
                                    341 	.globl _EP6AUTOINLENL
                                    342 	.globl _EP6AUTOINLENH
                                    343 	.globl _EP4AUTOINLENL
                                    344 	.globl _EP4AUTOINLENH
                                    345 	.globl _EP2AUTOINLENL
                                    346 	.globl _EP2AUTOINLENH
                                    347 	.globl _EP8FIFOCFG
                                    348 	.globl _EP6FIFOCFG
                                    349 	.globl _EP4FIFOCFG
                                    350 	.globl _EP2FIFOCFG
                                    351 	.globl _EP8CFG
                                    352 	.globl _EP6CFG
                                    353 	.globl _EP4CFG
                                    354 	.globl _EP2CFG
                                    355 	.globl _EP1INCFG
                                    356 	.globl _EP1OUTCFG
                                    357 	.globl _REVCTL
                                    358 	.globl _REVID
                                    359 	.globl _FIFOPINPOLAR
                                    360 	.globl _UART230
                                    361 	.globl _BPADDRL
                                    362 	.globl _BPADDRH
                                    363 	.globl _BREAKPT
                                    364 	.globl _FIFORESET
                                    365 	.globl _PINFLAGSCD
                                    366 	.globl _PINFLAGSAB
                                    367 	.globl _IFCONFIG
                                    368 	.globl _CPUCS
                                    369 	.globl _RES_WAVEDATA_END
                                    370 	.globl _GPIF_WAVE_DATA
                                    371 	.globl _on
                                    372 	.globl _dosud
                                    373 	.globl _config
                                    374 	.globl _handle_set_interface_PARM_2
                                    375 	.globl _count
                                    376 	.globl _sudav_isr
                                    377 	.globl _usbreset_isr
                                    378 	.globl _hispeed_isr
                                    379 ;--------------------------------------------------------
                                    380 ; special function registers
                                    381 ;--------------------------------------------------------
                                    382 	.area RSEG    (ABS,DATA)
      000000                        383 	.org 0x0000
                           000080   384 _IOA	=	0x0080
                           000081   385 _SP	=	0x0081
                           000082   386 _DPL	=	0x0082
                           000083   387 _DPH	=	0x0083
                           000084   388 _DPL1	=	0x0084
                           000085   389 _DPH1	=	0x0085
                           000086   390 _DPS	=	0x0086
                           000087   391 _PCON	=	0x0087
                           000088   392 _TCON	=	0x0088
                           000089   393 _TMOD	=	0x0089
                           00008A   394 _TL0	=	0x008a
                           00008B   395 _TL1	=	0x008b
                           00008C   396 _TH0	=	0x008c
                           00008D   397 _TH1	=	0x008d
                           00008E   398 _CKCON	=	0x008e
                           000090   399 _IOB	=	0x0090
                           000091   400 _EXIF	=	0x0091
                           000092   401 __XPAGE	=	0x0092
                           000098   402 _SCON0	=	0x0098
                           000099   403 _SBUF0	=	0x0099
                           00009A   404 _AUTOPTRH1	=	0x009a
                           00009B   405 _AUTOPTRL1	=	0x009b
                           00009D   406 _AUTOPTRH2	=	0x009d
                           00009E   407 _AUTOPTRL2	=	0x009e
                           0000A0   408 _IOC	=	0x00a0
                           0000A1   409 _INT2CLR	=	0x00a1
                           0000A2   410 _INT4CLR	=	0x00a2
                           0000A8   411 _IE	=	0x00a8
                           0000AA   412 _EP2468STAT	=	0x00aa
                           0000AB   413 _EP24FIFOFLGS	=	0x00ab
                           0000AC   414 _EP68FIFOFLGS	=	0x00ac
                           0000AF   415 _AUTOPTRSETUP	=	0x00af
                           0000B0   416 _IOD	=	0x00b0
                           0000B1   417 _IOE	=	0x00b1
                           0000B2   418 _OEA	=	0x00b2
                           0000B3   419 _OEB	=	0x00b3
                           0000B4   420 _OEC	=	0x00b4
                           0000B5   421 _OED	=	0x00b5
                           0000B6   422 _OEE	=	0x00b6
                           0000B8   423 _IP	=	0x00b8
                           0000BA   424 _EP01STAT	=	0x00ba
                           0000BB   425 _GPIFTRIG	=	0x00bb
                           0000BD   426 _GPIFSGLDATH	=	0x00bd
                           0000BE   427 _GPIFSGLDATLX	=	0x00be
                           0000BF   428 _GPIFSGLDATLNOX	=	0x00bf
                           0000C0   429 _SCON1	=	0x00c0
                           0000C1   430 _SBUF1	=	0x00c1
                           0000C8   431 _T2CON	=	0x00c8
                           0000CA   432 _RCAP2L	=	0x00ca
                           0000CB   433 _RCAP2H	=	0x00cb
                           0000CC   434 _TL2	=	0x00cc
                           0000CD   435 _TH2	=	0x00cd
                           0000D0   436 _PSW	=	0x00d0
                           0000D8   437 _EICON	=	0x00d8
                           0000E0   438 _ACC	=	0x00e0
                           0000E8   439 _EIE	=	0x00e8
                           0000F0   440 _B	=	0x00f0
                           0000F8   441 _EIP	=	0x00f8
                                    442 ;--------------------------------------------------------
                                    443 ; special function bits
                                    444 ;--------------------------------------------------------
                                    445 	.area RSEG    (ABS,DATA)
      000000                        446 	.org 0x0000
                           000080   447 _PA0	=	0x0080
                           000081   448 _PA1	=	0x0081
                           000082   449 _PA2	=	0x0082
                           000083   450 _PA3	=	0x0083
                           000084   451 _PA4	=	0x0084
                           000085   452 _PA5	=	0x0085
                           000086   453 _PA6	=	0x0086
                           000087   454 _PA7	=	0x0087
                           000088   455 _IT0	=	0x0088
                           000089   456 _IE0	=	0x0089
                           00008A   457 _IT1	=	0x008a
                           00008B   458 _IE1	=	0x008b
                           00008C   459 _TR0	=	0x008c
                           00008D   460 _TF0	=	0x008d
                           00008E   461 _TR1	=	0x008e
                           00008F   462 _TF1	=	0x008f
                           000090   463 _PB0	=	0x0090
                           000091   464 _PB1	=	0x0091
                           000092   465 _PB2	=	0x0092
                           000093   466 _PB3	=	0x0093
                           000094   467 _PB4	=	0x0094
                           000095   468 _PB5	=	0x0095
                           000096   469 _PB6	=	0x0096
                           000097   470 _PB7	=	0x0097
                           000098   471 _RI	=	0x0098
                           000099   472 _TI	=	0x0099
                           00009A   473 _RB8	=	0x009a
                           00009B   474 _TB8	=	0x009b
                           00009C   475 _REN	=	0x009c
                           00009D   476 _SM2	=	0x009d
                           00009E   477 _SM1	=	0x009e
                           00009F   478 _SM0	=	0x009f
                           0000A0   479 _PC0	=	0x00a0
                           0000A1   480 _PC1	=	0x00a1
                           0000A2   481 _PC2	=	0x00a2
                           0000A3   482 _PC3	=	0x00a3
                           0000A4   483 _PC4	=	0x00a4
                           0000A5   484 _PC5	=	0x00a5
                           0000A6   485 _PC6	=	0x00a6
                           0000A7   486 _PC7	=	0x00a7
                           0000A8   487 _EX0	=	0x00a8
                           0000A9   488 _ET0	=	0x00a9
                           0000AA   489 _EX1	=	0x00aa
                           0000AB   490 _ET1	=	0x00ab
                           0000AC   491 _ES0	=	0x00ac
                           0000AD   492 _ET2	=	0x00ad
                           0000AE   493 _ES1	=	0x00ae
                           0000AF   494 _EA	=	0x00af
                           0000B0   495 _PD0	=	0x00b0
                           0000B1   496 _PD1	=	0x00b1
                           0000B2   497 _PD2	=	0x00b2
                           0000B3   498 _PD3	=	0x00b3
                           0000B4   499 _PD4	=	0x00b4
                           0000B5   500 _PD5	=	0x00b5
                           0000B6   501 _PD6	=	0x00b6
                           0000B7   502 _PD7	=	0x00b7
                           0000B8   503 _PX0	=	0x00b8
                           0000B9   504 _PT0	=	0x00b9
                           0000BA   505 _PX1	=	0x00ba
                           0000BB   506 _PT1	=	0x00bb
                           0000BC   507 _PS0	=	0x00bc
                           0000BD   508 _PT2	=	0x00bd
                           0000BE   509 _PS1	=	0x00be
                           0000C0   510 _RI1	=	0x00c0
                           0000C1   511 _TI1	=	0x00c1
                           0000C2   512 _RB81	=	0x00c2
                           0000C3   513 _TB81	=	0x00c3
                           0000C4   514 _REN1	=	0x00c4
                           0000C5   515 _SM21	=	0x00c5
                           0000C6   516 _SM11	=	0x00c6
                           0000C7   517 _SM01	=	0x00c7
                           0000C8   518 _CP_RL2	=	0x00c8
                           0000C9   519 _C_T2	=	0x00c9
                           0000CA   520 _TR2	=	0x00ca
                           0000CB   521 _EXEN2	=	0x00cb
                           0000CC   522 _TCLK	=	0x00cc
                           0000CD   523 _RCLK	=	0x00cd
                           0000CE   524 _EXF2	=	0x00ce
                           0000CF   525 _TF2	=	0x00cf
                           0000D0   526 _P	=	0x00d0
                           0000D1   527 _FL	=	0x00d1
                           0000D2   528 _OV	=	0x00d2
                           0000D3   529 _RS0	=	0x00d3
                           0000D4   530 _RS1	=	0x00d4
                           0000D5   531 _F0	=	0x00d5
                           0000D6   532 _AC	=	0x00d6
                           0000D7   533 _CY	=	0x00d7
                           0000DB   534 _INT6	=	0x00db
                           0000DC   535 _RESI	=	0x00dc
                           0000DD   536 _ERESI	=	0x00dd
                           0000DF   537 _SMOD1	=	0x00df
                           0000E8   538 _EUSB	=	0x00e8
                           0000E9   539 _EI2C	=	0x00e9
                           0000EA   540 _EIEX4	=	0x00ea
                           0000EB   541 _EIEX5	=	0x00eb
                           0000EC   542 _EIEX6	=	0x00ec
                           0000F8   543 _PUSB	=	0x00f8
                           0000F9   544 _PI2C	=	0x00f9
                           0000FA   545 _EIPX4	=	0x00fa
                           0000FB   546 _EIPX5	=	0x00fb
                           0000FC   547 _EIPX6	=	0x00fc
                                    548 ;--------------------------------------------------------
                                    549 ; overlayable register banks
                                    550 ;--------------------------------------------------------
                                    551 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        552 	.ds 8
                                    553 ;--------------------------------------------------------
                                    554 ; overlayable bit register bank
                                    555 ;--------------------------------------------------------
                                    556 	.area BIT_BANK	(REL,OVR,DATA)
      000021                        557 bits:
      000021                        558 	.ds 1
                           008000   559 	b0 = bits[0]
                           008100   560 	b1 = bits[1]
                           008200   561 	b2 = bits[2]
                           008300   562 	b3 = bits[3]
                           008400   563 	b4 = bits[4]
                           008500   564 	b5 = bits[5]
                           008600   565 	b6 = bits[6]
                           008700   566 	b7 = bits[7]
                                    567 ;--------------------------------------------------------
                                    568 ; internal ram data
                                    569 ;--------------------------------------------------------
                                    570 	.area DSEG    (DATA)
      000008                        571 _count::
      000008                        572 	.ds 2
      00000A                        573 _handle_set_interface_PARM_2:
      00000A                        574 	.ds 1
      00000B                        575 _config::
      00000B                        576 	.ds 1
                                    577 ;--------------------------------------------------------
                                    578 ; overlayable items in internal ram
                                    579 ;--------------------------------------------------------
                                    580 	.area	OSEG    (OVR,DATA)
      000019                        581 _handle_get_interface_PARM_2:
      000019                        582 	.ds 3
                                    583 ;--------------------------------------------------------
                                    584 ; Stack segment in internal ram
                                    585 ;--------------------------------------------------------
                                    586 	.area	SSEG
      000080                        587 __start__stack:
      000080                        588 	.ds	1
                                    589 
                                    590 ;--------------------------------------------------------
                                    591 ; indirectly addressable internal ram data
                                    592 ;--------------------------------------------------------
                                    593 	.area ISEG    (DATA)
                                    594 ;--------------------------------------------------------
                                    595 ; absolute internal ram data
                                    596 ;--------------------------------------------------------
                                    597 	.area IABS    (ABS,DATA)
                                    598 	.area IABS    (ABS,DATA)
                                    599 ;--------------------------------------------------------
                                    600 ; bit data
                                    601 ;--------------------------------------------------------
                                    602 	.area BSEG    (BIT)
      000000                        603 _dosud::
      000000                        604 	.ds 1
      000001                        605 _on::
      000001                        606 	.ds 1
                                    607 ;--------------------------------------------------------
                                    608 ; paged external ram data
                                    609 ;--------------------------------------------------------
                                    610 	.area PSEG    (PAG,XDATA)
                                    611 ;--------------------------------------------------------
                                    612 ; external ram data
                                    613 ;--------------------------------------------------------
                                    614 	.area XSEG    (XDATA)
                           00E400   615 _GPIF_WAVE_DATA	=	0xe400
                           00E480   616 _RES_WAVEDATA_END	=	0xe480
                           00E600   617 _CPUCS	=	0xe600
                           00E601   618 _IFCONFIG	=	0xe601
                           00E602   619 _PINFLAGSAB	=	0xe602
                           00E603   620 _PINFLAGSCD	=	0xe603
                           00E604   621 _FIFORESET	=	0xe604
                           00E605   622 _BREAKPT	=	0xe605
                           00E606   623 _BPADDRH	=	0xe606
                           00E607   624 _BPADDRL	=	0xe607
                           00E608   625 _UART230	=	0xe608
                           00E609   626 _FIFOPINPOLAR	=	0xe609
                           00E60A   627 _REVID	=	0xe60a
                           00E60B   628 _REVCTL	=	0xe60b
                           00E610   629 _EP1OUTCFG	=	0xe610
                           00E611   630 _EP1INCFG	=	0xe611
                           00E612   631 _EP2CFG	=	0xe612
                           00E613   632 _EP4CFG	=	0xe613
                           00E614   633 _EP6CFG	=	0xe614
                           00E615   634 _EP8CFG	=	0xe615
                           00E618   635 _EP2FIFOCFG	=	0xe618
                           00E619   636 _EP4FIFOCFG	=	0xe619
                           00E61A   637 _EP6FIFOCFG	=	0xe61a
                           00E61B   638 _EP8FIFOCFG	=	0xe61b
                           00E620   639 _EP2AUTOINLENH	=	0xe620
                           00E621   640 _EP2AUTOINLENL	=	0xe621
                           00E622   641 _EP4AUTOINLENH	=	0xe622
                           00E623   642 _EP4AUTOINLENL	=	0xe623
                           00E624   643 _EP6AUTOINLENH	=	0xe624
                           00E625   644 _EP6AUTOINLENL	=	0xe625
                           00E626   645 _EP8AUTOINLENH	=	0xe626
                           00E627   646 _EP8AUTOINLENL	=	0xe627
                           00E630   647 _EP2FIFOPFH	=	0xe630
                           00E631   648 _EP2FIFOPFL	=	0xe631
                           00E632   649 _EP4FIFOPFH	=	0xe632
                           00E633   650 _EP4FIFOPFL	=	0xe633
                           00E634   651 _EP6FIFOPFH	=	0xe634
                           00E635   652 _EP6FIFOPFL	=	0xe635
                           00E636   653 _EP8FIFOPFH	=	0xe636
                           00E637   654 _EP8FIFOPFL	=	0xe637
                           00E640   655 _EP2ISOINPKTS	=	0xe640
                           00E641   656 _EP4ISOINPKTS	=	0xe641
                           00E642   657 _EP6ISOINPKTS	=	0xe642
                           00E643   658 _EP8ISOINPKTS	=	0xe643
                           00E648   659 _INPKTEND	=	0xe648
                           00E649   660 _OUTPKTEND	=	0xe649
                           00E650   661 _EP2FIFOIE	=	0xe650
                           00E651   662 _EP2FIFOIRQ	=	0xe651
                           00E652   663 _EP4FIFOIE	=	0xe652
                           00E653   664 _EP4FIFOIRQ	=	0xe653
                           00E654   665 _EP6FIFOIE	=	0xe654
                           00E655   666 _EP6FIFOIRQ	=	0xe655
                           00E656   667 _EP8FIFOIE	=	0xe656
                           00E657   668 _EP8FIFOIRQ	=	0xe657
                           00E658   669 _IBNIE	=	0xe658
                           00E659   670 _IBNIRQ	=	0xe659
                           00E65A   671 _NAKIE	=	0xe65a
                           00E65B   672 _NAKIRQ	=	0xe65b
                           00E65C   673 _USBIE	=	0xe65c
                           00E65D   674 _USBIRQ	=	0xe65d
                           00E65E   675 _EPIE	=	0xe65e
                           00E65F   676 _EPIRQ	=	0xe65f
                           00E660   677 _GPIFIE	=	0xe660
                           00E661   678 _GPIFIRQ	=	0xe661
                           00E662   679 _USBERRIE	=	0xe662
                           00E663   680 _USBERRIRQ	=	0xe663
                           00E664   681 _ERRCNTLIM	=	0xe664
                           00E665   682 _CLRERRCNT	=	0xe665
                           00E666   683 _INT2IVEC	=	0xe666
                           00E667   684 _INT4IVEC	=	0xe667
                           00E668   685 _INTSETUP	=	0xe668
                           00E670   686 _PORTACFG	=	0xe670
                           00E671   687 _PORTCCFG	=	0xe671
                           00E672   688 _PORTECFG	=	0xe672
                           00E678   689 _I2CS	=	0xe678
                           00E679   690 _I2DAT	=	0xe679
                           00E67A   691 _I2CTL	=	0xe67a
                           00E67B   692 _XAUTODAT1	=	0xe67b
                           00E67C   693 _XAUTODAT2	=	0xe67c
                           00E680   694 _USBCS	=	0xe680
                           00E681   695 _SUSPEND	=	0xe681
                           00E682   696 _WAKEUPCS	=	0xe682
                           00E683   697 _TOGCTL	=	0xe683
                           00E684   698 _USBFRAMEH	=	0xe684
                           00E685   699 _USBFRAMEL	=	0xe685
                           00E686   700 _MICROFRAME	=	0xe686
                           00E687   701 _FNADDR	=	0xe687
                           00E68A   702 _EP0BCH	=	0xe68a
                           00E68B   703 _EP0BCL	=	0xe68b
                           00E68D   704 _EP1OUTBC	=	0xe68d
                           00E68F   705 _EP1INBC	=	0xe68f
                           00E690   706 _EP2BCH	=	0xe690
                           00E691   707 _EP2BCL	=	0xe691
                           00E694   708 _EP4BCH	=	0xe694
                           00E695   709 _EP4BCL	=	0xe695
                           00E698   710 _EP6BCH	=	0xe698
                           00E699   711 _EP6BCL	=	0xe699
                           00E69C   712 _EP8BCH	=	0xe69c
                           00E69D   713 _EP8BCL	=	0xe69d
                           00E6A0   714 _EP0CS	=	0xe6a0
                           00E6A1   715 _EP1OUTCS	=	0xe6a1
                           00E6A2   716 _EP1INCS	=	0xe6a2
                           00E6A3   717 _EP2CS	=	0xe6a3
                           00E6A4   718 _EP4CS	=	0xe6a4
                           00E6A5   719 _EP6CS	=	0xe6a5
                           00E6A6   720 _EP8CS	=	0xe6a6
                           00E6A7   721 _EP2FIFOFLGS	=	0xe6a7
                           00E6A8   722 _EP4FIFOFLGS	=	0xe6a8
                           00E6A9   723 _EP6FIFOFLGS	=	0xe6a9
                           00E6AA   724 _EP8FIFOFLGS	=	0xe6aa
                           00E6AB   725 _EP2FIFOBCH	=	0xe6ab
                           00E6AC   726 _EP2FIFOBCL	=	0xe6ac
                           00E6AD   727 _EP4FIFOBCH	=	0xe6ad
                           00E6AE   728 _EP4FIFOBCL	=	0xe6ae
                           00E6AF   729 _EP6FIFOBCH	=	0xe6af
                           00E6B0   730 _EP6FIFOBCL	=	0xe6b0
                           00E6B1   731 _EP8FIFOBCH	=	0xe6b1
                           00E6B2   732 _EP8FIFOBCL	=	0xe6b2
                           00E6B3   733 _SUDPTRH	=	0xe6b3
                           00E6B4   734 _SUDPTRL	=	0xe6b4
                           00E6B5   735 _SUDPTRCTL	=	0xe6b5
                           00E6B8   736 _SETUPDAT	=	0xe6b8
                           00E6C0   737 _GPIFWFSELECT	=	0xe6c0
                           00E6C1   738 _GPIFIDLECS	=	0xe6c1
                           00E6C2   739 _GPIFIDLECTL	=	0xe6c2
                           00E6C3   740 _GPIFCTLCFG	=	0xe6c3
                           00E6C4   741 _GPIFADRH	=	0xe6c4
                           00E6C5   742 _GPIFADRL	=	0xe6c5
                           00E6CE   743 _GPIFTCB3	=	0xe6ce
                           00E6CF   744 _GPIFTCB2	=	0xe6cf
                           00E6D0   745 _GPIFTCB1	=	0xe6d0
                           00E6D1   746 _GPIFTCB0	=	0xe6d1
                           00E6D2   747 _EP2GPIFFLGSEL	=	0xe6d2
                           00E6D3   748 _EP2GPIFPFSTOP	=	0xe6d3
                           00E6D4   749 _EP2GPIFTRIG	=	0xe6d4
                           00E6DA   750 _EP4GPIFFLGSEL	=	0xe6da
                           00E6DB   751 _EP4GPIFPFSTOP	=	0xe6db
                           00E6DC   752 _EP4GPIFTRIG	=	0xe6dc
                           00E6E2   753 _EP6GPIFFLGSEL	=	0xe6e2
                           00E6E3   754 _EP6GPIFPFSTOP	=	0xe6e3
                           00E6E4   755 _EP6GPIFTRIG	=	0xe6e4
                           00E6EA   756 _EP8GPIFFLGSEL	=	0xe6ea
                           00E6EB   757 _EP8GPIFPFSTOP	=	0xe6eb
                           00E6EC   758 _EP8GPIFTRIG	=	0xe6ec
                           00E6F0   759 _XGPIFSGLDATH	=	0xe6f0
                           00E6F1   760 _XGPIFSGLDATLX	=	0xe6f1
                           00E6F2   761 _XGPIFSGLDATLNOX	=	0xe6f2
                           00E6F3   762 _GPIFREADYCFG	=	0xe6f3
                           00E6F4   763 _GPIFREADYSTAT	=	0xe6f4
                           00E6F5   764 _GPIFABORT	=	0xe6f5
                           00E6C6   765 _FLOWSTATE	=	0xe6c6
                           00E6C7   766 _FLOWLOGIC	=	0xe6c7
                           00E6C8   767 _FLOWEQ0CTL	=	0xe6c8
                           00E6C9   768 _FLOWEQ1CTL	=	0xe6c9
                           00E6CA   769 _FLOWHOLDOFF	=	0xe6ca
                           00E6CB   770 _FLOWSTB	=	0xe6cb
                           00E6CC   771 _FLOWSTBEDGE	=	0xe6cc
                           00E6CD   772 _FLOWSTBHPERIOD	=	0xe6cd
                           00E60C   773 _GPIFHOLDAMOUNT	=	0xe60c
                           00E67D   774 _UDMACRCH	=	0xe67d
                           00E67E   775 _UDMACRCL	=	0xe67e
                           00E67F   776 _UDMACRCQUAL	=	0xe67f
                           00E740   777 _EP0BUF	=	0xe740
                           00E780   778 _EP1OUTBUF	=	0xe780
                           00E7C0   779 _EP1INBUF	=	0xe7c0
                           00F000   780 _EP2FIFOBUF	=	0xf000
                           00F400   781 _EP4FIFOBUF	=	0xf400
                           00F800   782 _EP6FIFOBUF	=	0xf800
                           00FC00   783 _EP8FIFOBUF	=	0xfc00
                           00E628   784 _ECCCFG	=	0xe628
                           00E629   785 _ECCRESET	=	0xe629
                           00E62A   786 _ECC1B0	=	0xe62a
                           00E62B   787 _ECC1B1	=	0xe62b
                           00E62C   788 _ECC1B2	=	0xe62c
                           00E62D   789 _ECC2B0	=	0xe62d
                           00E62E   790 _ECC2B1	=	0xe62e
                           00E62F   791 _ECC2B2	=	0xe62f
                           00E50D   792 _GPCR2	=	0xe50d
                           008800   793 _D2ON	=	0x8800
                           008000   794 _D2OFF	=	0x8000
                           009800   795 _D3ON	=	0x9800
                           009000   796 _D3OFF	=	0x9000
                           00A800   797 _D4ON	=	0xa800
                           00A000   798 _D4OFF	=	0xa000
                           00B800   799 _D5ON	=	0xb800
                           00B000   800 _D5OFF	=	0xb000
                                    801 ;--------------------------------------------------------
                                    802 ; absolute external ram data
                                    803 ;--------------------------------------------------------
                                    804 	.area XABS    (ABS,XDATA)
                                    805 ;--------------------------------------------------------
                                    806 ; external initialized ram data
                                    807 ;--------------------------------------------------------
                                    808 	.area XISEG   (XDATA)
                                    809 	.area HOME    (CODE)
                                    810 	.area GSINIT0 (CODE)
                                    811 	.area GSINIT1 (CODE)
                                    812 	.area GSINIT2 (CODE)
                                    813 	.area GSINIT3 (CODE)
                                    814 	.area GSINIT4 (CODE)
                                    815 	.area GSINIT5 (CODE)
                                    816 	.area GSINIT  (CODE)
                                    817 	.area GSFINAL (CODE)
                                    818 	.area CSEG    (CODE)
                                    819 ;--------------------------------------------------------
                                    820 ; interrupt vector
                                    821 ;--------------------------------------------------------
                                    822 	.area HOME    (CODE)
      000000                        823 __interrupt_vect:
      000000 02 00 59         [24]  824 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  825 	reti
      000004                        826 	.ds	7
      00000B 32               [24]  827 	reti
      00000C                        828 	.ds	7
      000013 32               [24]  829 	reti
      000014                        830 	.ds	7
      00001B 32               [24]  831 	reti
      00001C                        832 	.ds	7
      000023 32               [24]  833 	reti
      000024                        834 	.ds	7
      00002B 32               [24]  835 	reti
      00002C                        836 	.ds	7
      000033 32               [24]  837 	reti
      000034                        838 	.ds	7
      00003B 32               [24]  839 	reti
      00003C                        840 	.ds	7
      000043 02 3F 00         [24]  841 	ljmp	_usb_isr
      000046                        842 	.ds	5
      00004B 32               [24]  843 	reti
      00004C                        844 	.ds	7
      000053 02 3F 00         [24]  845 	ljmp	_gpif_isr
                                    846 ;--------------------------------------------------------
                                    847 ; global & static initialisations
                                    848 ;--------------------------------------------------------
                                    849 	.area HOME    (CODE)
                                    850 	.area GSINIT  (CODE)
                                    851 	.area GSFINAL (CODE)
                                    852 	.area GSINIT  (CODE)
                                    853 	.globl __sdcc_gsinit_startup
                                    854 	.globl __sdcc_program_startup
                                    855 	.globl __start__stack
                                    856 	.globl __mcs51_genXINIT
                                    857 	.globl __mcs51_genXRAMCLEAR
                                    858 	.globl __mcs51_genRAMCLEAR
                                    859 ;	build/../eeprom.c:177: volatile BYTE config=1;
      0000B2 75 0B 01         [24]  860 	mov	_config,#0x01
                                    861 	.area GSFINAL (CODE)
      0000C7 02 00 56         [24]  862 	ljmp	__sdcc_program_startup
                                    863 ;--------------------------------------------------------
                                    864 ; Home
                                    865 ;--------------------------------------------------------
                                    866 	.area HOME    (CODE)
                                    867 	.area HOME    (CODE)
      000056                        868 __sdcc_program_startup:
      000056 02 00 CA         [24]  869 	ljmp	_main
                                    870 ;	return from main will return to caller
                                    871 ;--------------------------------------------------------
                                    872 ; code
                                    873 ;--------------------------------------------------------
                                    874 	.area CSEG    (CODE)
                                    875 ;------------------------------------------------------------
                                    876 ;Allocation info for local variables in function 'main'
                                    877 ;------------------------------------------------------------
                                    878 ;	build/../eeprom.c:39: void main(void) {
                                    879 ;	-----------------------------------------
                                    880 ;	 function main
                                    881 ;	-----------------------------------------
      0000CA                        882 _main:
                           000007   883 	ar7 = 0x07
                           000006   884 	ar6 = 0x06
                           000005   885 	ar5 = 0x05
                           000004   886 	ar4 = 0x04
                           000003   887 	ar3 = 0x03
                           000002   888 	ar2 = 0x02
                           000001   889 	ar1 = 0x01
                           000000   890 	ar0 = 0x00
                                    891 ;	build/../eeprom.c:41: REVCTL = 0; // not using advanced endpoint controls
      0000CA 90 E6 0B         [24]  892 	mov	dptr,#_REVCTL
      0000CD E4               [12]  893 	clr	a
      0000CE F0               [24]  894 	movx	@dptr,a
                                    895 ;	build/../eeprom.c:43: dosud=FALSE;
                                    896 ;	assignBit
      0000CF C2 00            [12]  897 	clr	_dosud
                                    898 ;	build/../eeprom.c:44: on=FALSE;
                                    899 ;	assignBit
      0000D1 C2 01            [12]  900 	clr	_on
                                    901 ;	build/../eeprom.c:46: REVCTL = 0x03; // DYN_OUT=1, ENH_PKT=1
      0000D3 90 E6 0B         [24]  902 	mov	dptr,#_REVCTL
      0000D6 74 03            [12]  903 	mov	a,#0x03
      0000D8 F0               [24]  904 	movx	@dptr,a
                                    905 ;	build/../eeprom.c:48: RENUMERATE_UNCOND();
      0000D9 90 E6 80         [24]  906 	mov	dptr,#_USBCS
      0000DC E0               [24]  907 	movx	a,@dptr
      0000DD 43 E0 0A         [24]  908 	orl	acc,#0x0a
      0000E0 F0               [24]  909 	movx	@dptr,a
      0000E1 90 05 DC         [24]  910 	mov	dptr,#0x05dc
      0000E4 12 0D 87         [24]  911 	lcall	_delay
      0000E7 90 E6 80         [24]  912 	mov	dptr,#_USBCS
      0000EA E0               [24]  913 	movx	a,@dptr
      0000EB 53 E0 F7         [24]  914 	anl	acc,#0xf7
      0000EE F0               [24]  915 	movx	@dptr,a
                                    916 ;	build/../eeprom.c:51: SETCPUFREQ(CLK_48M);
      0000EF 90 E6 00         [24]  917 	mov	dptr,#_CPUCS
      0000F2 E0               [24]  918 	movx	a,@dptr
      0000F3 54 E7            [12]  919 	anl	a,#0xe7
      0000F5 44 10            [12]  920 	orl	a,#0x10
      0000F7 F0               [24]  921 	movx	@dptr,a
                                    922 ;	build/../eeprom.c:52: sio0_init(57600); // needed for printf on sio0 
      0000F8 90 E1 00         [24]  923 	mov	dptr,#0xe100
      0000FB E4               [12]  924 	clr	a
      0000FC F5 F0            [12]  925 	mov	b,a
      0000FE 12 0C 89         [24]  926 	lcall	_sio0_init
                                    927 ;	build/../eeprom.c:55: OEA |= (1<<PA0) | (1<<PA1);
      000101 A2 80            [12]  928 	mov	c,_PA0
      000103 E4               [12]  929 	clr	a
      000104 33               [12]  930 	rlc	a
      000105 FF               [12]  931 	mov	r7,a
      000106 8F F0            [24]  932 	mov	b,r7
      000108 05 F0            [12]  933 	inc	b
      00010A 74 01            [12]  934 	mov	a,#0x01
      00010C 80 02            [24]  935 	sjmp	00118$
      00010E                        936 00116$:
      00010E 25 E0            [12]  937 	add	a,acc
      000110                        938 00118$:
      000110 D5 F0 FB         [24]  939 	djnz	b,00116$
      000113 FF               [12]  940 	mov	r7,a
      000114 A2 81            [12]  941 	mov	c,_PA1
      000116 E4               [12]  942 	clr	a
      000117 33               [12]  943 	rlc	a
      000118 FE               [12]  944 	mov	r6,a
      000119 8E F0            [24]  945 	mov	b,r6
      00011B 05 F0            [12]  946 	inc	b
      00011D 74 01            [12]  947 	mov	a,#0x01
      00011F 80 02            [24]  948 	sjmp	00121$
      000121                        949 00119$:
      000121 25 E0            [12]  950 	add	a,acc
      000123                        951 00121$:
      000123 D5 F0 FB         [24]  952 	djnz	b,00119$
      000126 FE               [12]  953 	mov	r6,a
      000127 4F               [12]  954 	orl	a,r7
      000128 42 B2            [12]  955 	orl	_OEA,a
                                    956 ;	build/../eeprom.c:57: USE_USB_INTS();
                                    957 ;	assignBit
      00012A D2 E8            [12]  958 	setb	_EUSB
      00012C 90 E6 68         [24]  959 	mov	dptr,#_INTSETUP
      00012F E0               [24]  960 	movx	a,@dptr
      000130 43 E0 08         [24]  961 	orl	acc,#0x08
      000133 F0               [24]  962 	movx	@dptr,a
                                    963 ;	build/../eeprom.c:59: ENABLE_SUDAV();
      000134 90 E6 5C         [24]  964 	mov	dptr,#_USBIE
      000137 E0               [24]  965 	movx	a,@dptr
      000138 43 E0 01         [24]  966 	orl	acc,#0x01
      00013B F0               [24]  967 	movx	@dptr,a
                                    968 ;	build/../eeprom.c:60: ENABLE_USBRESET();
      00013C 90 E6 5C         [24]  969 	mov	dptr,#_USBIE
      00013F E0               [24]  970 	movx	a,@dptr
      000140 43 E0 10         [24]  971 	orl	acc,#0x10
      000143 F0               [24]  972 	movx	@dptr,a
                                    973 ;	build/../eeprom.c:61: ENABLE_HISPEED();
      000144 90 E6 5C         [24]  974 	mov	dptr,#_USBIE
      000147 E0               [24]  975 	movx	a,@dptr
      000148 43 E0 20         [24]  976 	orl	acc,#0x20
      00014B F0               [24]  977 	movx	@dptr,a
                                    978 ;	build/../eeprom.c:63: EA=1;
                                    979 ;	assignBit
      00014C D2 AF            [12]  980 	setb	_EA
                                    981 ;	build/../eeprom.c:66: while(TRUE) {
      00014E                        982 00104$:
                                    983 ;	build/../eeprom.c:69: if (dosud) {
      00014E 30 00 FD         [24]  984 	jnb	_dosud,00104$
                                    985 ;	build/../eeprom.c:70: handle_setupdata();
      000151 12 08 57         [24]  986 	lcall	_handle_setupdata
                                    987 ;	build/../eeprom.c:71: dosud=FALSE;
                                    988 ;	assignBit
      000154 C2 00            [12]  989 	clr	_dosud
                                    990 ;	build/../eeprom.c:77: }
      000156 80 F6            [24]  991 	sjmp	00104$
                                    992 ;------------------------------------------------------------
                                    993 ;Allocation info for local variables in function 'handle_get_descriptor'
                                    994 ;------------------------------------------------------------
                                    995 ;	build/../eeprom.c:79: BOOL handle_get_descriptor(void) {
                                    996 ;	-----------------------------------------
                                    997 ;	 function handle_get_descriptor
                                    998 ;	-----------------------------------------
      000158                        999 _handle_get_descriptor:
                                   1000 ;	build/../eeprom.c:80: return FALSE;
      000158 75 82 00         [24] 1001 	mov	dpl,#0x00
                                   1002 ;	build/../eeprom.c:81: }
      00015B 22               [24] 1003 	ret
                                   1004 ;------------------------------------------------------------
                                   1005 ;Allocation info for local variables in function 'handle_vendorcommand'
                                   1006 ;------------------------------------------------------------
                                   1007 ;cmd                       Allocated to registers r7 
                                   1008 ;addr                      Allocated to registers r6 r5 
                                   1009 ;len                       Allocated to registers r4 r3 
                                   1010 ;cur_read                  Allocated to registers r2 
                                   1011 ;cur_write                 Allocated to registers r7 
                                   1012 ;c                         Allocated with name '_handle_vendorcommand_c_327680_73'
                                   1013 ;dataLen                   Allocated to registers r6 r7 
                                   1014 ;i                         Allocated to registers r4 r5 
                                   1015 ;------------------------------------------------------------
                                   1016 ;	build/../eeprom.c:86: BOOL handle_vendorcommand(BYTE cmd) {
                                   1017 ;	-----------------------------------------
                                   1018 ;	 function handle_vendorcommand
                                   1019 ;	-----------------------------------------
      00015C                       1020 _handle_vendorcommand:
      00015C AF 82            [24] 1021 	mov	r7,dpl
                                   1022 ;	build/../eeprom.c:87: WORD addr=SETUP_VALUE(),len=SETUP_LENGTH();
      00015E 90 E6 BB         [24] 1023 	mov	dptr,#(_SETUPDAT + 0x0003)
      000161 E0               [24] 1024 	movx	a,@dptr
      000162 FD               [12] 1025 	mov	r5,a
      000163 7E 00            [12] 1026 	mov	r6,#0x00
      000165 90 E6 BA         [24] 1027 	mov	dptr,#(_SETUPDAT + 0x0002)
      000168 E0               [24] 1028 	movx	a,@dptr
      000169 7B 00            [12] 1029 	mov	r3,#0x00
      00016B 42 06            [12] 1030 	orl	ar6,a
      00016D EB               [12] 1031 	mov	a,r3
      00016E 42 05            [12] 1032 	orl	ar5,a
      000170 90 E6 BF         [24] 1033 	mov	dptr,#(_SETUPDAT + 0x0007)
      000173 E0               [24] 1034 	movx	a,@dptr
      000174 FB               [12] 1035 	mov	r3,a
      000175 7C 00            [12] 1036 	mov	r4,#0x00
      000177 90 E6 BE         [24] 1037 	mov	dptr,#(_SETUPDAT + 0x0006)
      00017A E0               [24] 1038 	movx	a,@dptr
      00017B 7A 00            [12] 1039 	mov	r2,#0x00
      00017D 42 04            [12] 1040 	orl	ar4,a
      00017F EA               [12] 1041 	mov	a,r2
      000180 42 03            [12] 1042 	orl	ar3,a
                                   1043 ;	build/../eeprom.c:88: printf ( "Handle Vendor Command %02x, addr %d, len %d\n" , cmd, addr, len );
      000182 8F 01            [24] 1044 	mov	ar1,r7
      000184 7A 00            [12] 1045 	mov	r2,#0x00
      000186 C0 07            [24] 1046 	push	ar7
      000188 C0 06            [24] 1047 	push	ar6
      00018A C0 05            [24] 1048 	push	ar5
      00018C C0 04            [24] 1049 	push	ar4
      00018E C0 03            [24] 1050 	push	ar3
      000190 C0 04            [24] 1051 	push	ar4
      000192 C0 03            [24] 1052 	push	ar3
      000194 C0 06            [24] 1053 	push	ar6
      000196 C0 05            [24] 1054 	push	ar5
      000198 C0 01            [24] 1055 	push	ar1
      00019A C0 02            [24] 1056 	push	ar2
      00019C 74 47            [12] 1057 	mov	a,#___str_0
      00019E C0 E0            [24] 1058 	push	acc
      0001A0 74 16            [12] 1059 	mov	a,#(___str_0 >> 8)
      0001A2 C0 E0            [24] 1060 	push	acc
      0001A4 74 80            [12] 1061 	mov	a,#0x80
      0001A6 C0 E0            [24] 1062 	push	acc
      0001A8 12 0E 01         [24] 1063 	lcall	_printf
      0001AB E5 81            [12] 1064 	mov	a,sp
      0001AD 24 F7            [12] 1065 	add	a,#0xf7
      0001AF F5 81            [12] 1066 	mov	sp,a
      0001B1 D0 03            [24] 1067 	pop	ar3
      0001B3 D0 04            [24] 1068 	pop	ar4
      0001B5 D0 05            [24] 1069 	pop	ar5
      0001B7 D0 06            [24] 1070 	pop	ar6
      0001B9 D0 07            [24] 1071 	pop	ar7
                                   1072 ;	build/../eeprom.c:89: switch (cmd) {
      0001BB BF B1 02         [24] 1073 	cjne	r7,#0xb1,00223$
      0001BE 80 09            [24] 1074 	sjmp	00101$
      0001C0                       1075 00223$:
      0001C0 BF B2 03         [24] 1076 	cjne	r7,#0xb2,00224$
      0001C3 02 02 BC         [24] 1077 	ljmp	00120$
      0001C6                       1078 00224$:
      0001C6 02 03 85         [24] 1079 	ljmp	00134$
                                   1080 ;	build/../eeprom.c:90: case VC_EEPROM:
      0001C9                       1081 00101$:
                                   1082 ;	build/../eeprom.c:93: switch (SETUP_TYPE) {
      0001C9 90 E6 B8         [24] 1083 	mov	dptr,#_SETUPDAT
      0001CC E0               [24] 1084 	movx	a,@dptr
      0001CD FF               [12] 1085 	mov	r7,a
      0001CE BF 40 02         [24] 1086 	cjne	r7,#0x40,00225$
      0001D1 80 73            [24] 1087 	sjmp	00115$
      0001D3                       1088 00225$:
      0001D3 BF C0 02         [24] 1089 	cjne	r7,#0xc0,00226$
      0001D6 80 03            [24] 1090 	sjmp	00227$
      0001D8                       1091 00226$:
      0001D8 02 02 9F         [24] 1092 	ljmp	00118$
      0001DB                       1093 00227$:
                                   1094 ;	build/../eeprom.c:95: while (len) { // still have bytes to read
      0001DB                       1095 00106$:
      0001DB EC               [12] 1096 	mov	a,r4
      0001DC 4B               [12] 1097 	orl	a,r3
      0001DD 70 03            [24] 1098 	jnz	00228$
      0001DF 02 02 A3         [24] 1099 	ljmp	00119$
      0001E2                       1100 00228$:
                                   1101 ;	build/../eeprom.c:96: BYTE cur_read = len > 64 ? 64 : len; // can't read more than 64 bytes at a time
      0001E2 C3               [12] 1102 	clr	c
      0001E3 74 40            [12] 1103 	mov	a,#0x40
      0001E5 9C               [12] 1104 	subb	a,r4
      0001E6 E4               [12] 1105 	clr	a
      0001E7 9B               [12] 1106 	subb	a,r3
      0001E8 50 06            [24] 1107 	jnc	00140$
      0001EA 7A 40            [12] 1108 	mov	r2,#0x40
      0001EC 7F 00            [12] 1109 	mov	r7,#0x00
      0001EE 80 04            [24] 1110 	sjmp	00141$
      0001F0                       1111 00140$:
      0001F0 8C 02            [24] 1112 	mov	ar2,r4
      0001F2 8B 07            [24] 1113 	mov	ar7,r3
      0001F4                       1114 00141$:
                                   1115 ;	build/../eeprom.c:97: while (EP0CS&bmEPBUSY); // can't do this until EP0 is ready                
      0001F4                       1116 00103$:
      0001F4 90 E6 A0         [24] 1117 	mov	dptr,#_EP0CS
      0001F7 E0               [24] 1118 	movx	a,@dptr
      0001F8 20 E1 F9         [24] 1119 	jb	acc.1,00103$
                                   1120 ;	build/../eeprom.c:98: eeprom_read(0x51, addr, cur_read, EP0BUF );
      0001FB 8A 45            [24] 1121 	mov	_eeprom_read_PARM_3,r2
      0001FD 75 46 00         [24] 1122 	mov	(_eeprom_read_PARM_3 + 1),#0x00
      000200 75 47 40         [24] 1123 	mov	_eeprom_read_PARM_4,#_EP0BUF
      000203 75 48 E7         [24] 1124 	mov	(_eeprom_read_PARM_4 + 1),#(_EP0BUF >> 8)
      000206 75 49 00         [24] 1125 	mov	(_eeprom_read_PARM_4 + 2),#0x00
      000209 8E 43            [24] 1126 	mov	_eeprom_read_PARM_2,r6
      00020B 8D 44            [24] 1127 	mov	(_eeprom_read_PARM_2 + 1),r5
      00020D 75 82 51         [24] 1128 	mov	dpl,#0x51
      000210 C0 06            [24] 1129 	push	ar6
      000212 C0 05            [24] 1130 	push	ar5
      000214 C0 04            [24] 1131 	push	ar4
      000216 C0 03            [24] 1132 	push	ar3
      000218 C0 02            [24] 1133 	push	ar2
      00021A 12 07 F3         [24] 1134 	lcall	_eeprom_read
      00021D D0 02            [24] 1135 	pop	ar2
      00021F D0 03            [24] 1136 	pop	ar3
      000221 D0 04            [24] 1137 	pop	ar4
      000223 D0 05            [24] 1138 	pop	ar5
      000225 D0 06            [24] 1139 	pop	ar6
                                   1140 ;	build/../eeprom.c:99: EP0BCH=0;
      000227 90 E6 8A         [24] 1141 	mov	dptr,#_EP0BCH
      00022A E4               [12] 1142 	clr	a
      00022B F0               [24] 1143 	movx	@dptr,a
                                   1144 ;	build/../eeprom.c:100: SYNCDELAY;
      00022C 00               [12] 1145 	nop	
      00022D 00               [12] 1146 	nop	
      00022E 00               [12] 1147 	nop	
      00022F 00               [12] 1148 	nop	
                                   1149 ;	build/../eeprom.c:101: EP0BCL=cur_read;
      000230 90 E6 8B         [24] 1150 	mov	dptr,#_EP0BCL
      000233 EA               [12] 1151 	mov	a,r2
      000234 F0               [24] 1152 	movx	@dptr,a
                                   1153 ;	build/../eeprom.c:102: len -= cur_read;
      000235 7F 00            [12] 1154 	mov	r7,#0x00
      000237 EC               [12] 1155 	mov	a,r4
      000238 C3               [12] 1156 	clr	c
      000239 9A               [12] 1157 	subb	a,r2
      00023A FC               [12] 1158 	mov	r4,a
      00023B EB               [12] 1159 	mov	a,r3
      00023C 9F               [12] 1160 	subb	a,r7
      00023D FB               [12] 1161 	mov	r3,a
                                   1162 ;	build/../eeprom.c:103: addr += cur_read;
      00023E EA               [12] 1163 	mov	a,r2
      00023F 2E               [12] 1164 	add	a,r6
      000240 FE               [12] 1165 	mov	r6,a
      000241 EF               [12] 1166 	mov	a,r7
      000242 3D               [12] 1167 	addc	a,r5
      000243 FD               [12] 1168 	mov	r5,a
                                   1169 ;	build/../eeprom.c:107: while (len) {
      000244 80 95            [24] 1170 	sjmp	00106$
      000246                       1171 00115$:
      000246 EC               [12] 1172 	mov	a,r4
      000247 4B               [12] 1173 	orl	a,r3
      000248 60 59            [24] 1174 	jz	00119$
                                   1175 ;	build/../eeprom.c:110: EP0BCL = 0; // allow pc transfer in
      00024A 90 E6 8B         [24] 1176 	mov	dptr,#_EP0BCL
      00024D E4               [12] 1177 	clr	a
      00024E F0               [24] 1178 	movx	@dptr,a
                                   1179 ;	build/../eeprom.c:111: while(EP0CS & bmEPBUSY); // wait
      00024F                       1180 00110$:
      00024F 90 E6 A0         [24] 1181 	mov	dptr,#_EP0CS
      000252 E0               [24] 1182 	movx	a,@dptr
      000253 20 E1 F9         [24] 1183 	jb	acc.1,00110$
                                   1184 ;	build/../eeprom.c:112: cur_write=EP0BCL;
      000256 90 E6 8B         [24] 1185 	mov	dptr,#_EP0BCL
      000259 E0               [24] 1186 	movx	a,@dptr
      00025A FF               [12] 1187 	mov	r7,a
                                   1188 ;	build/../eeprom.c:114: if ( !eeprom_write(0x51, addr, cur_write, EP0BUF ) ) return FALSE;
      00025B 8F 38            [24] 1189 	mov	_eeprom_write_PARM_3,r7
      00025D 75 39 00         [24] 1190 	mov	(_eeprom_write_PARM_3 + 1),#0x00
      000260 75 3A 40         [24] 1191 	mov	_eeprom_write_PARM_4,#_EP0BUF
      000263 75 3B E7         [24] 1192 	mov	(_eeprom_write_PARM_4 + 1),#(_EP0BUF >> 8)
      000266 75 3C 00         [24] 1193 	mov	(_eeprom_write_PARM_4 + 2),#0x00
      000269 8E 36            [24] 1194 	mov	_eeprom_write_PARM_2,r6
      00026B 8D 37            [24] 1195 	mov	(_eeprom_write_PARM_2 + 1),r5
      00026D 75 82 51         [24] 1196 	mov	dpl,#0x51
      000270 C0 07            [24] 1197 	push	ar7
      000272 C0 06            [24] 1198 	push	ar6
      000274 C0 05            [24] 1199 	push	ar5
      000276 C0 04            [24] 1200 	push	ar4
      000278 C0 03            [24] 1201 	push	ar3
      00027A 12 07 63         [24] 1202 	lcall	_eeprom_write
      00027D E5 82            [12] 1203 	mov	a,dpl
      00027F D0 03            [24] 1204 	pop	ar3
      000281 D0 04            [24] 1205 	pop	ar4
      000283 D0 05            [24] 1206 	pop	ar5
      000285 D0 06            [24] 1207 	pop	ar6
      000287 D0 07            [24] 1208 	pop	ar7
      000289 70 03            [24] 1209 	jnz	00114$
      00028B F5 82            [12] 1210 	mov	dpl,a
      00028D 22               [24] 1211 	ret
      00028E                       1212 00114$:
                                   1213 ;	build/../eeprom.c:115: addr += cur_write;
      00028E 7A 00            [12] 1214 	mov	r2,#0x00
      000290 EF               [12] 1215 	mov	a,r7
      000291 2E               [12] 1216 	add	a,r6
      000292 FE               [12] 1217 	mov	r6,a
      000293 EA               [12] 1218 	mov	a,r2
      000294 3D               [12] 1219 	addc	a,r5
      000295 FD               [12] 1220 	mov	r5,a
                                   1221 ;	build/../eeprom.c:116: len -= cur_write;
      000296 EC               [12] 1222 	mov	a,r4
      000297 C3               [12] 1223 	clr	c
      000298 9F               [12] 1224 	subb	a,r7
      000299 FC               [12] 1225 	mov	r4,a
      00029A EB               [12] 1226 	mov	a,r3
      00029B 9A               [12] 1227 	subb	a,r2
      00029C FB               [12] 1228 	mov	r3,a
                                   1229 ;	build/../eeprom.c:119: default:
      00029D 80 A7            [24] 1230 	sjmp	00115$
      00029F                       1231 00118$:
                                   1232 ;	build/../eeprom.c:120: return FALSE; // bad type
      00029F 75 82 00         [24] 1233 	mov	dpl,#0x00
      0002A2 22               [24] 1234 	ret
                                   1235 ;	build/../eeprom.c:121: }
      0002A3                       1236 00119$:
                                   1237 ;	build/../eeprom.c:123: printf ( "All OK\n" );
      0002A3 74 74            [12] 1238 	mov	a,#___str_1
      0002A5 C0 E0            [24] 1239 	push	acc
      0002A7 74 16            [12] 1240 	mov	a,#(___str_1 >> 8)
      0002A9 C0 E0            [24] 1241 	push	acc
      0002AB 74 80            [12] 1242 	mov	a,#0x80
      0002AD C0 E0            [24] 1243 	push	acc
      0002AF 12 0E 01         [24] 1244 	lcall	_printf
      0002B2 15 81            [12] 1245 	dec	sp
      0002B4 15 81            [12] 1246 	dec	sp
      0002B6 15 81            [12] 1247 	dec	sp
                                   1248 ;	build/../eeprom.c:124: return TRUE;
      0002B8 75 82 01         [24] 1249 	mov	dpl,#0x01
      0002BB 22               [24] 1250 	ret
                                   1251 ;	build/../eeprom.c:126: case VC_LED:
      0002BC                       1252 00120$:
                                   1253 ;	build/../eeprom.c:128: switch(SETUP_TYPE) {
      0002BC 90 E6 B8         [24] 1254 	mov	dptr,#_SETUPDAT
      0002BF E0               [24] 1255 	movx	a,@dptr
      0002C0 FF               [12] 1256 	mov	r7,a
      0002C1 BF 40 02         [24] 1257 	cjne	r7,#0x40,00234$
      0002C4 80 03            [24] 1258 	sjmp	00235$
      0002C6                       1259 00234$:
      0002C6 02 03 7D         [24] 1260 	ljmp	00132$
      0002C9                       1261 00235$:
                                   1262 ;	build/../eeprom.c:131: EP0BCL = 0;
      0002C9 90 E6 8B         [24] 1263 	mov	dptr,#_EP0BCL
      0002CC E4               [12] 1264 	clr	a
      0002CD F0               [24] 1265 	movx	@dptr,a
                                   1266 ;	build/../eeprom.c:133: while(EP0CS & bmEPBUSY);
      0002CE                       1267 00122$:
      0002CE 90 E6 A0         [24] 1268 	mov	dptr,#_EP0CS
      0002D1 E0               [24] 1269 	movx	a,@dptr
      0002D2 20 E1 F9         [24] 1270 	jb	acc.1,00122$
                                   1271 ;	build/../eeprom.c:134: int dataLen = EP0BCL;
      0002D5 90 E6 8B         [24] 1272 	mov	dptr,#_EP0BCL
      0002D8 E0               [24] 1273 	movx	a,@dptr
      0002D9 FE               [12] 1274 	mov	r6,a
      0002DA 7F 00            [12] 1275 	mov	r7,#0x00
                                   1276 ;	build/../eeprom.c:136: printf("Data: ");
      0002DC C0 07            [24] 1277 	push	ar7
      0002DE C0 06            [24] 1278 	push	ar6
      0002E0 74 7C            [12] 1279 	mov	a,#___str_2
      0002E2 C0 E0            [24] 1280 	push	acc
      0002E4 74 16            [12] 1281 	mov	a,#(___str_2 >> 8)
      0002E6 C0 E0            [24] 1282 	push	acc
      0002E8 74 80            [12] 1283 	mov	a,#0x80
      0002EA C0 E0            [24] 1284 	push	acc
      0002EC 12 0E 01         [24] 1285 	lcall	_printf
      0002EF 15 81            [12] 1286 	dec	sp
      0002F1 15 81            [12] 1287 	dec	sp
      0002F3 15 81            [12] 1288 	dec	sp
      0002F5 D0 06            [24] 1289 	pop	ar6
      0002F7 D0 07            [24] 1290 	pop	ar7
                                   1291 ;	build/../eeprom.c:137: for(i=0; i<dataLen; i++) {
      0002F9 7C 00            [12] 1292 	mov	r4,#0x00
      0002FB 7D 00            [12] 1293 	mov	r5,#0x00
      0002FD                       1294 00136$:
      0002FD C3               [12] 1295 	clr	c
      0002FE EC               [12] 1296 	mov	a,r4
      0002FF 9E               [12] 1297 	subb	a,r6
      000300 ED               [12] 1298 	mov	a,r5
      000301 64 80            [12] 1299 	xrl	a,#0x80
      000303 8F F0            [24] 1300 	mov	b,r7
      000305 63 F0 80         [24] 1301 	xrl	b,#0x80
      000308 95 F0            [12] 1302 	subb	a,b
      00030A 50 3E            [24] 1303 	jnc	00125$
                                   1304 ;	build/../eeprom.c:138: printf("0x%02x ", EP0BUF[i]);
      00030C EC               [12] 1305 	mov	a,r4
      00030D 24 40            [12] 1306 	add	a,#_EP0BUF
      00030F F5 82            [12] 1307 	mov	dpl,a
      000311 ED               [12] 1308 	mov	a,r5
      000312 34 E7            [12] 1309 	addc	a,#(_EP0BUF >> 8)
      000314 F5 83            [12] 1310 	mov	dph,a
      000316 E0               [24] 1311 	movx	a,@dptr
      000317 FB               [12] 1312 	mov	r3,a
      000318 7A 00            [12] 1313 	mov	r2,#0x00
      00031A C0 07            [24] 1314 	push	ar7
      00031C C0 06            [24] 1315 	push	ar6
      00031E C0 05            [24] 1316 	push	ar5
      000320 C0 04            [24] 1317 	push	ar4
      000322 C0 03            [24] 1318 	push	ar3
      000324 C0 02            [24] 1319 	push	ar2
      000326 74 83            [12] 1320 	mov	a,#___str_3
      000328 C0 E0            [24] 1321 	push	acc
      00032A 74 16            [12] 1322 	mov	a,#(___str_3 >> 8)
      00032C C0 E0            [24] 1323 	push	acc
      00032E 74 80            [12] 1324 	mov	a,#0x80
      000330 C0 E0            [24] 1325 	push	acc
      000332 12 0E 01         [24] 1326 	lcall	_printf
      000335 E5 81            [12] 1327 	mov	a,sp
      000337 24 FB            [12] 1328 	add	a,#0xfb
      000339 F5 81            [12] 1329 	mov	sp,a
      00033B D0 04            [24] 1330 	pop	ar4
      00033D D0 05            [24] 1331 	pop	ar5
      00033F D0 06            [24] 1332 	pop	ar6
      000341 D0 07            [24] 1333 	pop	ar7
                                   1334 ;	build/../eeprom.c:137: for(i=0; i<dataLen; i++) {
      000343 0C               [12] 1335 	inc	r4
      000344 BC 00 B6         [24] 1336 	cjne	r4,#0x00,00136$
      000347 0D               [12] 1337 	inc	r5
      000348 80 B3            [24] 1338 	sjmp	00136$
      00034A                       1339 00125$:
                                   1340 ;	build/../eeprom.c:140: printf("\n");
      00034A 74 8B            [12] 1341 	mov	a,#___str_4
      00034C C0 E0            [24] 1342 	push	acc
      00034E 74 16            [12] 1343 	mov	a,#(___str_4 >> 8)
      000350 C0 E0            [24] 1344 	push	acc
      000352 74 80            [12] 1345 	mov	a,#0x80
      000354 C0 E0            [24] 1346 	push	acc
      000356 12 0E 01         [24] 1347 	lcall	_printf
      000359 15 81            [12] 1348 	dec	sp
      00035B 15 81            [12] 1349 	dec	sp
      00035D 15 81            [12] 1350 	dec	sp
                                   1351 ;	build/../eeprom.c:142: if(EP0BUF[0] == 0x01) PA0 = 1;
      00035F 90 E7 40         [24] 1352 	mov	dptr,#_EP0BUF
      000362 E0               [24] 1353 	movx	a,@dptr
      000363 FF               [12] 1354 	mov	r7,a
      000364 BF 01 04         [24] 1355 	cjne	r7,#0x01,00127$
                                   1356 ;	assignBit
      000367 D2 80            [12] 1357 	setb	_PA0
      000369 80 02            [24] 1358 	sjmp	00128$
      00036B                       1359 00127$:
                                   1360 ;	build/../eeprom.c:143: else PA0 = 0;
                                   1361 ;	assignBit
      00036B C2 80            [12] 1362 	clr	_PA0
      00036D                       1363 00128$:
                                   1364 ;	build/../eeprom.c:145: if(EP0BUF[1] == 0x01) PA1 = 1;
      00036D 90 E7 41         [24] 1365 	mov	dptr,#(_EP0BUF + 0x0001)
      000370 E0               [24] 1366 	movx	a,@dptr
      000371 FF               [12] 1367 	mov	r7,a
      000372 BF 01 04         [24] 1368 	cjne	r7,#0x01,00130$
                                   1369 ;	assignBit
      000375 D2 81            [12] 1370 	setb	_PA1
      000377 80 08            [24] 1371 	sjmp	00133$
      000379                       1372 00130$:
                                   1373 ;	build/../eeprom.c:146: else PA1 = 0;
                                   1374 ;	assignBit
      000379 C2 81            [12] 1375 	clr	_PA1
                                   1376 ;	build/../eeprom.c:148: break;
                                   1377 ;	build/../eeprom.c:149: default:
      00037B 80 04            [24] 1378 	sjmp	00133$
      00037D                       1379 00132$:
                                   1380 ;	build/../eeprom.c:150: return FALSE;
      00037D 75 82 00         [24] 1381 	mov	dpl,#0x00
                                   1382 ;	build/../eeprom.c:151: }
      000380 22               [24] 1383 	ret
      000381                       1384 00133$:
                                   1385 ;	build/../eeprom.c:152: return TRUE;
      000381 75 82 01         [24] 1386 	mov	dpl,#0x01
                                   1387 ;	build/../eeprom.c:154: }
      000384 22               [24] 1388 	ret
      000385                       1389 00134$:
                                   1390 ;	build/../eeprom.c:155: return FALSE;
      000385 75 82 00         [24] 1391 	mov	dpl,#0x00
                                   1392 ;	build/../eeprom.c:156: }
      000388 22               [24] 1393 	ret
                                   1394 ;------------------------------------------------------------
                                   1395 ;Allocation info for local variables in function 'handle_get_interface'
                                   1396 ;------------------------------------------------------------
                                   1397 ;alt_ifc                   Allocated with name '_handle_get_interface_PARM_2'
                                   1398 ;ifc                       Allocated to registers 
                                   1399 ;------------------------------------------------------------
                                   1400 ;	build/../eeprom.c:160: BOOL handle_get_interface(BYTE ifc, BYTE* alt_ifc) {
                                   1401 ;	-----------------------------------------
                                   1402 ;	 function handle_get_interface
                                   1403 ;	-----------------------------------------
      000389                       1404 _handle_get_interface:
                                   1405 ;	build/../eeprom.c:161: *alt_ifc=0;
      000389 AD 19            [24] 1406 	mov	r5,_handle_get_interface_PARM_2
      00038B AE 1A            [24] 1407 	mov	r6,(_handle_get_interface_PARM_2 + 1)
      00038D AF 1B            [24] 1408 	mov	r7,(_handle_get_interface_PARM_2 + 2)
      00038F 8D 82            [24] 1409 	mov	dpl,r5
      000391 8E 83            [24] 1410 	mov	dph,r6
      000393 8F F0            [24] 1411 	mov	b,r7
      000395 E4               [12] 1412 	clr	a
      000396 12 0C 57         [24] 1413 	lcall	__gptrput
                                   1414 ;	build/../eeprom.c:162: return TRUE;
      000399 75 82 01         [24] 1415 	mov	dpl,#0x01
                                   1416 ;	build/../eeprom.c:163: }
      00039C 22               [24] 1417 	ret
                                   1418 ;------------------------------------------------------------
                                   1419 ;Allocation info for local variables in function 'handle_set_interface'
                                   1420 ;------------------------------------------------------------
                                   1421 ;alt_ifc                   Allocated with name '_handle_set_interface_PARM_2'
                                   1422 ;ifc                       Allocated to registers 
                                   1423 ;------------------------------------------------------------
                                   1424 ;	build/../eeprom.c:167: BOOL handle_set_interface(BYTE ifc,BYTE alt_ifc) {  
                                   1425 ;	-----------------------------------------
                                   1426 ;	 function handle_set_interface
                                   1427 ;	-----------------------------------------
      00039D                       1428 _handle_set_interface:
                                   1429 ;	build/../eeprom.c:169: printf ( "Host wants to set interface: %d\n", alt_ifc );
      00039D AE 0A            [24] 1430 	mov	r6,_handle_set_interface_PARM_2
      00039F 7F 00            [12] 1431 	mov	r7,#0x00
      0003A1 C0 06            [24] 1432 	push	ar6
      0003A3 C0 07            [24] 1433 	push	ar7
      0003A5 74 8D            [12] 1434 	mov	a,#___str_5
      0003A7 C0 E0            [24] 1435 	push	acc
      0003A9 74 16            [12] 1436 	mov	a,#(___str_5 >> 8)
      0003AB C0 E0            [24] 1437 	push	acc
      0003AD 74 80            [12] 1438 	mov	a,#0x80
      0003AF C0 E0            [24] 1439 	push	acc
      0003B1 12 0E 01         [24] 1440 	lcall	_printf
      0003B4 E5 81            [12] 1441 	mov	a,sp
      0003B6 24 FB            [12] 1442 	add	a,#0xfb
      0003B8 F5 81            [12] 1443 	mov	sp,a
                                   1444 ;	build/../eeprom.c:171: return TRUE;
      0003BA 75 82 01         [24] 1445 	mov	dpl,#0x01
                                   1446 ;	build/../eeprom.c:172: }
      0003BD 22               [24] 1447 	ret
                                   1448 ;------------------------------------------------------------
                                   1449 ;Allocation info for local variables in function 'handle_get_configuration'
                                   1450 ;------------------------------------------------------------
                                   1451 ;	build/../eeprom.c:178: BYTE handle_get_configuration(void) { 
                                   1452 ;	-----------------------------------------
                                   1453 ;	 function handle_get_configuration
                                   1454 ;	-----------------------------------------
      0003BE                       1455 _handle_get_configuration:
                                   1456 ;	build/../eeprom.c:179: return config; 
      0003BE 85 0B 82         [24] 1457 	mov	dpl,_config
                                   1458 ;	build/../eeprom.c:180: }
      0003C1 22               [24] 1459 	ret
                                   1460 ;------------------------------------------------------------
                                   1461 ;Allocation info for local variables in function 'handle_set_configuration'
                                   1462 ;------------------------------------------------------------
                                   1463 ;cfg                       Allocated to registers r7 
                                   1464 ;------------------------------------------------------------
                                   1465 ;	build/../eeprom.c:183: BOOL handle_set_configuration(BYTE cfg) { 
                                   1466 ;	-----------------------------------------
                                   1467 ;	 function handle_set_configuration
                                   1468 ;	-----------------------------------------
      0003C2                       1469 _handle_set_configuration:
      0003C2 AF 82            [24] 1470 	mov	r7,dpl
                                   1471 ;	build/../eeprom.c:184: printf ( "host wants config: %d\n" , cfg );
      0003C4 8F 05            [24] 1472 	mov	ar5,r7
      0003C6 7E 00            [12] 1473 	mov	r6,#0x00
      0003C8 C0 07            [24] 1474 	push	ar7
      0003CA C0 05            [24] 1475 	push	ar5
      0003CC C0 06            [24] 1476 	push	ar6
      0003CE 74 AE            [12] 1477 	mov	a,#___str_6
      0003D0 C0 E0            [24] 1478 	push	acc
      0003D2 74 16            [12] 1479 	mov	a,#(___str_6 >> 8)
      0003D4 C0 E0            [24] 1480 	push	acc
      0003D6 74 80            [12] 1481 	mov	a,#0x80
      0003D8 C0 E0            [24] 1482 	push	acc
      0003DA 12 0E 01         [24] 1483 	lcall	_printf
      0003DD E5 81            [12] 1484 	mov	a,sp
      0003DF 24 FB            [12] 1485 	add	a,#0xfb
      0003E1 F5 81            [12] 1486 	mov	sp,a
      0003E3 D0 07            [24] 1487 	pop	ar7
                                   1488 ;	build/../eeprom.c:185: config=cfg; 
      0003E5 8F 0B            [24] 1489 	mov	_config,r7
                                   1490 ;	build/../eeprom.c:186: return TRUE;
      0003E7 75 82 01         [24] 1491 	mov	dpl,#0x01
                                   1492 ;	build/../eeprom.c:187: }
      0003EA 22               [24] 1493 	ret
                                   1494 ;------------------------------------------------------------
                                   1495 ;Allocation info for local variables in function 'sudav_isr'
                                   1496 ;------------------------------------------------------------
                                   1497 ;	build/../eeprom.c:190: void sudav_isr(void) __interrupt (SUDAV_ISR) {
                                   1498 ;	-----------------------------------------
                                   1499 ;	 function sudav_isr
                                   1500 ;	-----------------------------------------
      0003EB                       1501 _sudav_isr:
      0003EB C0 E0            [24] 1502 	push	acc
      0003ED C0 82            [24] 1503 	push	dpl
      0003EF C0 83            [24] 1504 	push	dph
                                   1505 ;	build/../eeprom.c:191: dosud=TRUE;
                                   1506 ;	assignBit
      0003F1 D2 00            [12] 1507 	setb	_dosud
                                   1508 ;	build/../eeprom.c:192: CLEAR_SUDAV();
      0003F3 53 91 EF         [24] 1509 	anl	_EXIF,#0xef
      0003F6 90 E6 5D         [24] 1510 	mov	dptr,#_USBIRQ
      0003F9 74 01            [12] 1511 	mov	a,#0x01
      0003FB F0               [24] 1512 	movx	@dptr,a
                                   1513 ;	build/../eeprom.c:193: }
      0003FC D0 83            [24] 1514 	pop	dph
      0003FE D0 82            [24] 1515 	pop	dpl
      000400 D0 E0            [24] 1516 	pop	acc
      000402 32               [24] 1517 	reti
                                   1518 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   1519 ;	eliminated unneeded push/pop not_psw
                                   1520 ;	eliminated unneeded push/pop b
                                   1521 ;------------------------------------------------------------
                                   1522 ;Allocation info for local variables in function 'usbreset_isr'
                                   1523 ;------------------------------------------------------------
                                   1524 ;	build/../eeprom.c:195: void usbreset_isr(void) __interrupt (USBRESET_ISR) {
                                   1525 ;	-----------------------------------------
                                   1526 ;	 function usbreset_isr
                                   1527 ;	-----------------------------------------
      000403                       1528 _usbreset_isr:
      000403 C0 21            [24] 1529 	push	bits
      000405 C0 E0            [24] 1530 	push	acc
      000407 C0 F0            [24] 1531 	push	b
      000409 C0 82            [24] 1532 	push	dpl
      00040B C0 83            [24] 1533 	push	dph
      00040D C0 07            [24] 1534 	push	(0+7)
      00040F C0 06            [24] 1535 	push	(0+6)
      000411 C0 05            [24] 1536 	push	(0+5)
      000413 C0 04            [24] 1537 	push	(0+4)
      000415 C0 03            [24] 1538 	push	(0+3)
      000417 C0 02            [24] 1539 	push	(0+2)
      000419 C0 01            [24] 1540 	push	(0+1)
      00041B C0 00            [24] 1541 	push	(0+0)
      00041D C0 D0            [24] 1542 	push	psw
      00041F 75 D0 00         [24] 1543 	mov	psw,#0x00
                                   1544 ;	build/../eeprom.c:196: handle_hispeed(FALSE);
      000422 75 82 00         [24] 1545 	mov	dpl,#0x00
      000425 12 0B 55         [24] 1546 	lcall	_handle_hispeed
                                   1547 ;	build/../eeprom.c:197: CLEAR_USBRESET();
      000428 53 91 EF         [24] 1548 	anl	_EXIF,#0xef
      00042B 90 E6 5D         [24] 1549 	mov	dptr,#_USBIRQ
      00042E 74 10            [12] 1550 	mov	a,#0x10
      000430 F0               [24] 1551 	movx	@dptr,a
                                   1552 ;	build/../eeprom.c:198: }
      000431 D0 D0            [24] 1553 	pop	psw
      000433 D0 00            [24] 1554 	pop	(0+0)
      000435 D0 01            [24] 1555 	pop	(0+1)
      000437 D0 02            [24] 1556 	pop	(0+2)
      000439 D0 03            [24] 1557 	pop	(0+3)
      00043B D0 04            [24] 1558 	pop	(0+4)
      00043D D0 05            [24] 1559 	pop	(0+5)
      00043F D0 06            [24] 1560 	pop	(0+6)
      000441 D0 07            [24] 1561 	pop	(0+7)
      000443 D0 83            [24] 1562 	pop	dph
      000445 D0 82            [24] 1563 	pop	dpl
      000447 D0 F0            [24] 1564 	pop	b
      000449 D0 E0            [24] 1565 	pop	acc
      00044B D0 21            [24] 1566 	pop	bits
      00044D 32               [24] 1567 	reti
                                   1568 ;------------------------------------------------------------
                                   1569 ;Allocation info for local variables in function 'hispeed_isr'
                                   1570 ;------------------------------------------------------------
                                   1571 ;	build/../eeprom.c:199: void hispeed_isr(void) __interrupt (HISPEED_ISR) {
                                   1572 ;	-----------------------------------------
                                   1573 ;	 function hispeed_isr
                                   1574 ;	-----------------------------------------
      00044E                       1575 _hispeed_isr:
      00044E C0 21            [24] 1576 	push	bits
      000450 C0 E0            [24] 1577 	push	acc
      000452 C0 F0            [24] 1578 	push	b
      000454 C0 82            [24] 1579 	push	dpl
      000456 C0 83            [24] 1580 	push	dph
      000458 C0 07            [24] 1581 	push	(0+7)
      00045A C0 06            [24] 1582 	push	(0+6)
      00045C C0 05            [24] 1583 	push	(0+5)
      00045E C0 04            [24] 1584 	push	(0+4)
      000460 C0 03            [24] 1585 	push	(0+3)
      000462 C0 02            [24] 1586 	push	(0+2)
      000464 C0 01            [24] 1587 	push	(0+1)
      000466 C0 00            [24] 1588 	push	(0+0)
      000468 C0 D0            [24] 1589 	push	psw
      00046A 75 D0 00         [24] 1590 	mov	psw,#0x00
                                   1591 ;	build/../eeprom.c:200: handle_hispeed(TRUE);
      00046D 75 82 01         [24] 1592 	mov	dpl,#0x01
      000470 12 0B 55         [24] 1593 	lcall	_handle_hispeed
                                   1594 ;	build/../eeprom.c:201: CLEAR_HISPEED();
      000473 53 91 EF         [24] 1595 	anl	_EXIF,#0xef
      000476 90 E6 5D         [24] 1596 	mov	dptr,#_USBIRQ
      000479 74 20            [12] 1597 	mov	a,#0x20
      00047B F0               [24] 1598 	movx	@dptr,a
                                   1599 ;	build/../eeprom.c:202: }
      00047C D0 D0            [24] 1600 	pop	psw
      00047E D0 00            [24] 1601 	pop	(0+0)
      000480 D0 01            [24] 1602 	pop	(0+1)
      000482 D0 02            [24] 1603 	pop	(0+2)
      000484 D0 03            [24] 1604 	pop	(0+3)
      000486 D0 04            [24] 1605 	pop	(0+4)
      000488 D0 05            [24] 1606 	pop	(0+5)
      00048A D0 06            [24] 1607 	pop	(0+6)
      00048C D0 07            [24] 1608 	pop	(0+7)
      00048E D0 83            [24] 1609 	pop	dph
      000490 D0 82            [24] 1610 	pop	dpl
      000492 D0 F0            [24] 1611 	pop	b
      000494 D0 E0            [24] 1612 	pop	acc
      000496 D0 21            [24] 1613 	pop	bits
      000498 32               [24] 1614 	reti
                                   1615 	.area CSEG    (CODE)
                                   1616 	.area CONST   (CODE)
                                   1617 	.area CONST   (CODE)
      001647                       1618 ___str_0:
      001647 48 61 6E 64 6C 65 20  1619 	.ascii "Handle Vendor Command %02x, addr %d, len %d"
             56 65 6E 64 6F 72 20
             43 6F 6D 6D 61 6E 64
             20 25 30 32 78 2C 20
             61 64 64 72 20 25 64
             2C 20 6C 65 6E 20 25
             64
      001672 0A                    1620 	.db 0x0a
      001673 00                    1621 	.db 0x00
                                   1622 	.area CSEG    (CODE)
                                   1623 	.area CONST   (CODE)
      001674                       1624 ___str_1:
      001674 41 6C 6C 20 4F 4B     1625 	.ascii "All OK"
      00167A 0A                    1626 	.db 0x0a
      00167B 00                    1627 	.db 0x00
                                   1628 	.area CSEG    (CODE)
                                   1629 	.area CONST   (CODE)
      00167C                       1630 ___str_2:
      00167C 44 61 74 61 3A 20     1631 	.ascii "Data: "
      001682 00                    1632 	.db 0x00
                                   1633 	.area CSEG    (CODE)
                                   1634 	.area CONST   (CODE)
      001683                       1635 ___str_3:
      001683 30 78 25 30 32 78 20  1636 	.ascii "0x%02x "
      00168A 00                    1637 	.db 0x00
                                   1638 	.area CSEG    (CODE)
                                   1639 	.area CONST   (CODE)
      00168B                       1640 ___str_4:
      00168B 0A                    1641 	.db 0x0a
      00168C 00                    1642 	.db 0x00
                                   1643 	.area CSEG    (CODE)
                                   1644 	.area CONST   (CODE)
      00168D                       1645 ___str_5:
      00168D 48 6F 73 74 20 77 61  1646 	.ascii "Host wants to set interface: %d"
             6E 74 73 20 74 6F 20
             73 65 74 20 69 6E 74
             65 72 66 61 63 65 3A
             20 25 64
      0016AC 0A                    1647 	.db 0x0a
      0016AD 00                    1648 	.db 0x00
                                   1649 	.area CSEG    (CODE)
                                   1650 	.area CONST   (CODE)
      0016AE                       1651 ___str_6:
      0016AE 68 6F 73 74 20 77 61  1652 	.ascii "host wants config: %d"
             6E 74 73 20 63 6F 6E
             66 69 67 3A 20 25 64
      0016C3 0A                    1653 	.db 0x0a
      0016C4 00                    1654 	.db 0x00
                                   1655 	.area CSEG    (CODE)
                                   1656 	.area XINIT   (CODE)
                                   1657 	.area CABS    (ABS,CODE)
