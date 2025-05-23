//a mettre dans le meme fichier que le .cpp
#define R_GAIN    0x00 
#define R_BLUE    0x01 
#define R_RED     0x02 
#define R_VREF    0x03 
#define R_COM1    0x04
#define R_BAVE    0x05
#define R_GbAVE   0x06
#define R_AECHH   0x07
#define R_RAVE    0x08
#define R_COM2    0x09
#define R_PID     0x0A
#define R_VER     0x0B
#define R_COM3    0x0C
#define R_COM4    0x0D
#define R_COM5    0x0E
#define R_COM6    0x0F
#define R_AECH    0x10
#define R_CLKRC   0x11
#define R_COM7    0x12
#define R_COM8    0x13
#define R_COM9    0x14
#define R_COM10   0x15
#define R_RSVD_0  0x16
#define R_HSTART  0x17
#define R_HSTOP   0x18
#define R_VSTRT   0x19
#define R_VSTOP   0x1A
#define R_PSHIFT  0x1B
#define R_MIDH    0x7F
#define R_MINDL   0x1D
#define R_MVFP    0x1E
#define R_LAEC    0x1F
#define R_ADDCTR0 0x20
#define R_ADDCTR1 0x21
#define R_ADDCTR2 0x22
#define R_ADDCTR3 0x23
#define R_AEW     0x24
#define R_AEB     0x25
#define R_VPT     0x26
#define R_BBIAS   0x27
#define R_GBBIAS  0x28
#define R_RSVD_1  0x29
#define R_EXHCH   0x2A
#define R_RBIAS   0x2C
#define R_ADVFL   0x2D
#define R_ADVFH   0x2E
#define R_YAVE    0x2F
#define R_HSYST   0x30
#define R_HSYEN   0x31
#define R_HREF    0x32
#define R_CHLF    0x33
#define R_ARBLM   0x34
#define R_RSVD_2  0x35
#define R_RSVD_3  0x36
#define R_ADC     0x37
#define R_ACOM    0x38
#define R_OFON    0x39
#define R_TSLB    0x3A
#define R_COM11   0x3B
#define R_COM12   0x3C
#define R_COM13   0x3D
#define R_COM14   0x3E
#define R_EDGE    0x3F
#define R_COM15   0x40
#define R_COM16   0x41
#define R_COM17   0x42
#define R_AWBC1   0x43
#define R_AWBC2   0x44
#define R_AWBC3   0x45
#define R_AWBC4   0x46
#define R_AWBC5   0x47
#define R_AWBC6   0x48
#define R_RSVD_4  0x49
#define R_RSVD_5  0x4A
#define R_REG4B   0x4B
#define R_DNSTH   0x4C
#define R_RSVD_6  0x4D
#define R_RSVD_7  0x4E
#define R_MTX1    0x4F
#define R_MTX2    0x50
#define R_MTX3    0x51
#define R_MTX4    0x52
#define R_MTX5    0x53
#define R_MTX6    0x54
#define R_BRIGHT  0x55
#define R_CONTRAS 0x56
#define R_CONTRAS_CENTER 0x57
#define R_MTXS    0x58
#define R_RSVD_8  0x59
#define R_RSVD_9  0x5A
#define R_RSVD_10 0x5B
#define R_RSVD_11 0x5C
#define R_RSVD_12 0x5D
#define R_RSVD_13 0x5E
#define R_RSVD_14 0x5F
#define R_RSVD_15 0x60
#define R_RSVD_16 0x61
#define R_LCC1    0x62
#define R_LCC2    0x63
#define R_LCC3    0x64
#define R_LCC4    0x65
#define R_LCC5    0x66
#define R_MANU    0x67
#define R_MANV    0x68
#define R_GFIX    0x69
#define R_GGAIN   0x6A
#define R_DBLV    0x6B
#define R_AWBCTR3 0x6C
#define R_AWBCTR2 0x6D
#define R_AWBCTR1 0x6E
#define R_AWBCTR0 0x6F
#define R_SCALING_XSC   0x70
#define R_SCALING_YSC   0x71
#define R_SCALING_DCWCTR 0x72
#define R_SCALING_PCLK_DIV 0x73
#define R_REG74   0x74
#define R_REG75   0x75
#define R_REG76   0x76
#define R_REG77   0x77
#define R_RSVD_17 0x78
#define R_RSVD_18 0x79
#define R_SLOP    0x7A
#define R_GAM1    0x7B
#define R_GAM2    0x7C
#define R_GAM3    0x7D
#define R_GAM4    0x7E
#define R_GAM5    0x7F
#define R_GAM6    0x80
#define R_GAM7    0x81
#define R_GAM8    0x82
#define R_GAM9    0x83
#define R_GAM10   0x84
#define R_GAM11   0x85
#define R_GAM12   0x86
#define R_GAM13   0x87
#define R_GAM14   0x88
#define R_GAM15   0x89
#define R_RSVD_19 0x8A
#define R_RSVD_20 0x8B
#define R_RGB444  0x8C
#define R_RSVD_21 0x8D
#define R_RSVD_22 0x8E
#define R_RSVD_23 0x8F
#define R_RSVD_24 0x90
#define R_RSVD_25 0x91
#define R_DM_LNL  0x92
#define R_DM_LNH  0x93
#define R_LCC6    0x94
#define R_LCC7    0x95
#define R_RSVD_26 0x96
#define R_RSVD_27 0x97
#define R_RSVD_28 0x98
#define R_RSVD_29 0x99
#define R_RSVD_30 0x9A
#define R_RSVD_31 0x9B
#define R_RSVD_32 0x9C
#define R_BD50ST  0x9D
#define R_BD60ST  0x9E
#define R_HAECC1  0x9F
#define R_HAECC2  0xA0
#define R_RSVD_33 0xA1
#define R_SCALING_PCLK_DELAY 0xA2
#define R_RSVD_34 0xA3
#define R_NT_CTRL 0xA4
#define R_BD50MAX 0xA5
#define R_HAECC3  0xA6
#define R_HAECC4  0xA7
#define R_HAECC5  0xA8
#define R_HAECC6  0xA9
#define R_HAECC7  0xAA
#define R_BD60MAX 0xAB
#define R_STR_OPT 0xAC
#define R_STR_R   0xAD
#define R_STR_G   0xAE
#define R_STR_B   0xAF
#define R_RSVD_35 0xB0
#define R_ABLC1   0xB1
#define R_RSVD_36 0xB2
#define R_THL_ST  0xB3
#define R_RSVD_37 0xB4
#define R_THL_DLT 0xB5
#define R_RSVD_38 0xB6
#define R_RSVD_39 0xB7
#define R_RSVD_40 0xB8
#define R_RSVD_41 0xB9
#define R_RSVD_42 0xBA
#define R_RSVD_43 0xBB
#define R_RSVD_44 0xBC
#define R_RSVD_45 0xBD
#define R_AD_CHB  0xBE
#define R_AD_CHR  0xBF
#define R_AD_CHGb 0xC0
#define R_AD_CHGr 0xC1
#define R_RSVD_46 0xC2
#define R_RSVD_47 0xC3
#define R_RSVD_48 0xC4
#define R_RSVD_49 0xC5
#define R_RSVD_50 0xC6
#define R_RSVD_51 0xC7
#define R_RSVD_52 0xC8
#define R_SATCTR  0xC9