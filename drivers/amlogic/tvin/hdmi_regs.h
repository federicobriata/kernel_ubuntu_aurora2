#ifndef  HDMI_REGS_H
#define  HDMI_REGS_H

//inside chip
// tx base addr  : 0x00000 ~ 0x03fff
// rx base addr  : 0x04000 ~ 0x07fff
// other base addr : 0x08000 ~ 0x0bfff
// cec0 base addr : 0x0c000 ~ 0x0c0ff
//external module
// tx base addr  : 0x10000 ~ 0x13fff
// rx base addr  : 0x14000 ~ 0x17fff
// sim base addr : 0x18000 ~ 0x1bfff
// cec0 base addr : 0x1c000 ~ 0x1c0ff
// cec1 base addr : 0x1c100 ~ 0x1c1ff

#define RX_BASE_ADDR                0x04000 // Base address for on-chip HDMI RX

#define EXT_HDMI_TRX_ADDR_OFFSET    0x10000 // For simulation only: add the offset for accessing off-chip HDMI TX and/or RX

//#ifdef STIMULUS_HAVE_HDMI_TX
//#define TX_BASE_ADDR     0x10000        //outside chip
//#else
//#define TX_BASE_ADDR     0x00000        //inside chip
//#endif
//
//#ifdef STIMULUS_HAVE_HDMI_RX
//#define RX_BASE_ADDR     0x14000        //outside chip
//#else
//#define RX_BASE_ADDR     0x04000        //inside chip
//#endif

#define SIM_BASE_ADDR    0x18000        //outside chip 
#define CEC0_BASE_ADDR    0x0c000       //inside chip 
#define CEC1_BASE_ADDR    0x1c100       //outside chip 

#define OTHER_BASE_ADDR  0x08000        //inside chip

//********** OTHER BASE related **********//
#define HDMI_OTHER_CTRL0                    0x0
#define HDMI_OTHER_CTRL1                    0x1
#define HDMI_OTHER_STATUS0                  0x2
#define HDMI_OTHER_CTRL2                    0x3
#define HDMI_OTHER_INTR_MASKN               0x4
#define HDMI_OTHER_INTR_STAT                0x5
#define HDMI_OTHER_INTR_STAT_CLR            0x6
// Reserved                                 0x7
#define HDMI_OTHER_AVI_INTR_MASKN0          0x8
#define HDMI_OTHER_AVI_INTR_MASKN1          0x9
#define HDMI_OTHER_RX_AINFO_INTR_MASKN0     0xa
#define HDMI_OTHER_RX_AINFO_INTR_MASKN1     0xb
#define HDMI_OTHER_RX_PACKET_INTR_CLR       0xc

//********** TX related **********//
#define TX_RX_EDID_OFFSET               TX_BASE_ADDR+0x600 
#define TX_HDCP_SHADOW_OFFSET           TX_BASE_ADDR+0x100 

#define TX_IEC60958_SUB1_OFFSET         TX_BASE_ADDR+0x0B0 
#define TX_IEC60958_SUB2_OFFSET         TX_BASE_ADDR+0x0C8 

#define TX_IEC60958_ST_SUB1_OFFSET      TX_BASE_ADDR+0x1B0 
#define TX_IEC60958_ST_SUB2_OFFSET      TX_BASE_ADDR+0x1C8 

// System config 0
#define TX_SYS0_AFE_SIGNAL        TX_BASE_ADDR+0x000 
#define TX_SYS0_AFE_LOOP          TX_BASE_ADDR+0x001 
#define TX_SYS0_ACR_CTS_0         TX_BASE_ADDR+0x002 
#define TX_SYS0_ACR_CTS_1         TX_BASE_ADDR+0x003 
#define TX_SYS0_ACR_CTS_2         TX_BASE_ADDR+0x004 
#define TX_SYS0_BIST_CONTROL      TX_BASE_ADDR+0x005 
#define TX_SYS0_BIST_DATA_0       TX_BASE_ADDR+0x006 
#define TX_SYS0_BIST_DATA_1       TX_BASE_ADDR+0x007 
#define TX_SYS0_BIST_DATA_2       TX_BASE_ADDR+0x008 
#define TX_SYS0_BIST_DATA_3       TX_BASE_ADDR+0x009 
#define TX_SYS0_BIST_DATA_4       TX_BASE_ADDR+0x00A 
#define TX_SYS0_BIST_DATA_5       TX_BASE_ADDR+0x00B 
#define TX_SYS0_BIST_DATA_6       TX_BASE_ADDR+0x00C 
#define TX_SYS0_BIST_DATA_7       TX_BASE_ADDR+0x00D 
#define TX_SYS0_BIST_DATA_8       TX_BASE_ADDR+0x00E 
#define TX_SYS0_BIST_DATA_9       TX_BASE_ADDR+0x00F 
// system config 1
#define TX_SYS1_PRE_EMPHASIS      TX_BASE_ADDR+0x010 
#define TX_SYS1_TERMINATION       TX_BASE_ADDR+0x011 
#define TX_SYS1_AFE_SPARE0        TX_BASE_ADDR+0x012 
#define TX_SYS1_AFE_SPARE1        TX_BASE_ADDR+0x013 
#define TX_SYS1_BANDGAP           TX_BASE_ADDR+0x014 
#define TX_SYS1_BIAS              TX_BASE_ADDR+0x015 
#define TX_SYS1_AFE_RESET         TX_BASE_ADDR+0x016 
#define TX_SYS1_AFE_TEST          TX_BASE_ADDR+0x017 
#define TX_SYS1_PLL               TX_BASE_ADDR+0x018 
#define TX_SYS1_TUNE              TX_BASE_ADDR+0x019 
#define TX_SYS1_AFE_CONNECT       TX_BASE_ADDR+0x01A 
#define TX_SYS1_ACR_N_0           TX_BASE_ADDR+0x01C 
#define TX_SYS1_ACR_N_1           TX_BASE_ADDR+0x01D 
#define TX_SYS1_ACR_N_2           TX_BASE_ADDR+0x01E 
#define TX_SYS1_PRBS_DATA         TX_BASE_ADDR+0x01F 
// system config 4
#define TX_SYS4_TX_CKI_DDR        TX_BASE_ADDR+0x0A0 
#define TX_SYS4_TX_CKO_DDR        TX_BASE_ADDR+0x0A1 
#define TX_SYS4_RX_CKI_DDR        TX_BASE_ADDR+0x0A2 
#define TX_SYS4_RX_CKO_DDR        TX_BASE_ADDR+0x0A3 
#define TX_SYS4_CONNECT_SEL_0     TX_BASE_ADDR+0x0A4 
#define TX_SYS4_CONNECT_SEL_1     TX_BASE_ADDR+0x0A5 
#define TX_SYS4_CONNECT_SEL_2     TX_BASE_ADDR+0x0A6 
#define TX_SYS4_CONNECT_SEL_3     TX_BASE_ADDR+0x0A7 
#define TX_SYS4_CK_INV_VIDEO      TX_BASE_ADDR+0x0A8 
#define TX_SYS4_CK_INV_AUDIO      TX_BASE_ADDR+0x0A9 
#define TX_SYS4_CK_INV_AFE        TX_BASE_ADDR+0x0AA 
#define TX_SYS4_CK_INV_CH01       TX_BASE_ADDR+0x0AB 
#define TX_SYS4_CK_INV_CH2        TX_BASE_ADDR+0x0AC 
#define TX_SYS4_CK_CEC            TX_BASE_ADDR+0x0AD 
#define TX_SYS4_CK_SOURCE_1       TX_BASE_ADDR+0x0AE 
#define TX_SYS4_CK_SOURCE_2       TX_BASE_ADDR+0x0AF 
// system config 5
#define TX_SYS5_TX_SOFT_RESET_1   TX_BASE_ADDR+0x0E0 
#define TX_SYS5_TX_SOFT_RESET_2   TX_BASE_ADDR+0x0E1 
#define TX_SYS5_RX_SOFT_RESET_1   TX_BASE_ADDR+0x0E2 
#define TX_SYS5_RX_SOFT_RESET_2   TX_BASE_ADDR+0x0E3 
#define TX_SYS5_RX_SOFT_RESET_3   TX_BASE_ADDR+0x0E4 
#define TX_SYS5_SSTL_BIDIR_IN     TX_BASE_ADDR+0x0E5 
#define TX_SYS5_SSTL_IN           TX_BASE_ADDR+0x0E6 
#define TX_SYS5_SSTL_DIFF_IN      TX_BASE_ADDR+0x0E7 
#define TX_SYS5_FIFO_CONFIG       TX_BASE_ADDR+0x0E8 
#define TX_SYS5_FIFO_SAMP01_CFG   TX_BASE_ADDR+0x0E9 
#define TX_SYS5_FIFO_SAMP23_CFG   TX_BASE_ADDR+0x0EA 
#define TX_SYS5_CONNECT_FIFO_CFG  TX_BASE_ADDR+0x0EB 
#define TX_SYS5_IO_CALIB_CONTROL  TX_BASE_ADDR+0x0EC 
#define TX_SYS5_SSTL_BIDIR_OUT    TX_BASE_ADDR+0x0ED 
#define TX_SYS5_SSTL_OUT          TX_BASE_ADDR+0x0EE 
#define TX_SYS5_SSTL_DIFF_OUT     TX_BASE_ADDR+0x0EF 

