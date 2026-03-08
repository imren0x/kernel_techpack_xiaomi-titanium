/*
 *
 * FocalTech TouchScreen driver.
 *
 * Copyright (c) 2010-2017, FocalTech Systems, Ltd., all rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
/************************************************************************
*
* File Name: focaltech_config.h
*
*    Author: Focaltech Driver Team
*
*   Created: 2016-08-08
*
*  Abstract: global configurations
*
*   Version: v1.0
*
************************************************************************/
#ifndef _LINUX_FOCLATECH_CONFIG_H_
#define _LINUX_FOCLATECH_CONFIG_H_

/**************************************************/
/****** G: A, I: B, S: C, U: D  ******************/
/****** chip type defines, do not modify *********/
#define _FT8716             0x87160805
#define _FT8736             0x87360806
#define _FT8006M            0x80060807
#define _FT8607             0x86070809
#define _FT8006U            0x8006D80B
#define _FT8006S            0x8006A80B
#define _FT8613             0x8613080C
#define _FT8719             0x8719080D
#define _FT8739             0x8739080E
#define _FT8615             0x8615080F
#define _FT8201             0x82010810
#define _FT8006P            0x86220811
#define _FT7251             0x72510812
#define _FT7252             0x72520813
#define _FT8613S            0x8613C814
#define _FT8756             0x87560815
#define _FT8302             0x83020816
#define _FT8009             0x80090817
#define _FT8656             0x86560818
#define _FT8006S_AA         0x86320819
#define _FT7250             0x7250081A
#define _FT7120             0x7120081B
#define _FT8720             0x8720081C
#define _FT8726             0x8726081C
#define _FT8016             0x8016081D

#define _FT5336             0x53360402
#define _FT5416             0x54160402
#define _FT5422U            0x5446C482
#define _FT5426             0x54260402
#define _FT5435             0x54350402
#define _FT5436             0x54360402
#define _FT5526             0x55260402
#define _FT5526I            0x5526B402
#define _FT5X46             0x54220402
#define _FT5446             0x54460402
#define _FT5346             0x53460402
#define _FT5446I            0x5446B402
#define _FT5346I            0x5346B402
#define _FT7661             0x76610402
#define _FT7511             0x75110402
#define _FT7421             0x74210402
#define _FT7681             0x76810402
#define _FT3C47U            0x3C47D402
#define _FT3417             0x34170402
#define _FT3517             0x35170402
#define _FT3327             0x33270402
#define _FT3427             0x34270402
#define _FT7311             0x73110402
#define _FT5526_V00         0x5526C402

#define _FT5626             0x56260401
#define _FT5726             0x57260401
#define _FT5826B            0x5826B401
#define _FT5826S            0x5826C401
#define _FT7811             0x78110401
#define _FT3D47             0x3D470401
#define _FT3617             0x36170401
#define _FT3717             0x37170401
#define _FT3817B            0x3817B401
#define _FT3517U            0x3517D401

#define _FT6236U            0x6236D003
#define _FT6336G            0x6336A003
#define _FT6336U            0x6336D003
#define _FT6436U            0x6436D003
#define _FT6436T            0x6436E003

#define _FT3267             0x32670004
#define _FT3367             0x33670004

#define _FT3327DQQ_XXX      0x3327D482
#define _FT5446DQS_XXX      0x5446D482

#define _FT3427_003         0x3427D482
#define _FT3427G_003        0x3427A482
#define _FT5446_003         0x5446D482
#define _FT5446_Q03         0x5446C482
#define _FT5446_P03         0x5446A481
#define _FT5426_003         0x5426D482
#define _FT5526_003         0x5526D482

#define _FT3518             0x35180481
#define _FT3518U            0x3518D481
#define _FT3558             0x35580481
#define _FT3528             0x35280481
#define _FT5536             0x55360481
#define _FT5536L            0x5536E481
#define _FT3418             0x34180481

#define _FT5446U            0x5446D083
#define _FT5456U            0x5456D083
#define _FT3417U            0x3417D083
#define _FT5426U            0x5426D083
#define _FT3428             0x34280083
#define _FT3437U            0x3437D083

#define _FT7302             0x73020084
#define _FT7202             0x72020084
#define _FT3308             0x33080084
#define _FT6446             0x64460084

#define _FT6346U            0x6346D085
#define _FT6346G            0x6346A085
#define _FT3067             0x30670085
#define _FT3068             0x30680085
#define _FT3168             0x31680085
#define _FT3268             0x32680085
#define _FT6146             0x61460085

#define _FT5726_003         0x5726D486
#define _FT5726_V03         0x5726C486

#define _FT3618             0x36180487
#define _FT5646             0x56460487
#define _FT3A58             0x3A580487
#define _FT3B58             0x3B580487
#define _FT3D58             0x3D580487
#define _FT5936             0x59360487
#define _FT5A36             0x5A360487
#define _FT5B36             0x5B360487
#define _FT5D36             0x5D360487
#define _FT5946             0x59460487
#define _FT5A46             0x5A460487
#define _FT5B46             0x5B460487
#define _FT5D46             0x5D460487

#define _FT3658U            0x3658D488
#define _FT8606     0x86060808
#define _FTE716     0xE716080a

#define _FT3519             0x35190489
#define _FT8057             0x80570828

/*************************************************/

/*
 * choose your ic chip type of focaltech
 */
#define FTS_CHIP_TYPE   _FT5446

/******************* Enables *********************/
/*********** 1 to enable, 0 to disable ***********/

