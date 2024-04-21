                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module blink
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _delay_ms
                                     13 	.globl _delay_1ms
                                     14 	.globl _EIP
                                     15 	.globl _B
                                     16 	.globl _EIE
                                     17 	.globl _ACC
                                     18 	.globl _EICON
                                     19 	.globl _PSW
                                     20 	.globl _TH2
                                     21 	.globl _TL2
                                     22 	.globl _RCAP2H
                                     23 	.globl _RCAP2L
                                     24 	.globl _T2CON
                                     25 	.globl _SBUF1
                                     26 	.globl _SCON1
                                     27 	.globl _GPIFSGLDATLNOX
                                     28 	.globl _GPIFSGLDATLX
                                     29 	.globl _GPIFSGLDATH
                                     30 	.globl _GPIFTRIG
                                     31 	.globl _EP01STAT
                                     32 	.globl _IP
                                     33 	.globl _OEE
                                     34 	.globl _OED
                                     35 	.globl _OEC
                                     36 	.globl _OEB
                                     37 	.globl _OEA
                                     38 	.globl _IOE
                                     39 	.globl _IOD
                                     40 	.globl _AUTOPTRSETUP
                                     41 	.globl _EP68FIFOFLGS
                                     42 	.globl _EP24FIFOFLGS
                                     43 	.globl _EP2468STAT
                                     44 	.globl _IE
                                     45 	.globl _INT4CLR
                                     46 	.globl _INT2CLR
                                     47 	.globl _IOC
                                     48 	.globl _AUTODAT2
                                     49 	.globl _AUTOPTRL2
                                     50 	.globl _AUTOPTRH2
                                     51 	.globl _AUTODAT1
                                     52 	.globl _APTR1L
                                     53 	.globl _APTR1H
                                     54 	.globl _SBU
                                     55 	.globl _SCO
                                     56 	.globl _MPA
                                     57 	.globl _EXIF
                                     58 	.globl _IOB
                                     59 	.globl _SPC_
                                     60 	.globl _CKCO
                                     61 	.globl _TH1
                                     62 	.globl _TH0
                                     63 	.globl _TL1
                                     64 	.globl _TL0
                                     65 	.globl _TMOD
                                     66 	.globl _TCON
                                     67 	.globl _PCON
                                     68 	.globl _DPS
                                     69 	.globl _DPH1
                                     70 	.globl _DPL1
                                     71 	.globl _DPH
                                     72 	.globl _DPL
                                     73 	.globl _SP
                                     74 	.globl _IOA
                                     75 	.globl _EP8FIFOBUF
                                     76 	.globl _EP6FIFOBUF
                                     77 	.globl _EP4FIFOBUF
                                     78 	.globl _EP2FIFOBUF
                                     79 	.globl _EP1INBUF
                                     80 	.globl _EP1OUTBUF
                                     81 	.globl _EP0BUF
                                     82 	.globl _CT4
                                     83 	.globl _CT3
                                     84 	.globl _CT2
                                     85 	.globl _CT1
                                     86 	.globl _USBTEST
                                     87 	.globl _TESTCFG
                                     88 	.globl _DBUG
                                     89 	.globl _UDMACRCQUAL
                                     90 	.globl _UDMACRCL
                                     91 	.globl _UDMACRCH
                                     92 	.globl _GPIFHOLDAMOUNT
                                     93 	.globl _FLOWSTBHPERIOD
                                     94 	.globl _FLOWSTBEDGE
                                     95 	.globl _FLOWSTB
                                     96 	.globl _FLOWHOLDOFF
                                     97 	.globl _FLOWEQ1CTL
                                     98 	.globl _FLOWEQ0CTL
                                     99 	.globl _FLOWLOGIC
                                    100 	.globl _FLOWSTATE
                                    101 	.globl _GPIFABORT
                                    102 	.globl _GPIFREADYSTAT
                                    103 	.globl _GPIFREADYCFG
                                    104 	.globl _XGPIFSGLDATLNOX
                                    105 	.globl _XGPIFSGLDATLX
                                    106 	.globl _XGPIFSGLDATH
                                    107 	.globl _EP8GPIFTRIG
                                    108 	.globl _EP8GPIFPFSTOP
                                    109 	.globl _EP8GPIFFLGSEL
                                    110 	.globl _EP6GPIFTRIG
                                    111 	.globl _EP6GPIFPFSTOP
                                    112 	.globl _EP6GPIFFLGSEL
                                    113 	.globl _EP4GPIFTRIG
                                    114 	.globl _EP4GPIFPFSTOP
                                    115 	.globl _EP4GPIFFLGSEL
                                    116 	.globl _EP2GPIFTRIG
                                    117 	.globl _EP2GPIFPFSTOP
                                    118 	.globl _EP2GPIFFLGSEL
                                    119 	.globl _GPIFTCB0
                                    120 	.globl _GPIFTCB1
                                    121 	.globl _GPIFTCB2
                                    122 	.globl _GPIFTCB3
                                    123 	.globl _GPIFADRL
                                    124 	.globl _GPIFADRH
                                    125 	.globl _GPIFCTLCFG
                                    126 	.globl _GPIFIDLECTL
                                    127 	.globl _GPIFIDLECS
                                    128 	.globl _GPIFWFSELECT
                                    129 	.globl _SETUPDAT
                                    130 	.globl _SUDPTRCTL
                                    131 	.globl _SUDPTRL
                                    132 	.globl _SUDPTRH
                                    133 	.globl _EP8FIFOBCL
                                    134 	.globl _EP8FIFOBCH
                                    135 	.globl _EP6FIFOBCL
                                    136 	.globl _EP6FIFOBCH
                                    137 	.globl _EP4FIFOBCL
                                    138 	.globl _EP4FIFOBCH
                                    139 	.globl _EP2FIFOBCL
                                    140 	.globl _EP2FIFOBCH
                                    141 	.globl _EP8FIFOFLGS
                                    142 	.globl _EP6FIFOFLGS
                                    143 	.globl _EP4FIFOFLGS
                                    144 	.globl _EP2FIFOFLGS
                                    145 	.globl _EP8CS
                                    146 	.globl _EP6CS
                                    147 	.globl _EP4CS
                                    148 	.globl _EP2CS
                                    149 	.globl _EP1INCS
                                    150 	.globl _EP1OUTCS
                                    151 	.globl _EP0CS
                                    152 	.globl _EP8BCL
                                    153 	.globl _EP8BCH
                                    154 	.globl _EP6BCL
                                    155 	.globl _EP6BCH
                                    156 	.globl _EP4BCL
                                    157 	.globl _EP4BCH
                                    158 	.globl _EP2BCL
                                    159 	.globl _EP2BCH
                                    160 	.globl _EP1INBC
                                    161 	.globl _EP1OUTBC
                                    162 	.globl _EP0BCL
                                    163 	.globl _EP0BCH
                                    164 	.globl _FNADDR
                                    165 	.globl _MICROFRAME
                                    166 	.globl _USBFRAMEL
                                    167 	.globl _USBFRAMEH
                                    168 	.globl _TOGCTL
                                    169 	.globl _WAKEUPCS
                                    170 	.globl _SUSPEND
                                    171 	.globl _USBCS
                                    172 	.globl _XAUTODAT2
                                    173 	.globl _XAUTODAT1
                                    174 	.globl _I2CTL
                                    175 	.globl _I2DAT
                                    176 	.globl _I2CS
                                    177 	.globl _PORTECFG
                                    178 	.globl _PORTCCFG
                                    179 	.globl _PORTACFG
                                    180 	.globl _INTSETUP
                                    181 	.globl _INT4IVEC
                                    182 	.globl _INT2IVEC
                                    183 	.globl _CLRERRCNT
                                    184 	.globl _ERRCNTLIM
                                    185 	.globl _USBERRIRQ
                                    186 	.globl _USBERRIE
                                    187 	.globl _GPIFIRQ
                                    188 	.globl _GPIFIE
                                    189 	.globl _EPIRQ
                                    190 	.globl _EPIE
                                    191 	.globl _USBIRQ
                                    192 	.globl _USBIE
                                    193 	.globl _NAKIRQ
                                    194 	.globl _NAKIE
                                    195 	.globl _IBNIRQ
                                    196 	.globl _IBNIE
                                    197 	.globl _EP8FIFOIRQ
                                    198 	.globl _EP8FIFOIE
                                    199 	.globl _EP6FIFOIRQ
                                    200 	.globl _EP6FIFOIE
                                    201 	.globl _EP4FIFOIRQ
                                    202 	.globl _EP4FIFOIE
                                    203 	.globl _EP2FIFOIRQ
                                    204 	.globl _EP2FIFOIE
                                    205 	.globl _OUTPKTEND
                                    206 	.globl _INPKTEND
                                    207 	.globl _EP8ISOINPKTS
                                    208 	.globl _EP6ISOINPKTS
                                    209 	.globl _EP4ISOINPKTS
                                    210 	.globl _EP2ISOINPKTS
                                    211 	.globl _EP8FIFOPFL
                                    212 	.globl _EP8FIFOPFH
                                    213 	.globl _EP6FIFOPFL
                                    214 	.globl _EP6FIFOPFH
                                    215 	.globl _EP4FIFOPFL
                                    216 	.globl _EP4FIFOPFH
                                    217 	.globl _EP2FIFOPFL
                                    218 	.globl _EP2FIFOPFH
                                    219 	.globl _EP8AUTOINLENL
                                    220 	.globl _EP8AUTOINLENH
                                    221 	.globl _EP6AUTOINLENL
                                    222 	.globl _EP6AUTOINLENH
                                    223 	.globl _EP4AUTOINLENL
                                    224 	.globl _EP4AUTOINLENH
                                    225 	.globl _EP2AUTOINLENL
                                    226 	.globl _EP2AUTOINLENH
                                    227 	.globl _EP8FIFOCFG
                                    228 	.globl _EP6FIFOCFG
                                    229 	.globl _EP4FIFOCFG
                                    230 	.globl _EP2FIFOCFG
                                    231 	.globl _EP8CFG
                                    232 	.globl _EP6CFG
                                    233 	.globl _EP4CFG
                                    234 	.globl _EP2CFG
                                    235 	.globl _EP1INCFG
                                    236 	.globl _EP1OUTCFG
                                    237 	.globl _REVCTL
                                    238 	.globl _REVID
                                    239 	.globl _FIFOPINPOLAR
                                    240 	.globl _UART230
                                    241 	.globl _BPADDRL
                                    242 	.globl _BPADDRH
                                    243 	.globl _BREAKPT
                                    244 	.globl _FIFORESET
                                    245 	.globl _PINFLAGSCD
                                    246 	.globl _PINFLAGSAB
                                    247 	.globl _IFCONFIG
                                    248 	.globl _CPUCS
                                    249 	.globl _RES_WAVEDATA_END
                                    250 	.globl _GPIF_WAVE_DATA
                                    251 ;--------------------------------------------------------
                                    252 ; special function registers
                                    253 ;--------------------------------------------------------
                                    254 	.area RSEG    (ABS,DATA)
      000000                        255 	.org 0x0000
                           000080   256 _IOA	=	0x0080
                           000081   257 _SP	=	0x0081
                           000082   258 _DPL	=	0x0082
                           000083   259 _DPH	=	0x0083
                           000084   260 _DPL1	=	0x0084
                           000085   261 _DPH1	=	0x0085
                           000086   262 _DPS	=	0x0086
                           000087   263 _PCON	=	0x0087
                           000088   264 _TCON	=	0x0088
                           000089   265 _TMOD	=	0x0089
                           00008A   266 _TL0	=	0x008a
                           00008B   267 _TL1	=	0x008b
                           00008C   268 _TH0	=	0x008c
                           00008D   269 _TH1	=	0x008d
                           00008E   270 _CKCO	=	0x008e
                           00008F   271 _SPC_	=	0x008f
                           000090   272 _IOB	=	0x0090
                           000091   273 _EXIF	=	0x0091
                           000092   274 _MPA	=	0x0092
                           000098   275 _SCO	=	0x0098
                           000099   276 _SBU	=	0x0099
                           00009A   277 _APTR1H	=	0x009a
                           00009B   278 _APTR1L	=	0x009b
                           00009C   279 _AUTODAT1	=	0x009c
                           00009D   280 _AUTOPTRH2	=	0x009d
                           00009E   281 _AUTOPTRL2	=	0x009e
                           00009F   282 _AUTODAT2	=	0x009f
                           0000A0   283 _IOC	=	0x00a0
                           0000A1   284 _INT2CLR	=	0x00a1
                           0000A2   285 _INT4CLR	=	0x00a2
                           0000A8   286 _IE	=	0x00a8
                           0000AA   287 _EP2468STAT	=	0x00aa
                           0000AB   288 _EP24FIFOFLGS	=	0x00ab
                           0000AC   289 _EP68FIFOFLGS	=	0x00ac
                           0000AF   290 _AUTOPTRSETUP	=	0x00af
                           0000B0   291 _IOD	=	0x00b0
                           0000B1   292 _IOE	=	0x00b1
                           0000B2   293 _OEA	=	0x00b2
                           0000B3   294 _OEB	=	0x00b3
                           0000B4   295 _OEC	=	0x00b4
                           0000B5   296 _OED	=	0x00b5
                           0000B6   297 _OEE	=	0x00b6
                           0000B8   298 _IP	=	0x00b8
                           0000BA   299 _EP01STAT	=	0x00ba
                           0000BB   300 _GPIFTRIG	=	0x00bb
                           0000BD   301 _GPIFSGLDATH	=	0x00bd
                           0000BE   302 _GPIFSGLDATLX	=	0x00be
                           0000BF   303 _GPIFSGLDATLNOX	=	0x00bf
                           0000C0   304 _SCON1	=	0x00c0
                           0000C1   305 _SBUF1	=	0x00c1
                           0000C8   306 _T2CON	=	0x00c8
                           0000CA   307 _RCAP2L	=	0x00ca
                           0000CB   308 _RCAP2H	=	0x00cb
                           0000CC   309 _TL2	=	0x00cc
                           0000CD   310 _TH2	=	0x00cd
                           0000D0   311 _PSW	=	0x00d0
                           0000D8   312 _EICON	=	0x00d8
                           0000E0   313 _ACC	=	0x00e0
                           0000E8   314 _EIE	=	0x00e8
                           0000F0   315 _B	=	0x00f0
                           0000F8   316 _EIP	=	0x00f8
                                    317 ;--------------------------------------------------------
                                    318 ; special function bits
                                    319 ;--------------------------------------------------------
                                    320 	.area RSEG    (ABS,DATA)
      000000                        321 	.org 0x0000
                                    322 ;--------------------------------------------------------
                                    323 ; overlayable register banks
                                    324 ;--------------------------------------------------------
                                    325 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        326 	.ds 8
                                    327 ;--------------------------------------------------------
                                    328 ; internal ram data
                                    329 ;--------------------------------------------------------
                                    330 	.area DSEG    (DATA)
                                    331 ;--------------------------------------------------------
                                    332 ; overlayable items in internal ram
                                    333 ;--------------------------------------------------------
                                    334 ;--------------------------------------------------------
                                    335 ; Stack segment in internal ram
                                    336 ;--------------------------------------------------------
                                    337 	.area	SSEG
      000008                        338 __start__stack:
      000008                        339 	.ds	1
                                    340 
                                    341 ;--------------------------------------------------------
                                    342 ; indirectly addressable internal ram data
                                    343 ;--------------------------------------------------------
                                    344 	.area ISEG    (DATA)
                                    345 ;--------------------------------------------------------
                                    346 ; absolute internal ram data
                                    347 ;--------------------------------------------------------
                                    348 	.area IABS    (ABS,DATA)
                                    349 	.area IABS    (ABS,DATA)
                                    350 ;--------------------------------------------------------
                                    351 ; bit data
                                    352 ;--------------------------------------------------------
                                    353 	.area BSEG    (BIT)
                                    354 ;--------------------------------------------------------
                                    355 ; paged external ram data
                                    356 ;--------------------------------------------------------
                                    357 	.area PSEG    (PAG,XDATA)
                                    358 ;--------------------------------------------------------
                                    359 ; external ram data
                                    360 ;--------------------------------------------------------
                                    361 	.area XSEG    (XDATA)
                           00E400   362 _GPIF_WAVE_DATA	=	0xe400
                           00E480   363 _RES_WAVEDATA_END	=	0xe480
                           00E600   364 _CPUCS	=	0xe600
                           00E601   365 _IFCONFIG	=	0xe601
                           00E602   366 _PINFLAGSAB	=	0xe602
                           00E603   367 _PINFLAGSCD	=	0xe603
                           00E604   368 _FIFORESET	=	0xe604
                           00E605   369 _BREAKPT	=	0xe605
                           00E606   370 _BPADDRH	=	0xe606
                           00E607   371 _BPADDRL	=	0xe607
                           00E608   372 _UART230	=	0xe608
                           00E609   373 _FIFOPINPOLAR	=	0xe609
                           00E60A   374 _REVID	=	0xe60a
                           00E60B   375 _REVCTL	=	0xe60b
                           00E610   376 _EP1OUTCFG	=	0xe610
                           00E611   377 _EP1INCFG	=	0xe611
                           00E612   378 _EP2CFG	=	0xe612
                           00E613   379 _EP4CFG	=	0xe613
                           00E614   380 _EP6CFG	=	0xe614
                           00E615   381 _EP8CFG	=	0xe615
                           00E618   382 _EP2FIFOCFG	=	0xe618
                           00E619   383 _EP4FIFOCFG	=	0xe619
                           00E61A   384 _EP6FIFOCFG	=	0xe61a
                           00E61B   385 _EP8FIFOCFG	=	0xe61b
                           00E620   386 _EP2AUTOINLENH	=	0xe620
                           00E621   387 _EP2AUTOINLENL	=	0xe621
                           00E622   388 _EP4AUTOINLENH	=	0xe622
                           00E623   389 _EP4AUTOINLENL	=	0xe623
                           00E624   390 _EP6AUTOINLENH	=	0xe624
                           00E625   391 _EP6AUTOINLENL	=	0xe625
                           00E626   392 _EP8AUTOINLENH	=	0xe626
                           00E627   393 _EP8AUTOINLENL	=	0xe627
                           00E630   394 _EP2FIFOPFH	=	0xe630
                           00E631   395 _EP2FIFOPFL	=	0xe631
                           00E632   396 _EP4FIFOPFH	=	0xe632
                           00E633   397 _EP4FIFOPFL	=	0xe633
                           00E634   398 _EP6FIFOPFH	=	0xe634
                           00E635   399 _EP6FIFOPFL	=	0xe635
                           00E636   400 _EP8FIFOPFH	=	0xe636
                           00E637   401 _EP8FIFOPFL	=	0xe637
                           00E640   402 _EP2ISOINPKTS	=	0xe640
                           00E641   403 _EP4ISOINPKTS	=	0xe641
                           00E642   404 _EP6ISOINPKTS	=	0xe642
                           00E643   405 _EP8ISOINPKTS	=	0xe643
                           00E648   406 _INPKTEND	=	0xe648
                           00E649   407 _OUTPKTEND	=	0xe649
                           00E650   408 _EP2FIFOIE	=	0xe650
                           00E651   409 _EP2FIFOIRQ	=	0xe651
                           00E652   410 _EP4FIFOIE	=	0xe652
                           00E653   411 _EP4FIFOIRQ	=	0xe653
                           00E654   412 _EP6FIFOIE	=	0xe654
                           00E655   413 _EP6FIFOIRQ	=	0xe655
                           00E656   414 _EP8FIFOIE	=	0xe656
                           00E657   415 _EP8FIFOIRQ	=	0xe657
                           00E658   416 _IBNIE	=	0xe658
                           00E659   417 _IBNIRQ	=	0xe659
                           00E65A   418 _NAKIE	=	0xe65a
                           00E65B   419 _NAKIRQ	=	0xe65b
                           00E65C   420 _USBIE	=	0xe65c
                           00E65D   421 _USBIRQ	=	0xe65d
                           00E65E   422 _EPIE	=	0xe65e
                           00E65F   423 _EPIRQ	=	0xe65f
                           00E660   424 _GPIFIE	=	0xe660
                           00E661   425 _GPIFIRQ	=	0xe661
                           00E662   426 _USBERRIE	=	0xe662
                           00E663   427 _USBERRIRQ	=	0xe663
                           00E664   428 _ERRCNTLIM	=	0xe664
                           00E665   429 _CLRERRCNT	=	0xe665
                           00E666   430 _INT2IVEC	=	0xe666
                           00E667   431 _INT4IVEC	=	0xe667
                           00E668   432 _INTSETUP	=	0xe668
                           00E670   433 _PORTACFG	=	0xe670
                           00E671   434 _PORTCCFG	=	0xe671
                           00E672   435 _PORTECFG	=	0xe672
                           00E678   436 _I2CS	=	0xe678
                           00E679   437 _I2DAT	=	0xe679
                           00E67A   438 _I2CTL	=	0xe67a
                           00E67B   439 _XAUTODAT1	=	0xe67b
                           00E67C   440 _XAUTODAT2	=	0xe67c
                           00E680   441 _USBCS	=	0xe680
                           00E681   442 _SUSPEND	=	0xe681
                           00E682   443 _WAKEUPCS	=	0xe682
                           00E683   444 _TOGCTL	=	0xe683
                           00E684   445 _USBFRAMEH	=	0xe684
                           00E685   446 _USBFRAMEL	=	0xe685
                           00E686   447 _MICROFRAME	=	0xe686
                           00E687   448 _FNADDR	=	0xe687
                           00E68A   449 _EP0BCH	=	0xe68a
                           00E68B   450 _EP0BCL	=	0xe68b
                           00E68D   451 _EP1OUTBC	=	0xe68d
                           00E68F   452 _EP1INBC	=	0xe68f
                           00E690   453 _EP2BCH	=	0xe690
                           00E691   454 _EP2BCL	=	0xe691
                           00E694   455 _EP4BCH	=	0xe694
                           00E695   456 _EP4BCL	=	0xe695
                           00E698   457 _EP6BCH	=	0xe698
                           00E699   458 _EP6BCL	=	0xe699
                           00E69C   459 _EP8BCH	=	0xe69c
                           00E69D   460 _EP8BCL	=	0xe69d
                           00E6A0   461 _EP0CS	=	0xe6a0
                           00E6A1   462 _EP1OUTCS	=	0xe6a1
                           00E6A2   463 _EP1INCS	=	0xe6a2
                           00E6A3   464 _EP2CS	=	0xe6a3
                           00E6A4   465 _EP4CS	=	0xe6a4
                           00E6A5   466 _EP6CS	=	0xe6a5
                           00E6A6   467 _EP8CS	=	0xe6a6
                           00E6A7   468 _EP2FIFOFLGS	=	0xe6a7
                           00E6A8   469 _EP4FIFOFLGS	=	0xe6a8
                           00E6A9   470 _EP6FIFOFLGS	=	0xe6a9
                           00E6AA   471 _EP8FIFOFLGS	=	0xe6aa
                           00E6AB   472 _EP2FIFOBCH	=	0xe6ab
                           00E6AC   473 _EP2FIFOBCL	=	0xe6ac
                           00E6AD   474 _EP4FIFOBCH	=	0xe6ad
                           00E6AE   475 _EP4FIFOBCL	=	0xe6ae
                           00E6AF   476 _EP6FIFOBCH	=	0xe6af
                           00E6B0   477 _EP6FIFOBCL	=	0xe6b0
                           00E6B1   478 _EP8FIFOBCH	=	0xe6b1
                           00E6B2   479 _EP8FIFOBCL	=	0xe6b2
                           00E6B3   480 _SUDPTRH	=	0xe6b3
                           00E6B4   481 _SUDPTRL	=	0xe6b4
                           00E6B5   482 _SUDPTRCTL	=	0xe6b5
                           00E6B8   483 _SETUPDAT	=	0xe6b8
                           00E6C0   484 _GPIFWFSELECT	=	0xe6c0
                           00E6C1   485 _GPIFIDLECS	=	0xe6c1
                           00E6C2   486 _GPIFIDLECTL	=	0xe6c2
                           00E6C3   487 _GPIFCTLCFG	=	0xe6c3
                           00E6C4   488 _GPIFADRH	=	0xe6c4
                           00E6C5   489 _GPIFADRL	=	0xe6c5
                           00E6CE   490 _GPIFTCB3	=	0xe6ce
                           00E6CF   491 _GPIFTCB2	=	0xe6cf
                           00E6D0   492 _GPIFTCB1	=	0xe6d0
                           00E6D1   493 _GPIFTCB0	=	0xe6d1
                           00E6D2   494 _EP2GPIFFLGSEL	=	0xe6d2
                           00E6D3   495 _EP2GPIFPFSTOP	=	0xe6d3
                           00E6D4   496 _EP2GPIFTRIG	=	0xe6d4
                           00E6DA   497 _EP4GPIFFLGSEL	=	0xe6da
                           00E6DB   498 _EP4GPIFPFSTOP	=	0xe6db
                           00E6DC   499 _EP4GPIFTRIG	=	0xe6dc
                           00E6E2   500 _EP6GPIFFLGSEL	=	0xe6e2
                           00E6E3   501 _EP6GPIFPFSTOP	=	0xe6e3
                           00E6E4   502 _EP6GPIFTRIG	=	0xe6e4
                           00E6EA   503 _EP8GPIFFLGSEL	=	0xe6ea
                           00E6EB   504 _EP8GPIFPFSTOP	=	0xe6eb
                           00E6EC   505 _EP8GPIFTRIG	=	0xe6ec
                           00E6F0   506 _XGPIFSGLDATH	=	0xe6f0
                           00E6F1   507 _XGPIFSGLDATLX	=	0xe6f1
                           00E6F2   508 _XGPIFSGLDATLNOX	=	0xe6f2
                           00E6F3   509 _GPIFREADYCFG	=	0xe6f3
                           00E6F4   510 _GPIFREADYSTAT	=	0xe6f4
                           00E6F5   511 _GPIFABORT	=	0xe6f5
                           00E6C6   512 _FLOWSTATE	=	0xe6c6
                           00E6C7   513 _FLOWLOGIC	=	0xe6c7
                           00E6C8   514 _FLOWEQ0CTL	=	0xe6c8
                           00E6C9   515 _FLOWEQ1CTL	=	0xe6c9
                           00E6CA   516 _FLOWHOLDOFF	=	0xe6ca
                           00E6CB   517 _FLOWSTB	=	0xe6cb
                           00E6CC   518 _FLOWSTBEDGE	=	0xe6cc
                           00E6CD   519 _FLOWSTBHPERIOD	=	0xe6cd
                           00E60C   520 _GPIFHOLDAMOUNT	=	0xe60c
                           00E67D   521 _UDMACRCH	=	0xe67d
                           00E67E   522 _UDMACRCL	=	0xe67e
                           00E67F   523 _UDMACRCQUAL	=	0xe67f
                           00E6F8   524 _DBUG	=	0xe6f8
                           00E6F9   525 _TESTCFG	=	0xe6f9
                           00E6FA   526 _USBTEST	=	0xe6fa
                           00E6FB   527 _CT1	=	0xe6fb
                           00E6FC   528 _CT2	=	0xe6fc
                           00E6FD   529 _CT3	=	0xe6fd
                           00E6FE   530 _CT4	=	0xe6fe
                           00E740   531 _EP0BUF	=	0xe740
                           00E780   532 _EP1OUTBUF	=	0xe780
                           00E7C0   533 _EP1INBUF	=	0xe7c0
                           00F000   534 _EP2FIFOBUF	=	0xf000
                           00F400   535 _EP4FIFOBUF	=	0xf400
                           00F800   536 _EP6FIFOBUF	=	0xf800
                           00FC00   537 _EP8FIFOBUF	=	0xfc00
                                    538 ;--------------------------------------------------------
                                    539 ; absolute external ram data
                                    540 ;--------------------------------------------------------
                                    541 	.area XABS    (ABS,XDATA)
                                    542 ;--------------------------------------------------------
                                    543 ; external initialized ram data
                                    544 ;--------------------------------------------------------
                                    545 	.area XISEG   (XDATA)
                                    546 	.area HOME    (CODE)
                                    547 	.area GSINIT0 (CODE)
                                    548 	.area GSINIT1 (CODE)
                                    549 	.area GSINIT2 (CODE)
                                    550 	.area GSINIT3 (CODE)
                                    551 	.area GSINIT4 (CODE)
                                    552 	.area GSINIT5 (CODE)
                                    553 	.area GSINIT  (CODE)
                                    554 	.area GSFINAL (CODE)
                                    555 	.area CSEG    (CODE)
                                    556 ;--------------------------------------------------------
                                    557 ; interrupt vector
                                    558 ;--------------------------------------------------------
                                    559 	.area HOME    (CODE)
      000000                        560 __interrupt_vect:
      000000 02 00 06         [24]  561 	ljmp	__sdcc_gsinit_startup
                                    562 ;--------------------------------------------------------
                                    563 ; global & static initialisations
                                    564 ;--------------------------------------------------------
                                    565 	.area HOME    (CODE)
                                    566 	.area GSINIT  (CODE)
                                    567 	.area GSFINAL (CODE)
                                    568 	.area GSINIT  (CODE)
                                    569 	.globl __sdcc_gsinit_startup
                                    570 	.globl __sdcc_program_startup
                                    571 	.globl __start__stack
                                    572 	.globl __mcs51_genXINIT
                                    573 	.globl __mcs51_genXRAMCLEAR
                                    574 	.globl __mcs51_genRAMCLEAR
                                    575 	.area GSFINAL (CODE)
      00005F 02 00 03         [24]  576 	ljmp	__sdcc_program_startup
                                    577 ;--------------------------------------------------------
                                    578 ; Home
                                    579 ;--------------------------------------------------------
                                    580 	.area HOME    (CODE)
                                    581 	.area HOME    (CODE)
      000003                        582 __sdcc_program_startup:
      000003 02 00 80         [24]  583 	ljmp	_main
                                    584 ;	return from main will return to caller
                                    585 ;--------------------------------------------------------
                                    586 ; code
                                    587 ;--------------------------------------------------------
                                    588 	.area CSEG    (CODE)
                                    589 ;------------------------------------------------------------
                                    590 ;Allocation info for local variables in function 'delay_1ms'
                                    591 ;------------------------------------------------------------
                                    592 ;	blink.c:5: void delay_1ms(void) __naked {
                                    593 ;	-----------------------------------------
                                    594 ;	 function delay_1ms
                                    595 ;	-----------------------------------------
      000062                        596 _delay_1ms:
                                    597 ;	naked function: no prologue.
                                    598 ;	blink.c:14: __endasm;
      000062 90 FB 50         [24]  599 	mov	dptr, #(-1200 & 0xffff)
      000065                        600 	 1$:
      000065 A3               [24]  601 	inc	dptr
      000066 E5 82            [12]  602 	mov	a, dpl
      000068 45 83            [12]  603 	orl	a, dph
      00006A 70 F9            [24]  604 	jnz	1$
      00006C 22               [24]  605 	ret
                                    606 ;	blink.c:15: }
                                    607 ;	naked function: no epilogue.
                                    608 ;------------------------------------------------------------
                                    609 ;Allocation info for local variables in function 'delay_ms'
                                    610 ;------------------------------------------------------------
                                    611 ;delay                     Allocated to registers 
                                    612 ;------------------------------------------------------------
                                    613 ;	blink.c:17: void delay_ms(unsigned int delay) {
                                    614 ;	-----------------------------------------
                                    615 ;	 function delay_ms
                                    616 ;	-----------------------------------------
      00006D                        617 _delay_ms:
                           000007   618 	ar7 = 0x07
                           000006   619 	ar6 = 0x06
                           000005   620 	ar5 = 0x05
                           000004   621 	ar4 = 0x04
                           000003   622 	ar3 = 0x03
                           000002   623 	ar2 = 0x02
                           000001   624 	ar1 = 0x01
                           000000   625 	ar0 = 0x00
      00006D AE 82            [24]  626 	mov	r6,dpl
      00006F AF 83            [24]  627 	mov	r7,dph
                                    628 ;	blink.c:18: while(--delay) {
      000071                        629 00101$:
      000071 1E               [12]  630 	dec	r6
      000072 BE FF 01         [24]  631 	cjne	r6,#0xff,00115$
      000075 1F               [12]  632 	dec	r7
      000076                        633 00115$:
      000076 EE               [12]  634 	mov	a,r6
      000077 4F               [12]  635 	orl	a,r7
      000078 60 05            [24]  636 	jz	00104$
                                    637 ;	blink.c:19: delay_1ms();
      00007A 12 00 62         [24]  638 	lcall	_delay_1ms
      00007D 80 F2            [24]  639 	sjmp	00101$
      00007F                        640 00104$:
                                    641 ;	blink.c:21: }
      00007F 22               [24]  642 	ret
                                    643 ;------------------------------------------------------------
                                    644 ;Allocation info for local variables in function 'main'
                                    645 ;------------------------------------------------------------
                                    646 ;	blink.c:23: void main(void) {
                                    647 ;	-----------------------------------------
                                    648 ;	 function main
                                    649 ;	-----------------------------------------
      000080                        650 _main:
                                    651 ;	blink.c:24: CPUCS = (2ul <<3);
      000080 90 E6 00         [24]  652 	mov	dptr,#_CPUCS
      000083 74 10            [12]  653 	mov	a,#0x10
      000085 F0               [24]  654 	movx	@dptr,a
                                    655 ;	blink.c:25: OEA |= (1<<bmBIT0) | (1<<bmBIT1);
      000086 43 B2 06         [24]  656 	orl	_OEA,#0x06
                                    657 ;	blink.c:26: IOA |= (1<<bmBIT0);
      000089 43 80 02         [24]  658 	orl	_IOA,#0x02
                                    659 ;	blink.c:27: IOA &= ~(bmBIT1);
      00008C 53 80 FD         [24]  660 	anl	_IOA,#0xfd
      00008F                        661 00102$:
                                    662 ;	blink.c:29: IOA ^= (1<<bmBIT0);
      00008F 63 80 02         [24]  663 	xrl	_IOA,#0x02
                                    664 ;	blink.c:30: IOA ^= (1<<bmBIT1);
      000092 63 80 04         [24]  665 	xrl	_IOA,#0x04
                                    666 ;	blink.c:31: delay_ms(1000);
      000095 90 03 E8         [24]  667 	mov	dptr,#0x03e8
      000098 12 00 6D         [24]  668 	lcall	_delay_ms
                                    669 ;	blink.c:32: IOA ^= (1<<bmBIT0);
      00009B 63 80 02         [24]  670 	xrl	_IOA,#0x02
                                    671 ;	blink.c:33: IOA ^= (1<<bmBIT1);
      00009E 63 80 04         [24]  672 	xrl	_IOA,#0x04
                                    673 ;	blink.c:34: delay_ms(1000);
      0000A1 90 03 E8         [24]  674 	mov	dptr,#0x03e8
      0000A4 12 00 6D         [24]  675 	lcall	_delay_ms
                                    676 ;	blink.c:36: }
      0000A7 80 E6            [24]  677 	sjmp	00102$
                                    678 	.area CSEG    (CODE)
                                    679 	.area CONST   (CODE)
                                    680 	.area XINIT   (CODE)
                                    681 	.area CABS    (ABS,CODE)