// HDCP CONFIG
#define TX_HDCP_ECC_CONFIG        TX_BASE_ADDR+0x024 
#define TX_HDCP_CRC_CONFIG        TX_BASE_ADDR+0x025 
#define TX_HDCP_EDID_CONFIG       TX_BASE_ADDR+0x026 
#define TX_HDCP_MEM_CONFIG        TX_BASE_ADDR+0x027 
#define TX_HDCP_HPD_FILTER_L      TX_BASE_ADDR+0x028 
#define TX_HDCP_HPD_FILTER_H      TX_BASE_ADDR+0x029 
#define TX_HDCP_ENCRYPT_BYTE      TX_BASE_ADDR+0x02A 
#define TX_HDCP_CONFIG0           TX_BASE_ADDR+0x02B 
#define TX_HDCP_CONFIG1           TX_BASE_ADDR+0x02C 
#define TX_HDCP_CONFIG2           TX_BASE_ADDR+0x02D 
#define TX_HDCP_CONFIG3           TX_BASE_ADDR+0x02E 
#define TX_HDCP_MODE              TX_BASE_ADDR+0x02F 

// Video config, part 1
#define TX_VIDEO_ACTIVE_PIXELS_0  TX_BASE_ADDR+0x030 
#define TX_VIDEO_ACTIVE_PIXELS_1  TX_BASE_ADDR+0x031 
#define TX_VIDEO_FRONT_PIXELS     TX_BASE_ADDR+0x032 
#define TX_VIDEO_HSYNC_PIXELS     TX_BASE_ADDR+0x033 
#define TX_VIDEO_BACK_PIXELS      TX_BASE_ADDR+0x034 
#define TX_VIDEO_ACTIVE_LINES_0   TX_BASE_ADDR+0x035 
#define TX_VIDEO_ACTIVE_LINES_1   TX_BASE_ADDR+0x036 
#define TX_VIDEO_EOF_LINES        TX_BASE_ADDR+0x037 
#define TX_VIDEO_VSYNC_LINES      TX_BASE_ADDR+0x038 
#define TX_VIDEO_SOF_LINES        TX_BASE_ADDR+0x039 
#define TX_VIDEO_DTV_TIMING       TX_BASE_ADDR+0x03A 
#define TX_VIDEO_DTV_MODE         TX_BASE_ADDR+0x03B 
#define TX_VIDEO_DTV_FORMAT0      TX_BASE_ADDR+0x03C 
#define TX_VIDEO_DTV_FORMAT1      TX_BASE_ADDR+0x03D 
#define TX_VIDEO_PIXEL_PACK       TX_BASE_ADDR+0x03F 
// video config, part 2
#define TX_VIDEO_CSC_COEFF_B0     TX_BASE_ADDR+0x040 
#define TX_VIDEO_CSC_COEFF_B1     TX_BASE_ADDR+0x041 
#define TX_VIDEO_CSC_COEFF_R0     TX_BASE_ADDR+0x042 
#define TX_VIDEO_CSC_COEFF_R1     TX_BASE_ADDR+0x043 
#define TX_VIDEO_CSC_COEFF_CB0    TX_BASE_ADDR+0x044 
#define TX_VIDEO_CSC_COEFF_CB1    TX_BASE_ADDR+0x045 
#define TX_VIDEO_CSC_COEFF_CR0    TX_BASE_ADDR+0x046 
#define TX_VIDEO_CSC_COEFF_CR1    TX_BASE_ADDR+0x047 
#define TX_VIDEO_DTV_OPTION_L     TX_BASE_ADDR+0x048 
#define TX_VIDEO_DTV_OPTION_H     TX_BASE_ADDR+0x049 
#define TX_VIDEO_DTV_FILTER       TX_BASE_ADDR+0x04A 
#define TX_VIDEO_DTV_DITHER       TX_BASE_ADDR+0x04B 
#define TX_VIDEO_DTV_DEDITHER     TX_BASE_ADDR+0x04C 
#define TX_VIDEO_PROC_CONFIG0     TX_BASE_ADDR+0x04E 
#define TX_VIDEO_PROC_CONFIG1     TX_BASE_ADDR+0x04F 

// Audio config
#define TX_AUDIO_FORMAT           TX_BASE_ADDR+0x058 
#define TX_AUDIO_SPDIF            TX_BASE_ADDR+0x059 
#define TX_AUDIO_I2S              TX_BASE_ADDR+0x05A 
#define TX_AUDIO_FIFO             TX_BASE_ADDR+0x05B 
#define TX_AUDIO_LIPSYNC          TX_BASE_ADDR+0x05C 
#define TX_AUDIO_CONTROL          TX_BASE_ADDR+0x05D 
#define TX_AUDIO_HEADER           TX_BASE_ADDR+0x05E 
#define TX_AUDIO_SAMPLE           TX_BASE_ADDR+0x05F 
#define TX_AUDIO_VALID            TX_BASE_ADDR+0x060 
#define TX_AUDIO_USER             TX_BASE_ADDR+0x061 
#define TX_AUDIO_PACK             TX_BASE_ADDR+0x062 

// tmds config
#define TX_TMDS_MODE              TX_BASE_ADDR+0x068 
#define TX_TMDS_CONFIG0           TX_BASE_ADDR+0x06C 
#define TX_TMDS_CONFIG1           TX_BASE_ADDR+0x06D 

// packet config
#define TX_PACKET_ALLOC_ACTIVE_1  TX_BASE_ADDR+0x078 
#define TX_PACKET_ALLOC_ACTIVE_2  TX_BASE_ADDR+0x079 
#define TX_PACKET_ALLOC_EOF_1     TX_BASE_ADDR+0x07A 
#define TX_PACKET_ALLOC_EOF_2     TX_BASE_ADDR+0x07B 
#define TX_PACKET_ALLOC_SOF_1     TX_BASE_ADDR+0x07C 
#define TX_PACKET_ALLOC_SOF_2     TX_BASE_ADDR+0x07D 
#define TX_PACKET_CONTROL_1       TX_BASE_ADDR+0x07E 
#define TX_PACKET_CONTROL_2       TX_BASE_ADDR+0x07F 

// core config
#define TX_CORE_DATA_CAPTURE_1    TX_BASE_ADDR+0x0F0 
#define TX_CORE_DATA_CAPTURE_2    TX_BASE_ADDR+0x0F1 
#define TX_CORE_DATA_MONITOR_1    TX_BASE_ADDR+0x0F2 
#define TX_CORE_DATA_MONITOR_2    TX_BASE_ADDR+0x0F3 
#define TX_CORE_CALIB_MODE        TX_BASE_ADDR+0x0F4 
#define TX_CORE_CALIB_SAMPLE_DELAY  TX_BASE_ADDR+0x0F5 
#define TX_CORE_CALIB_VALUE_AUTO  TX_BASE_ADDR+0x0F6 
#define TX_CORE_CALIB_VALUE       TX_BASE_ADDR+0x0F7 