/*
 * show debug log info
 * enable it for debug, disable it for release
 */
#define FTS_DEBUG_EN                            0

/*
 * Linux MultiTouch Protocol
 * 1: Protocol B(default), 0: Protocol A
 */
#define FTS_MT_PROTOCOL_B_EN                    1

/*
 * Report Pressure in multitouch
 * 1:enable(default),0:disable
*/
#define FTS_REPORT_PRESSURE_EN                  0

/*
 * Gesture function enable
 * default: disable
 */
#define FTS_GESTURE_EN                          1

/*
 * ESD check & protection
 * default: disable
 */
#define FTS_ESDCHECK_EN                         0

/*
 * Production test enable
 * 1: enable, 0:disable(default)
 */
#define FTS_TEST_EN                             0

/*
 * Glove mode enable
 * 1: enable, 0:disable(default)
 */
#define FTS_GLOVE_EN                            0
/*
 * cover enable
 * 1: enable, 0:disable(default)
 */
#define FTS_COVER_EN                            0
/*
 * Charger enable
 * 1: enable, 0:disable(default)
 */
#define FTS_CHARGER_EN                          1

/*
 * Nodes for tools, please keep enable
 */
#define FTS_SYSFS_NODE_EN                       1
#define FTS_APK_NODE_EN                         1

/*
 * Pinctrl enable
 * default: disable
 */
#define FTS_PINCTRL_EN                          1

/*
 * Customer power enable
 * enable it when customer need control TP power
 * default: disable
 */
#define FTS_POWER_SOURCE_CUST_EN                1

/****************************************************/

/********************** Upgrade ****************************/
/*
 * auto upgrade, please keep enable
 */
#define FTS_AUTO_UPGRADE_EN                     1

/*
 * auto upgrade for lcd cfg
 */
#define FTS_AUTO_LIC_UPGRADE_EN                 0

/*
 * Check vendor_id number
 * 0:No check vendor_id (default)
 * 1/2/3: Check vendor_id for vendor compatibility
 */
#define FTS_GET_VENDOR_ID_NUM                   1

/*Add by HQ-zmc [Date: 2018-02-12 14:51:50]
 *We use LCD VENDOR NUM
*/
#define D1S_LCD_VENDOR_NUM                      3

/*
 * vendor_id(s) for vendor(s) to be compatible with.
 * a confirmation of vendor_id(s) is recommended.
 * FTS_VENDOR_ID = PANEL_ID << 8 + VENDOR_ID
 * FTS_GET_VENDOR_ID_NUM == 0/1, no check vendor id, you may ignore them
 * FTS_GET_VENDOR_ID_NUM > 1, compatible with FTS_VENDOR_ID
 * FTS_GET_VENDOR_ID_NUM >= 2, compatible with FTS_VENDOR_ID2
 * FTS_GET_VENDOR_ID_NUM >= 3, compatible with FTS_VENDOR_ID3
 */
#define FTS_VENDOR_ID                          0x51 			/*ofilm+FT5446*/
#define FTS_VENDOR_ID2                         0x0000
#define FTS_VENDOR_ID3                         0x0000

/*Add by HQ-zmc [Date: 2018-02-12 14:37:48]
  LCD vendor lockdown info
*/
#define D1S_VENDOR_LD						   0x36              /*ofilm+TM*/

#define D1S_VENDOR_LD2						   0x37 			 /*ofilm+EBBG*/

#define D1S_VENDOR_LD3                         0x42              /*ofilm+CSOT*/


/*
 * FW.i file for auto upgrade, you must replace it with your own
 * define your own fw_file, the sample one to be replaced is invalid
 * NOTE: if FTS_GET_VENDOR_ID_NUM > 1, it's the fw corresponding with FTS_VENDOR_ID
 */
#define FTS_UPGRADE_FW_FILE                      "include/firmware/D1S_1_FT5446_Ofilm_TM_V07_D01_20180613_app.i"

/*
 * if FTS_GET_VENDOR_ID_NUM >= 2, fw corrsponding with FTS_VENDOR_ID2
 * define your own fw_file, the sample one is invalid
 */
#define FTS_UPGRADE_FW2_FILE                     "include/firmware/D1S_2_FT5446_Ofilm_TM_Black_V01_D01_20171219_app.i"

/*
 * if FTS_GET_VENDOR_ID_NUM >= 3, fw corrsponding with FTS_VENDOR_ID3
 * define your own fw_file, the sample one is invalid
 */
#define FTS_UPGRADE_FW3_FILE                     "include/firmware/D1S_1_FT5446_Ofilm_HuaXing_V0C_D01_20180711_app.i"

/**
 * ============================
 * @Author:   HQ-zmc
 * @Version: 1.0
 * @DateTime: 2017-12-29 16:20:03
 * @vendor info of each vendor
 * ============================
 */
#define FTS_VENDOR_INFO							"[Vendor]Ofilm(TP) + TM(LCD), [TP-IC]FT5446,[FW]Ver"
#define FTS_VENDOR_INFO2						"[Vendor]Ofilm(TP) + EBBG(LCD), [TP-IC]FT5446,[FW]Ver"
#define FTS_VENDOR_INFO3						"[Vendor]Ofilm(TP) + CSOT(LCD), [TP-IC]FT5446,[FW]Ver"

#define HQ_CTP_HWINFO_REGISTER		1
#define HQ_LOCK_DOWN_INFO           1
/*********************************************************/

#endif /* _LINUX_FOCLATECH_CONFIG_H_ */