// HDCP shadow register
#define TX_HDCP_SHW_BKSV_0        TX_BASE_ADDR+0x100 
#define TX_HDCP_SHW_BKSV_1        TX_BASE_ADDR+0x101 
#define TX_HDCP_SHW_BKSV_2        TX_BASE_ADDR+0x102 
#define TX_HDCP_SHW_BKSV_3        TX_BASE_ADDR+0x103 
#define TX_HDCP_SHW_BKSV_4        TX_BASE_ADDR+0x104 
#define TX_HDCP_SHW_RI1_0         TX_BASE_ADDR+0x108 
#define TX_HDCP_SHW_RI1_1         TX_BASE_ADDR+0x109 
#define TX_HDCP_SHW_PJ1           TX_BASE_ADDR+0x10A 
#define TX_HDCP_SHW_AKSV_0        TX_BASE_ADDR+0x110 
#define TX_HDCP_SHW_AKSV_1        TX_BASE_ADDR+0x111 
#define TX_HDCP_SHW_AKSV_2        TX_BASE_ADDR+0x112 
#define TX_HDCP_SHW_AKSV_3        TX_BASE_ADDR+0x113 
#define TX_HDCP_SHW_AKSV_4        TX_BASE_ADDR+0x114 
#define TX_HDCP_SHW_AINFO         TX_BASE_ADDR+0x115 
#define TX_HDCP_SHW_AN_0          TX_BASE_ADDR+0x118 
#define TX_HDCP_SHW_AN_1          TX_BASE_ADDR+0x119 
#define TX_HDCP_SHW_AN_2          TX_BASE_ADDR+0x11A 
#define TX_HDCP_SHW_AN_3          TX_BASE_ADDR+0x11B 
#define TX_HDCP_SHW_AN_4          TX_BASE_ADDR+0x11C 
#define TX_HDCP_SHW_AN_5          TX_BASE_ADDR+0x11D 
#define TX_HDCP_SHW_AN_6          TX_BASE_ADDR+0x11E 
#define TX_HDCP_SHW_AN_7          TX_BASE_ADDR+0x11F 
#define TX_HDCP_SHW_V1_H0_0       TX_BASE_ADDR+0x120 
#define TX_HDCP_SHW_V1_H0_1       TX_BASE_ADDR+0x121 
#define TX_HDCP_SHW_V1_H0_2       TX_BASE_ADDR+0x122 
#define TX_HDCP_SHW_V1_H0_3       TX_BASE_ADDR+0x123 
#define TX_HDCP_SHW_V1_H1_0       TX_BASE_ADDR+0x124 
#define TX_HDCP_SHW_V1_H1_1       TX_BASE_ADDR+0x125 
#define TX_HDCP_SHW_V1_H1_2       TX_BASE_ADDR+0x126 
#define TX_HDCP_SHW_V1_H1_3       TX_BASE_ADDR+0x127 
#define TX_HDCP_SHW_V1_H2_0       TX_BASE_ADDR+0x128 
#define TX_HDCP_SHW_V1_H2_1       TX_BASE_ADDR+0x129 
#define TX_HDCP_SHW_V1_H2_2       TX_BASE_ADDR+0x12A 
#define TX_HDCP_SHW_V1_H2_3       TX_BASE_ADDR+0x12B 
#define TX_HDCP_SHW_V1_H3_0       TX_BASE_ADDR+0x12C 
#define TX_HDCP_SHW_V1_H3_1       TX_BASE_ADDR+0x12D 
#define TX_HDCP_SHW_V1_H3_2       TX_BASE_ADDR+0x12E 
#define TX_HDCP_SHW_V1_H3_3       TX_BASE_ADDR+0x12F 
#define TX_HDCP_SHW_V1_H4_0       TX_BASE_ADDR+0x130 
#define TX_HDCP_SHW_V1_H4_1       TX_BASE_ADDR+0x131 
#define TX_HDCP_SHW_V1_H4_2       TX_BASE_ADDR+0x132 
#define TX_HDCP_SHW_V1_H4_3       TX_BASE_ADDR+0x133 
#define TX_HDCP_SHW_BCAPS         TX_BASE_ADDR+0x140 
#define TX_HDCP_SHW_BSTATUS_0     TX_BASE_ADDR+0x141 
#define TX_HDCP_SHW_BSTATUS_1     TX_BASE_ADDR+0x142 
#define TX_HDCP_SHW_KSV_FIFO      TX_BASE_ADDR+0x143 

// system status 0
#define TX_SYSST0_CONNECT_FIFO    TX_BASE_ADDR+0x180 
#define TX_SYSST0_PLL_MONITOR     TX_BASE_ADDR+0x181 
#define TX_SYSST0_AFE_FIFO        TX_BASE_ADDR+0x182 
#define TX_SYSST0_ROM_STATUS      TX_BASE_ADDR+0x18F 

// system status 1
#define TX_SYSST1_CALIB_BIT_RESULT_0     TX_BASE_ADDR+0x1E0 
#define TX_SYSST1_CALIB_BIT_RESULT_1     TX_BASE_ADDR+0x1E1 
#define TX_SYSST1_CALIB_BIT_RESULT_2     TX_BASE_ADDR+0x1E2 
#define TX_SYSST1_CALIB_BIT_RESULT_3     TX_BASE_ADDR+0x1E3 
#define TX_SYSST1_CALIB_BIT_RESULT_4     TX_BASE_ADDR+0x1E4 
#define TX_SYSST1_CALIB_BIT_RESULT_5     TX_BASE_ADDR+0x1E5 
#define TX_SYSST1_CALIB_BIT_RESULT_6     TX_BASE_ADDR+0x1E6 
#define TX_SYSST1_CALIB_BIT_RESULT_7     TX_BASE_ADDR+0x1E7 
#define TX_SYSST1_CALIB_BUS_RESULT_0     TX_BASE_ADDR+0x1E8 
#define TX_SYSST1_CALIB_BUS_RESULT_1     TX_BASE_ADDR+0x1E9 
#define TX_SYSST1_CALIB_BUS_RESULT_2     TX_BASE_ADDR+0x1EA 
#define TX_SYSST1_CALIB_BUS_RESULT_3     TX_BASE_ADDR+0x1EB 
#define TX_SYSST1_CALIB_BUS_RESULT_4     TX_BASE_ADDR+0x1EC 
#define TX_SYSST1_CALIB_BUS_RESULT_5     TX_BASE_ADDR+0x1ED 
#define TX_SYSST1_CALIB_BUS_RESULT_6     TX_BASE_ADDR+0x1EE 
#define TX_SYSST1_CALIB_BUS_RESULT_7     TX_BASE_ADDR+0x1EF 

// hdcp status
#define TX_HDCP_ST_AUTHENTICATION        TX_BASE_ADDR+0x190 
#define TX_HDCP_ST_FRAME_COUNT           TX_BASE_ADDR+0x191 
#define TX_HDCP_ST_STATUS_0              TX_BASE_ADDR+0x192 
#define TX_HDCP_ST_STATUS_1              TX_BASE_ADDR+0x193 
#define TX_HDCP_ST_STATUS_2              TX_BASE_ADDR+0x194 
#define TX_HDCP_ST_STATUS_3              TX_BASE_ADDR+0x195 
#define TX_HDCP_ST_EDID_STATUS           TX_BASE_ADDR+0x196 
#define TX_HDCP_ST_MEM_STATUS            TX_BASE_ADDR+0x197 
#define TX_HDCP_ST_ST_MODE               TX_BASE_ADDR+0x19F 

// video status
#define TX_VIDEO_ST_ACTIVE_PIXELS_1      TX_BASE_ADDR+0x1A0 
#define TX_VIDEO_ST_ACTIVE_PIXELS_2      TX_BASE_ADDR+0x1A1 
#define TX_VIDEO_ST_FRONT_PIXELS         TX_BASE_ADDR+0x1A2 
#define TX_VIDEO_ST_HSYNC_PIXELS         TX_BASE_ADDR+0x1A3 
#define TX_VIDEO_ST_BACK_PIXELS          TX_BASE_ADDR+0x1A4 
#define TX_VIDEO_ST_ACTIVE_LINES_1       TX_BASE_ADDR+0x1A5 
#define TX_VIDEO_ST_ACTIVE_LINES_2       TX_BASE_ADDR+0x1A6 
#define TX_VIDEO_ST_EOF_LINES            TX_BASE_ADDR+0x1A7 
#define TX_VIDEO_ST_VSYNC_LINES          TX_BASE_ADDR+0x1A8 
#define TX_VIDEO_ST_SOF_LINES            TX_BASE_ADDR+0x1A9 
#define TX_VIDEO_ST_DTV_TIMING           TX_BASE_ADDR+0x1AA 
#define TX_VIDEO_ST_DTV_MODE             TX_BASE_ADDR+0x1AB 
// audio status
#define TX_VIDEO_ST_AUDIO_STATUS         TX_BASE_ADDR+0x1AC 
#define TX_AFE_STATUS_0                  TX_BASE_ADDR+0x1AE 
#define TX_AFE_STATUS_1                  TX_BASE_ADDR+0x1AF 

// Packet status
#define TX_PACKET_ST_REQUEST_STATUS_1    TX_BASE_ADDR+0x1F0 
#define TX_PACKET_ST_REQUEST_STATUS_2    TX_BASE_ADDR+0x1F1 
#define TX_PACKET_ST_REQUEST_MISSED_1    TX_BASE_ADDR+0x1F2 
#define TX_PACKET_ST_REQUEST_MISSED_2    TX_BASE_ADDR+0x1F3 
#define TX_PACKET_ST_ENCODE_STATUS_0     TX_BASE_ADDR+0x1F4 
#define TX_PACKET_ST_ENCODE_STATUS_1     TX_BASE_ADDR+0x1F5 
#define TX_PACKET_ST_ENCODE_STATUS_2     TX_BASE_ADDR+0x1F6 
#define TX_PACKET_ST_TIMER_STATUS        TX_BASE_ADDR+0x1F7 

// tmds status
#define TX_TMDS_ST_CLOCK_METER_1         TX_BASE_ADDR+0x1F8 
#define TX_TMDS_ST_CLOCK_METER_2         TX_BASE_ADDR+0x1F9 
#define TX_TMDS_ST_CLOCK_METER_3         TX_BASE_ADDR+0x1FA 
#define TX_TMDS_ST_TMDS_STATUS_1         TX_BASE_ADDR+0x1FC 
#define TX_TMDS_ST_TMDS_STATUS_2         TX_BASE_ADDR+0x1FD 
#define TX_TMDS_ST_TMDS_STATUS_3         TX_BASE_ADDR+0x1FE 
#define TX_TMDS_ST_TMDS_STATUS_4         TX_BASE_ADDR+0x1FF 


// Packet register
#define TX_PKT_REG_SPD_INFO_BASE_ADDR     TX_BASE_ADDR+0x200 
#define TX_PKT_REG_VEND_INFO_BASE_ADDR    TX_BASE_ADDR+0x220 
#define TX_PKT_REG_MPEG_INFO_BASE_ADDR    TX_BASE_ADDR+0x240 
#define TX_PKT_REG_AVI_INFO_BASE_ADDR     TX_BASE_ADDR+0x260 
#define TX_PKT_REG_AUDIO_INFO_BASE_ADDR   TX_BASE_ADDR+0x280 
#define TX_PKT_REG_ACP_INFO_BASE_ADDR     TX_BASE_ADDR+0x2A0 
#define TX_PKT_REG_ISRC1_BASE_ADDR        TX_BASE_ADDR+0x2C0 
#define TX_PKT_REG_ISRC2_BASE_ADDR        TX_BASE_ADDR+0x2E0 
#define TX_PKT_REG_EXCEPT0_BASE_ADDR      TX_BASE_ADDR+0x300 
#define TX_PKT_REG_EXCEPT1_BASE_ADDR      TX_BASE_ADDR+0x320 
#define TX_PKT_REG_EXCEPT2_BASE_ADDR      TX_BASE_ADDR+0x340 
#define TX_PKT_REG_EXCEPT3_BASE_ADDR      TX_BASE_ADDR+0x360 
#define TX_PKT_REG_EXCEPT4_BASE_ADDR      TX_BASE_ADDR+0x380 
#define TX_PKT_REG_GAMUT_P0_BASE_ADDR     TX_BASE_ADDR+0x3A0 
#define TX_PKT_REG_GAMUT_P1_1_BASE_ADDR   TX_BASE_ADDR+0x3C0 
#define TX_PKT_REG_GAMUT_P1_2_BASE_ADDR   TX_BASE_ADDR+0x3E0 





//************ RX related ************//
#define RX_HDCP_DKEY_OFFSET             RX_BASE_ADDR+0x400 
#define RX_EDID_OFFSET                  RX_BASE_ADDR+0x600 

#define RX_IEC60958_SUB1_OFFSET         RX_BASE_ADDR+0x0B0 
#define RX_IEC60958_SUB2_OFFSET         RX_BASE_ADDR+0x0C8 

#define RX_IEC60958_ST_SUB1_OFFSET      RX_BASE_ADDR+0x1B0 
#define RX_IEC60958_ST_SUB2_OFFSET      RX_BASE_ADDR+0x1C8 


// System config 0
#define RX_SYS0_CDR_0_1_BYPASS          RX_BASE_ADDR+0x006 
#define RX_SYS0_CDR_2_3_BYPASS          RX_BASE_ADDR+0x007 
#define RX_SYS0_EQ_MASK_CH0_0           RX_BASE_ADDR+0x008 
#define RX_SYS0_EQ_MASK_CH0_1           RX_BASE_ADDR+0x009 
#define RX_SYS0_EQ_MASK_CH1_0           RX_BASE_ADDR+0x00A 
#define RX_SYS0_EQ_MASK_CH1_1           RX_BASE_ADDR+0x00B 
#define RX_SYS0_EQ_MASK_CH2_0           RX_BASE_ADDR+0x00C 
#define RX_SYS0_EQ_MASK_CH2_1           RX_BASE_ADDR+0x00D 
#define RX_SYS0_EQ_MASK_CH3_0           RX_BASE_ADDR+0x00E 
#define RX_SYS0_EQ_MASK_CH3_1           RX_BASE_ADDR+0x00F 
// System config 1
#define RX_SYS1_CLOCK_CONTROL_M_EXP_0   RX_BASE_ADDR+0x010 
#define RX_SYS1_CLOCK_CONTROL_M_EXP_1   RX_BASE_ADDR+0x011 
#define RX_SYS1_CLOCK_CONTROL_M_EXP_2   RX_BASE_ADDR+0x012 
#define RX_SYS1_CLOCK_CONTROL_N_EXP_0   RX_BASE_ADDR+0x013 
#define RX_SYS1_CLOCK_CONTROL_N_EXP_1   RX_BASE_ADDR+0x014 
#define RX_SYS1_CLOCK_CONTROL_N_EXP_2   RX_BASE_ADDR+0x015 
#define RX_SYS1_CLOCK_CONTROL_K1_IN_0   RX_BASE_ADDR+0x016 
#define RX_SYS1_CLOCK_CONTROL_K1_IN_1   RX_BASE_ADDR+0x017 
#define RX_SYS1_CLOCK_CONTROL_K1_IN_2   RX_BASE_ADDR+0x018 
#define RX_SYS1_CLOCK_CONTROL_K1_IN_3   RX_BASE_ADDR+0x019 
#define RX_SYS1_CLOCK_CONTROL_K1_IN_4   RX_BASE_ADDR+0x01A 
#define RX_SYS1_CLOCK_CONTROL_K1_IN_5   RX_BASE_ADDR+0x01B 
#define RX_SYS1_CLOCK_CONTROL_K1_IN_6   RX_BASE_ADDR+0x01C 
#define RX_SYS1_CLOCK_CONTROL_TIMER_0   RX_BASE_ADDR+0x01D 
#define RX_SYS1_CLOCK_CONTROL_TIMER_1   RX_BASE_ADDR+0x01E 
#define RX_SYS1_CLOCK_CONTROL_FSM       RX_BASE_ADDR+0x01F 
// system config 2
#define RX_SYS2_CDR0_BYPASS_CNTRL       RX_BASE_ADDR+0x080 
#define RX_SYS2_CDR0_EN_CNTRL           RX_BASE_ADDR+0x081 
#define RX_SYS2_CDR1_BYPASS_CNTRL       RX_BASE_ADDR+0x082 
#define RX_SYS2_CDR1_EN_CNTRL           RX_BASE_ADDR+0x083 
#define RX_SYS2_CDR2_BYPASS_CNTRL       RX_BASE_ADDR+0x084 
#define RX_SYS2_CDR2_EN_CNTRL           RX_BASE_ADDR+0x085 
#define RX_SYS2_CDR3_BYPASS_CNTRL       RX_BASE_ADDR+0x086 
#define RX_SYS2_CDR3_EN_CNTRL           RX_BASE_ADDR+0x087 
#define RX_SYS2_PRBS0_CNTRL             RX_BASE_ADDR+0x088 
#define RX_SYS2_PRBS1_CNTRL             RX_BASE_ADDR+0x089 
#define RX_SYS2_PRBS2_CNTRL             RX_BASE_ADDR+0x08A 
#define RX_SYS2_PRBS3_CNTRL             RX_BASE_ADDR+0x08B 
#define RX_SYS2_PRBS_ERR_THR            RX_BASE_ADDR+0x08C 
#define RX_SYS2_PRBS_TIME_WINDOW0       RX_BASE_ADDR+0x08D 
#define RX_SYS2_PRBS_TIME_WINDOW1       RX_BASE_ADDR+0x08E 
// system config 3
#define RX_SYS3_RX_ACR_0                RX_BASE_ADDR+0x09C 
#define RX_SYS3_RX_ACR_1                RX_BASE_ADDR+0x09D
// system config 4
#define RX_SYS4_OSC_EXT_CLK_CNTL_0      RX_BASE_ADDR+0x0AD 
#define RX_SYS4_OSC_EXT_CLK_CNTL_1      RX_BASE_ADDR+0x0AE 

// HDCP CONFIG
#define RX_HDCP_I2C_MASTER_CONFIG_0     RX_BASE_ADDR+0x020 
#define RX_HDCP_I2C_MASTER_CONFIG_1     RX_BASE_ADDR+0x021 
#define RX_HDCP_I2C_MASTER_CONFIG_2     RX_BASE_ADDR+0x022 
#define RX_HDCP_ECC_CONFIG              RX_BASE_ADDR+0x024 
#define RX_HDCP_CRC_CONFIG              RX_BASE_ADDR+0x025 
#define RX_HDCP_EDID_CONFIG             RX_BASE_ADDR+0x026 
#define RX_HDCP_MEM_CONFIG              RX_BASE_ADDR+0x027 
#define RX_HDCP_HPD_FILTER_L            RX_BASE_ADDR+0x028 
#define RX_HDCP_HPD_FILTER_H            RX_BASE_ADDR+0x029 
#define RX_HDCP_BCAPS                   RX_BASE_ADDR+0x02A 
#define RX_HDCP_CONFIG0                 RX_BASE_ADDR+0x02B 
#define RX_HDCP_CONFIG1                 RX_BASE_ADDR+0x02C 
#define RX_HDCP_CONFIG2                 RX_BASE_ADDR+0x02D 
#define RX_HDCP_CONFIG3                 RX_BASE_ADDR+0x02E 
#define RX_HDCP_MODE                    RX_BASE_ADDR+0x02F 

// Video config, part 1
#define RX_VIDEO_ACTIVE_PIXELS_0        RX_BASE_ADDR+0x030 
#define RX_VIDEO_ACTIVE_PIXELS_1        RX_BASE_ADDR+0x031 
#define RX_VIDEO_FRONT_PIXELS           RX_BASE_ADDR+0x032 
#define RX_VIDEO_HSYNC_PIXELS           RX_BASE_ADDR+0x033 
#define RX_VIDEO_BACK_PIXELS            RX_BASE_ADDR+0x034 
#define RX_VIDEO_ACTIVE_LINES_0         RX_BASE_ADDR+0x035 
#define RX_VIDEO_ACTIVE_LINES_1         RX_BASE_ADDR+0x036 
#define RX_VIDEO_EOF_LINES              RX_BASE_ADDR+0x037 
#define RX_VIDEO_VSYNC_LINES            RX_BASE_ADDR+0x038 
#define RX_VIDEO_SOF_LINES              RX_BASE_ADDR+0x039 
#define RX_VIDEO_DTV_TIMING             RX_BASE_ADDR+0x03A 
#define RX_VIDEO_DTV_MODE               RX_BASE_ADDR+0x03B 
#define RX_VIDEO_DTV_FORMAT0            RX_BASE_ADDR+0x03C 
#define RX_VIDEO_DTV_FORMAT1            RX_BASE_ADDR+0x03D 
#define RX_VIDEO_PIXEL_PACK             RX_BASE_ADDR+0x03F 
// video config, part 2
#define RX_VIDEO_CSC_COEFF_B0           RX_BASE_ADDR+0x040 
#define RX_VIDEO_CSC_COEFF_B1           RX_BASE_ADDR+0x041 
#define RX_VIDEO_CSC_COEFF_R0           RX_BASE_ADDR+0x042 
#define RX_VIDEO_CSC_COEFF_R1           RX_BASE_ADDR+0x043 
#define RX_VIDEO_CSC_COEFF_CB0          RX_BASE_ADDR+0x044 
#define RX_VIDEO_CSC_COEFF_CB1          RX_BASE_ADDR+0x045 
#define RX_VIDEO_CSC_COEFF_CR0          RX_BASE_ADDR+0x046 
#define RX_VIDEO_CSC_COEFF_CR1          RX_BASE_ADDR+0x047 
#define RX_VIDEO_DTV_OPTION_L           RX_BASE_ADDR+0x048 
#define RX_VIDEO_DTV_OPTION_H           RX_BASE_ADDR+0x049 
#define RX_VIDEO_DTV_FILTER             RX_BASE_ADDR+0x04A 
#define RX_VIDEO_DTV_DITHER             RX_BASE_ADDR+0x04B 
#define RX_VIDEO_PROC_CONFIG0           RX_BASE_ADDR+0x04E 
#define RX_VIDEO_PROC_CONFIG1           RX_BASE_ADDR+0x04F 

// Reserved config
#define RX_AUDIO_EQ_INDEX_CH3           RX_BASE_ADDR+0x056 
#define RX_AUDIO_EQ_CNTRL_CH3           RX_BASE_ADDR+0x057 
// VIC and color depth control and interrupts
#define RX_VIC_COLOR_DEPTH              RX_BASE_ADDR+0x063 
// Audio config
#define RX_AUDIO_FORMAT                 RX_BASE_ADDR+0x058 
#define RX_AUDIO_SPDIF                  RX_BASE_ADDR+0x059 
#define RX_AUDIO_I2S                    RX_BASE_ADDR+0x05A 
#define RX_AUDIO_FIFO                   RX_BASE_ADDR+0x05B 
#define RX_AUDIO_SOFT_MUTE              RX_BASE_ADDR+0x05C 
#define RX_AUDIO_CONTROL                RX_BASE_ADDR+0x05D 
#define RX_AUDIO_RSV1                   RX_BASE_ADDR+0x05E 
#define RX_AUDIO_SAMPLE                 RX_BASE_ADDR+0x05F 
#define RX_AUDIO_RSV2                   RX_BASE_ADDR+0x060 
// tmds config
#define RX_TMDS_MODE                    RX_BASE_ADDR+0x07E 
#define RX_TMDS_PACKET_CONTROL          RX_BASE_ADDR+0x07F 

// core config
#define RX_CORE_DATA_CAPTURE_1          RX_BASE_ADDR+0x0F0 
#define RX_CORE_DATA_CAPTURE_2          RX_BASE_ADDR+0x0F1 
#define RX_CORE_DATA_MONITOR_1          RX_BASE_ADDR+0x0F2 
#define RX_CORE_DATA_MONITOR_2          RX_BASE_ADDR+0x0F3 
#define RX_CORE_CALIB_MODE              RX_BASE_ADDR+0x0F4 
#define RX_CORE_WAIT_START              RX_BASE_ADDR+0x0F5 
#define RX_CORE_WAIT_NEXT               RX_BASE_ADDR+0x0F6 
#define RX_CORE_CALIB_VALUE             RX_BASE_ADDR+0x0F7 
#define RX_CORE_INTERRUPT_CLEAR_0       RX_BASE_ADDR+0x0F8 
#define RX_CORE_INTERRUPT_CLEAR_1       RX_BASE_ADDR+0x0F9 
#define RX_CORE_INTERRUPT_CLEAR_2       RX_BASE_ADDR+0x0FA 
#define RX_CORE_EQ_INDEX_CH0            RX_BASE_ADDR+0x0FB 
#define RX_CORE_EQ_INDEX_CH1            RX_BASE_ADDR+0x0FC 
#define RX_CORE_EQ_INDEX_CH2            RX_BASE_ADDR+0x0FD 
#define RX_CORE_EQ_CNTRL_0              RX_BASE_ADDR+0x0FE 
#define RX_CORE_EQ_CNTRL_1              RX_BASE_ADDR+0x0FF 
// HDCP shadow register
#define RX_HDCP_SHW_BKSV_0              RX_BASE_ADDR+0x100 
#define RX_HDCP_SHW_BKSV_1              RX_BASE_ADDR+0x101 
#define RX_HDCP_SHW_BKSV_2              RX_BASE_ADDR+0x102 
#define RX_HDCP_SHW_BKSV_3              RX_BASE_ADDR+0x103 
#define RX_HDCP_SHW_BKSV_4              RX_BASE_ADDR+0x104 
#define RX_HDCP_SHW_RI1_0               RX_BASE_ADDR+0x108 
#define RX_HDCP_SHW_RI1_1               RX_BASE_ADDR+0x109 
#define RX_HDCP_SHW_PJ1                 RX_BASE_ADDR+0x10A 
#define RX_HDCP_SHW_AKSV_0              RX_BASE_ADDR+0x110 
#define RX_HDCP_SHW_AKSV_1              RX_BASE_ADDR+0x111 
#define RX_HDCP_SHW_AKSV_2              RX_BASE_ADDR+0x112 
#define RX_HDCP_SHW_AKSV_3              RX_BASE_ADDR+0x113 
#define RX_HDCP_SHW_AKSV_4              RX_BASE_ADDR+0x114 
#define RX_HDCP_SHW_AINFO               RX_BASE_ADDR+0x115 
#define RX_HDCP_SHW_AN_0                RX_BASE_ADDR+0x118 
#define RX_HDCP_SHW_AN_1                RX_BASE_ADDR+0x119 
#define RX_HDCP_SHW_AN_2                RX_BASE_ADDR+0x11A 
#define RX_HDCP_SHW_AN_3                RX_BASE_ADDR+0x11B 
#define RX_HDCP_SHW_AN_4                RX_BASE_ADDR+0x11C 
#define RX_HDCP_SHW_AN_5                RX_BASE_ADDR+0x11D 
#define RX_HDCP_SHW_AN_6                RX_BASE_ADDR+0x11E 
#define RX_HDCP_SHW_AN_7                RX_BASE_ADDR+0x11F 
#define RX_HDCP_SHW_V1_H0_0             RX_BASE_ADDR+0x120 
#define RX_HDCP_SHW_V1_H0_1             RX_BASE_ADDR+0x121 
#define RX_HDCP_SHW_V1_H0_2             RX_BASE_ADDR+0x122 
#define RX_HDCP_SHW_V1_H0_3             RX_BASE_ADDR+0x123 
#define RX_HDCP_SHW_V1_H1_0             RX_BASE_ADDR+0x124 
#define RX_HDCP_SHW_V1_H1_1             RX_BASE_ADDR+0x125 
#define RX_HDCP_SHW_V1_H1_2             RX_BASE_ADDR+0x126 
#define RX_HDCP_SHW_V1_H1_3             RX_BASE_ADDR+0x127 
#define RX_HDCP_SHW_V1_H2_0             RX_BASE_ADDR+0x128 
#define RX_HDCP_SHW_V1_H2_1             RX_BASE_ADDR+0x129 
#define RX_HDCP_SHW_V1_H2_2             RX_BASE_ADDR+0x12A 
#define RX_HDCP_SHW_V1_H2_3             RX_BASE_ADDR+0x12B 
#define RX_HDCP_SHW_V1_H3_0             RX_BASE_ADDR+0x12C 
#define RX_HDCP_SHW_V1_H3_1             RX_BASE_ADDR+0x12D 
#define RX_HDCP_SHW_V1_H3_2             RX_BASE_ADDR+0x12E 
#define RX_HDCP_SHW_V1_H3_3             RX_BASE_ADDR+0x12F 
#define RX_HDCP_SHW_V1_H4_0             RX_BASE_ADDR+0x130 
#define RX_HDCP_SHW_V1_H4_1             RX_BASE_ADDR+0x131 
#define RX_HDCP_SHW_V1_H4_2             RX_BASE_ADDR+0x132 
#define RX_HDCP_SHW_V1_H4_3             RX_BASE_ADDR+0x133 
#define RX_HDCP_SHW_BCAPS               RX_BASE_ADDR+0x140 
#define RX_HDCP_SHW_BSTATUS_0           RX_BASE_ADDR+0x141 
#define RX_HDCP_SHW_BSTATUS_1           RX_BASE_ADDR+0x142 
#define RX_HDCP_SHW_KSV_FIFO            RX_BASE_ADDR+0x143 
#define RX_HDCP_SHW_KM_0                RX_BASE_ADDR+0x148 
#define RX_HDCP_SHW_KM_1                RX_BASE_ADDR+0x149 
#define RX_HDCP_SHW_KM_2                RX_BASE_ADDR+0x14A 
#define RX_HDCP_SHW_KM_3                RX_BASE_ADDR+0x14B 
#define RX_HDCP_SHW_KM_4                RX_BASE_ADDR+0x14C 
#define RX_HDCP_SHW_KM_5                RX_BASE_ADDR+0x14D 
#define RX_HDCP_SHW_KM_6                RX_BASE_ADDR+0x14E 
// system status extension
#define RX_SYSST_EXT_CDR0_MONITOR_0     RX_BASE_ADDR+0x160 
#define RX_SYSST_EXT_CDR0_MONITOR_1     RX_BASE_ADDR+0x161 
#define RX_SYSST_EXT_CDR1_MONITOR_0     RX_BASE_ADDR+0x162 
#define RX_SYSST_EXT_CDR1_MONITOR_1     RX_BASE_ADDR+0x163 
#define RX_SYSST_EXT_CDR2_MONITOR_0     RX_BASE_ADDR+0x164 
#define RX_SYSST_EXT_CDR2_MONITOR_1     RX_BASE_ADDR+0x165 
#define RX_SYSST_EXT_CDR3_MONITOR_0     RX_BASE_ADDR+0x166 
#define RX_SYSST_EXT_CDR3_MONITOR_1     RX_BASE_ADDR+0x167 
#define RX_SYSST_EXT_PRBS_BER_METER_0   RX_BASE_ADDR+0x168 
#define RX_SYSST_EXT_PRBS_BER_METER_1   RX_BASE_ADDR+0x169 
#define RX_SYSST_EXT_PRBS_BER_METER_2   RX_BASE_ADDR+0x16A 
#define RX_SYSST_EXT_PRBS_STATUS        RX_BASE_ADDR+0x16B 
#define RX_SYSST_EXT_RCALIB_STATUS_0    RX_BASE_ADDR+0x16D 
#define RX_SYSST_EXT_RCALIB_STATUS_1    RX_BASE_ADDR+0x16E 
#define RX_SYSST_EXT_RX_FIFO_STATUS     RX_BASE_ADDR+0x16F 
// Error Correction status
#define RX_ERRST_ECC_STATUS_0           RX_BASE_ADDR+0x170 
#define RX_ERRST_ECC_STATUS_1           RX_BASE_ADDR+0x171 
#define RX_ERRST_ECC_STATUS_2           RX_BASE_ADDR+0x172 
#define RX_ERRST_ECC_STATUS_3           RX_BASE_ADDR+0x173 
#define RX_ERRST_ECC_STATUS_4           RX_BASE_ADDR+0x174 
#define RX_ERRST_PACKET_CONTENTS        RX_BASE_ADDR+0x175 
#define RX_ERRST_ERROR_LOCATION_0       RX_BASE_ADDR+0x176 
#define RX_ERRST_ERROR_LOCATION_1       RX_BASE_ADDR+0x177 
#define RX_ERRST_ERROR_LOCATION_2       RX_BASE_ADDR+0x178 
#define RX_ERRST_ERROR_LOCATION_3       RX_BASE_ADDR+0x179 
#define RX_ERRST_ERROR_LOCATION_4       RX_BASE_ADDR+0x17A 
#define RX_ERRST_ERROR_LOCATION_5       RX_BASE_ADDR+0x17B 
#define RX_ERRST_ERROR_LOCATION_6       RX_BASE_ADDR+0x17C 
#define RX_ERRST_ERROR_LOCATION_7       RX_BASE_ADDR+0x17D 
#define RX_ERRST_ERROR_LOCATION_8       RX_BASE_ADDR+0x17E 
#define RX_ERRST_ERROR_LOCATION_9       RX_BASE_ADDR+0x17F 

// system status 0
#define RX_SYSST0_AFE_REV_ID            RX_BASE_ADDR+0x180 
#define RX_SYSST0_PWR_STATUS            RX_BASE_ADDR+0x189 
#define RX_SYSST0_CTS_STATUS_L          RX_BASE_ADDR+0x18A 
#define RX_SYSST0_CTS_STATUS_H          RX_BASE_ADDR+0x18B 
#define RX_SYSST0_NCTS_STATUS           RX_BASE_ADDR+0x18C 
#define RX_SYSST0_N_STATUS_L            RX_BASE_ADDR+0x18D 
#define RX_SYSST0_N_STATUS_H            RX_BASE_ADDR+0x18E 
#define RX_SYSST0_ROM_STATUS            RX_BASE_ADDR+0x18F 
// system status 1
#define RX_SYSST1_CLOCK_CONTROL_M_ACT_0         RX_BASE_ADDR+0x1E0 
#define RX_SYSST1_CLOCK_CONTROL_M_ACT_1         RX_BASE_ADDR+0x1E1 
#define RX_SYSST1_CLOCK_CONTROL_M_ACT_2         RX_BASE_ADDR+0x1E2 
#define RX_SYSST1_CLOCK_CONTROL_N_ACT_0         RX_BASE_ADDR+0x1E3 
#define RX_SYSST1_CLOCK_CONTROL_N_ACT_1         RX_BASE_ADDR+0x1E4 
#define RX_SYSST1_CLOCK_CONTROL_N_ACT_2         RX_BASE_ADDR+0x1E5 
#define RX_SYSST1_CLOCK_CONTROL_K1_OUT_0        RX_BASE_ADDR+0x1E6 
#define RX_SYSST1_CLOCK_CONTROL_K1_OUT_1        RX_BASE_ADDR+0x1E7 
#define RX_SYSST1_CLOCK_CONTROL_K1_OUT_2        RX_BASE_ADDR+0x1E8 
#define RX_SYSST1_CLOCK_CONTROL_K1_OUT_3        RX_BASE_ADDR+0x1E9 
#define RX_SYSST1_CLOCK_CONTROL_K1_OUT_4        RX_BASE_ADDR+0x1EA 
#define RX_SYSST1_CLOCK_CONTROL_K1_OUT_5        RX_BASE_ADDR+0x1EB 
#define RX_SYSST1_CLOCK_CONTROL_DIV_PRE_0       RX_BASE_ADDR+0x1EC 
#define RX_SYSST1_CLOCK_CONTROL_DIV_PRE_1       RX_BASE_ADDR+0x1ED 
#define RX_SYSST1_CLOCK_CONTROL_DIV_MAIN_0      RX_BASE_ADDR+0x1EE 
#define RX_SYSST1_CLOCK_CONTROL_DIV_MAIN_1      RX_BASE_ADDR+0x1EF 

// hdcp status
#define RX_HDCP_ST_AUTHENTICATION               RX_BASE_ADDR+0x190 
#define RX_HDCP_ST_FRAME_COUNT                  RX_BASE_ADDR+0x191 
#define RX_HDCP_ST_STATUS_0                     RX_BASE_ADDR+0x192 
#define RX_HDCP_ST_STATUS_1                     RX_BASE_ADDR+0x193 
#define RX_HDCP_ST_STATUS_2                     RX_BASE_ADDR+0x194 
#define RX_HDCP_ST_STATUS_3                     RX_BASE_ADDR+0x195 
#define RX_HDCP_ST_EDID_STATUS                  RX_BASE_ADDR+0x196 
#define RX_HDCP_ST_MEM_STATUS                   RX_BASE_ADDR+0x197 
#define RX_HDCP_ST_EDID_EXTENSIONS              RX_BASE_ADDR+0x198 
#define RX_HDCP_ST_EDDC_MASTER_SEGMENT          RX_BASE_ADDR+0x199 
#define RX_HDCP_ST_EDDC_MASTER_STATE            RX_BASE_ADDR+0x19A 
#define RX_HDCP_ST_EDDC_SLAVE_SEGMENT           RX_BASE_ADDR+0x19B 
#define RX_HDCP_ST_EDDC_SLAVE_STATE             RX_BASE_ADDR+0x19C 
#define RX_HDCP_ST_CRC_STATUS                   RX_BASE_ADDR+0x19D 
#define RX_HDCP_ST_REPEATER                     RX_BASE_ADDR+0x19E 
#define RX_HDCP_ST_ST_MODE                      RX_BASE_ADDR+0x19F 

// video status
#define RX_VIDEO_ST_ACTIVE_PIXELS_1     RX_BASE_ADDR+0x1A0 
#define RX_VIDEO_ST_ACTIVE_PIXELS_2     RX_BASE_ADDR+0x1A1 
#define RX_VIDEO_ST_FRONT_PIXELS        RX_BASE_ADDR+0x1A2 
#define RX_VIDEO_ST_HSYNC_PIXELS        RX_BASE_ADDR+0x1A3 
#define RX_VIDEO_ST_BACK_PIXELS         RX_BASE_ADDR+0x1A4 
#define RX_VIDEO_ST_ACTIVE_LINES_1      RX_BASE_ADDR+0x1A5 
#define RX_VIDEO_ST_ACTIVE_LINES_2      RX_BASE_ADDR+0x1A6 
#define RX_VIDEO_ST_EOF_LINES           RX_BASE_ADDR+0x1A7 
#define RX_VIDEO_ST_VSYNC_LINES         RX_BASE_ADDR+0x1A8 
#define RX_VIDEO_ST_SOF_LINES           RX_BASE_ADDR+0x1A9 
#define RX_VIDEO_ST_DTV_TIMING          RX_BASE_ADDR+0x1AA 
#define RX_VIDEO_ST_DTV_MODE            RX_BASE_ADDR+0x1AB 
// audio status 
#define RX_AUDIOST_AUDIO_STATUS         RX_BASE_ADDR+0x1AC 
#define RX_AUDIOST_AUDIO_HEADER         RX_BASE_ADDR+0x1AD 
#define RX_AUDIOST_AUDIO_FIFO_LEVEL     RX_BASE_ADDR+0x1AE 
#define RX_AUDIOST_CALIB_STATUS         RX_BASE_ADDR+0x1AF 
// core status
#define RX_COREST_INTERRUPT_STATUS_0    RX_BASE_ADDR+0x1F0 
#define RX_COREST_INTERRUPT_STATUS_1    RX_BASE_ADDR+0x1F1 
#define RX_COREST_INTERRUPT_STATUS_2    RX_BASE_ADDR+0x1F2 
#define RX_COREST_EQ_MEAS_STATUS        RX_BASE_ADDR+0x1F3 
#define RX_COREST_TMDS_MEAS_STATUS_0    RX_BASE_ADDR+0x1F4 
#define RX_COREST_TMDS_MEAS_STATUS_1    RX_BASE_ADDR+0x1F5 
#define RX_COREST_TMDS_MEAS_STATUS_2    RX_BASE_ADDR+0x1F6 
#define RX_COREST_TMDS_MEAS_STATUS_3    RX_BASE_ADDR+0x1F7 
// tmds status
#define RX_TMDSST_ALIGN_STATUS_0        RX_BASE_ADDR+0x1F8 
#define RX_TMDSST_ALIGN_STATUS_1        RX_BASE_ADDR+0x1F9 
#define RX_TMDSST_ALIGN_STATUS_2        RX_BASE_ADDR+0x1FA 
#define RX_TMDSST_ALIGN_STATUS_3        RX_BASE_ADDR+0x1FB 
#define RX_TMDSST_HDMI_STATUS           RX_BASE_ADDR+0x1FC 
#define RX_TMDSST_EQ_STATUS_CH0         RX_BASE_ADDR+0x1FD 
#define RX_TMDSST_EQ_STATUS_CH1         RX_BASE_ADDR+0x1FE 
#define RX_TMDSST_EQ_STATUS_CH2         RX_BASE_ADDR+0x1FF 

// Packet register
#define RX_PKT_REG_SPD_INFO_BASE_ADDR           RX_BASE_ADDR+0x200 
#define RX_PKT_REG_VEND_INFO_BASE_ADDR          RX_BASE_ADDR+0x220 
#define RX_PKT_REG_MPEG_INFO_BASE_ADDR          RX_BASE_ADDR+0x240 
#define RX_PKT_REG_AVI_INFO_BASE_ADDR           RX_BASE_ADDR+0x260 
#define RX_PKT_REG_AUDIO_INFO_BASE_ADDR         RX_BASE_ADDR+0x280 
#define RX_PKT_REG_ACP_INFO_BASE_ADDR           RX_BASE_ADDR+0x2A0 
#define RX_PKT_REG_ISRC1_BASE_ADDR              RX_BASE_ADDR+0x2C0 
#define RX_PKT_REG_ISRC2_BASE_ADDR              RX_BASE_ADDR+0x2E0 
#define RX_PKT_REG_EXCEPT0_BASE_ADDR            RX_BASE_ADDR+0x300 
#define RX_PKT_REG_EXCEPT1_BASE_ADDR            RX_BASE_ADDR+0x320 
#define RX_PKT_REG_EXCEPT2_BASE_ADDR            RX_BASE_ADDR+0x340 
#define RX_PKT_REG_EXCEPT3_BASE_ADDR            RX_BASE_ADDR+0x360 
#define RX_PKT_REG_GAMUT_P0_BASE_ADDR           RX_BASE_ADDR+0x380 
#define RX_PKT_REG_GAMUT_P1_2_BASE_ADDR         RX_BASE_ADDR+0x3A0 
#define RX_PKT_REG_GAMUT_P1_3_BASE_ADDR         RX_BASE_ADDR+0x3C0 
#define RX_PKT_REG_GAMUT_P1_4_BASE_ADDR         RX_BASE_ADDR+0x3E0 


//********** CEC related **********//
//read/write
#define CEC_TX_MSG_0_HEADER        0x00 
#define CEC_TX_MSG_1_OPCODE        0x01 
#define CEC_TX_MSG_2_OP1           0x02 
#define CEC_TX_MSG_3_OP2           0x03 
#define CEC_TX_MSG_4_OP3           0x04 
#define CEC_TX_MSG_5_OP4           0x05 
#define CEC_TX_MSG_6_OP5           0x06 
#define CEC_TX_MSG_7_OP6           0x07 
#define CEC_TX_MSG_8_OP7           0x08 
#define CEC_TX_MSG_9_OP8           0x09 
#define CEC_TX_MSG_A_OP9           0x0A 
#define CEC_TX_MSG_B_OP10          0x0B 
#define CEC_TX_MSG_C_OP11          0x0C 
#define CEC_TX_MSG_D_OP12          0x0D 
#define CEC_TX_MSG_E_OP13          0x0E 
#define CEC_TX_MSG_F_OP14          0x0F 

//read only
#define CEC_TX_MSG_LENGTH          0x10 
#define CEC_TX_MSG_CMD             0x11 
#define CEC_TX_WRITE_BUF           0x12 
#define CEC_TX_CLEAR_BUF           0x13 
#define CEC_RX_MSG_CMD             0x14 
#define CEC_RX_CLEAR_BUF           0x15 
#define CEC_LOGICAL_ADDR0          0x16 
#define CEC_LOGICAL_ADDR1          0x17 
#define CEC_LOGICAL_ADDR2          0x18 
#define CEC_LOGICAL_ADDR3          0x19 
#define CEC_LOGICAL_ADDR4          0x1A 
#define CEC_CLOCK_DIV_H            0x1B 
#define CEC_CLOCK_DIV_L            0x1C 

//read/write
#define CEC_RX_MSG_0_HEADER        0x80 
#define CEC_RX_MSG_1_OPCODE        0x81 
#define CEC_RX_MSG_2_OP1           0x82 
#define CEC_RX_MSG_3_OP2           0x83 
#define CEC_RX_MSG_4_OP3           0x84 
#define CEC_RX_MSG_5_OP4           0x85 
#define CEC_RX_MSG_6_OP5           0x86 
#define CEC_RX_MSG_7_OP6           0x87 
#define CEC_RX_MSG_8_OP7           0x88 
#define CEC_RX_MSG_9_OP8           0x89 
#define CEC_RX_MSG_A_OP9           0x8A 
#define CEC_RX_MSG_B_OP10          0x8B 
#define CEC_RX_MSG_C_OP11          0x8C 
#define CEC_RX_MSG_D_OP12          0x8D 
#define CEC_RX_MSG_E_OP13          0x8E 
#define CEC_RX_MSG_F_OP14          0x8F 

//read only
#define CEC_RX_MSG_LENGTH          0x90 
#define CEC_RX_MSG_STATUS          0x91 
#define CEC_RX_NUM_MSG             0x92 
#define CEC_TX_MSG_STATUS          0x93 
#define CEC_TX_NUM_MSG             0x94 

// tx_msg_cmd definition
#define TX_NO_OP                0  // No transaction
#define TX_REQ_CURRENT          1  // Transmit earliest message in buffer
#define TX_ABORT                2  // Abort transmitting earliest message
#define TX_REQ_NEXT             3  // Overwrite earliest message in buffer and transmit next message

// tx_msg_status definition
#define TX_IDLE                 0  // No transaction
#define TX_BUSY                 1  // Transmitter is busy
#define TX_DONE                 2  // Message has been successfully transmitted
#define TX_ERROR                3  // Message has been transmitted with error

// rx_msg_cmd
#define RX_NO_OP                0  // No transaction
#define RX_ACK_CURRENT          1  // Read earliest message in buffer
#define RX_DISABLE              2  // Disable receiving latest message
#define RX_ACK_NEXT             3  // Clear earliest message from buffer and read next message

// rx_msg_status
#define RX_IDLE                 0  // No transaction
#define RX_BUSY                 1  // Receiver is busy
#define RX_DONE                 2  // Message has been received successfully
#define RX_ERROR                3  // Message has been received with error



//************ SIM related *************//
#define SIM_MYREG_BASE_ADDR             SIM_BASE_ADDR+0x0000 
#define SIM_CLKS_BASE_ADDR              SIM_BASE_ADDR+0x0800 
#define SIM_SDI2HDMI_BASE_ADDR          SIM_BASE_ADDR+0x1000 
#define SIM_VIDEOGEN_BASE_ADDR          SIM_BASE_ADDR+0x1800 
#define SIM_VIDEO_ANALYZE_BASE_ADDR     SIM_BASE_ADDR+0x2000 
#define SIM_AUDIOGEN_BASE_ADDR          SIM_BASE_ADDR+0x2800 

#define SIM_MYREG_RESET                 SIM_MYREG_BASE_ADDR+0x0020

#define SIM_MYREG_TX_I2S_SPDIF          SIM_MYREG_BASE_ADDR+0x00F0
#define SIM_MYREG_RX_I2S_SPDIF          SIM_MYREG_BASE_ADDR+0x00F1

#define SIM_MYREG_CPU_PRINT_CHAR        SIM_MYREG_BASE_ADDR+0x00FB
#define SIM_MYREG_CMD_CNT               SIM_MYREG_BASE_ADDR+0x00FC
#define SIM_MYREG_CPU_PRINT             SIM_MYREG_BASE_ADDR+0x00FD
#define SIM_MYREG_END_SIM               SIM_MYREG_BASE_ADDR+0x00FE 
#define SIM_MYREG_CONFIGEND             SIM_MYREG_BASE_ADDR+0x00FF 


#define HDMI_ADDR_PORT 0x2000
#define HDMI_DATA_PORT 0x2004
#define HDMI_CTRL_PORT 0x2008

#endif
