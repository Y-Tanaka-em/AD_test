/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
* OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY
* LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT,
* INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR
* ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability 
* of this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2022 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name        : r_cg_s12ad.h
* Version          : 1.4.140
* Device(s)        : R5F571MLCxFC
* Description      : General header file for S12AD peripheral.
***********************************************************************************************************************/

#ifndef S12AD_H
#define S12AD_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/
/*
    A/D control register (ADCSR)
*/
/* Double Trigger Channel Select ( DBLANS) */
#define _0000_AD_DBCHANNEL_ANx00             (0x0000U) /* ANx00 is used for double trigger mode */
#define _0001_AD_DBCHANNEL_ANx01             (0x0001U) /* ANx01 is used for double trigger mode */
#define _0002_AD_DBCHANNEL_ANx02             (0x0002U) /* ANx02 is used for double trigger mode */
#define _0003_AD_DBCHANNEL_ANx03             (0x0003U) /* ANx03 is used for double trigger mode */
#define _0004_AD_DBCHANNEL_ANx04             (0x0004U) /* ANx04 is used for double trigger mode */
#define _0005_AD_DBCHANNEL_ANx05             (0x0005U) /* ANx05 is used for double trigger mode */
#define _0006_AD_DBCHANNEL_ANx06             (0x0006U) /* ANx06 is used for double trigger mode */
#define _0007_AD_DBCHANNEL_ANx07             (0x0007U) /* ANx07 is used for double trigger mode */
#define _0008_AD_DBCHANNEL_AN108             (0x0008U) /* AN108 is used for double trigger mode */
#define _0009_AD_DBCHANNEL_AN109             (0x0009U) /* AN109 is used for double trigger mode */
#define _000A_AD_DBCHANNEL_AN110             (0x000AU) /* AN110 is used for double trigger mode */
#define _000B_AD_DBCHANNEL_AN111             (0x000BU) /* AN111 is used for double trigger mode */
#define _000C_AD_DBCHANNEL_AN112             (0x000CU) /* AN112 is used for double trigger mode */
#define _000D_AD_DBCHANNEL_AN113             (0x000DU) /* AN113 is used for double trigger mode */
#define _000E_AD_DBCHANNEL_AN114             (0x000EU) /* AN114 is used for double trigger mode */
#define _000F_AD_DBCHANNEL_AN115             (0x000FU) /* AN115 is used for double trigger mode */
#define _0010_AD_DBCHANNEL_AN116             (0x0010U) /* AN116 is used for double trigger mode */
#define _0011_AD_DBCHANNEL_AN117             (0x0011U) /* AN117 is used for double trigger mode */
#define _0012_AD_DBCHANNEL_AN118             (0x0012U) /* AN118 is used for double trigger mode */
#define _0013_AD_DBCHANNEL_AN119             (0x0013U) /* AN119 is used for double trigger mode */
#define _0014_AD_DBCHANNEL_AN120             (0x0014U) /* AN120 is used for double trigger mode */
#define _0017_AD_DBCHANNEL_NOSELECT          (0x0017U) /* No input channel is used for double trigger mode */
/* Group B scan end interrupt enable (GBADIE) */
#define _0000_AD_GBADI_DISABLE               (0x0000U) /* Disables S12GBADI interrupt generation upon group B scan
                                                          completion */
#define _0040_AD_GBADI_ENABLE                (0x0040U) /* Enables S12GBADI interrupt generation upon group B scan
                                                          completion */
/* Double trigger mode select (DBLE) */
#define _0000_AD_DBLTRIGGER_DISABLE          (0x0000U) /* Disable double trigger mode */
#define _0080_AD_DBLTRIGGER_ENABLE           (0x0080U) /* Enable double trigger mode */
/* Trigger select (EXTRG) */
#define _0000_AD_SYNC_TRIGGER                (0x0000U) /* A/D conversion started by synchronous trigger */
#define _0100_AD_ASYNC_TRIGGER               (0x0100U) /* A/D conversion started by asynchronous trigger */
/* Trigger start enable (TRGE) */
#define _0000_AD_SYNCASYNCTRG_DISABLE        (0x0000U) /* A/D conversion synchronous or asynchronous trigger disable */
#define _0200_AD_SYNCASYNCTRG_ENABLE         (0x0200U) /* A/D conversion synchronous or asynchronous trigger enable */
/* Scan end interrupt enable (ADIE) */
#define _0000_AD_SCAN_END_INTERRUPT_DISABLE  (0x0000U) /* Disable S12ADI0 interrupt generation upon scan completion */
#define _1000_AD_SCAN_END_INTERRUPT_ENABLE   (0x1000U) /* Enable S12ADI0 interrupt generation upon scan completion */
/* Scan mode select (ADCS) */
#define _0000_AD_SINGLE_SCAN_MODE            (0x0000U) /* Single scan mode */
#define _2000_AD_GROUP_SCAN_MODE             (0x2000U) /* Group scan mode */
#define _4000_AD_CONTINUOUS_SCAN_MODE        (0x4000U) /* Continuous scan mode */
/* A/D conversion start (ADST) */
#define _0000_AD_CONVERSION_STOP             (0x0000U) /* Stop A/D conversion */
#define _8000_AD_CONVERSION_START            (0x8000U) /* Start A/D conversion */

/*
    A/D Channel Select Register A0 (ADANSA0)
*/
#define _0001_AD_ANx00_USED                  (0x0001U) /* ANx00 is subjected to conversion */
#define _0001_AD_ANx00_GROUPA_USED           (0x0001U) /* ANx00 is subjected to group A conversion */
#define _0002_AD_ANx01_USED                  (0x0002U) /* ANx01 is subjected to conversion */
#define _0002_AD_ANx01_GROUPA_USED           (0x0002U) /* ANx01 is subjected to group A conversion */
#define _0004_AD_ANx02_USED                  (0x0004U) /* ANx02 is subjected to conversion */
#define _0004_AD_ANx02_GROUPA_USED           (0x0004U) /* ANx02 is subjected to group A conversion */
#define _0008_AD_ANx03_USED                  (0x0008U) /* ANx03 is subjected to conversion */
#define _0008_AD_ANx03_GROUPA_USED           (0x0008U) /* ANx03 is subjected to group A conversion */
#define _0010_AD_ANx04_USED                  (0x0010U) /* ANx04 is subjected to conversion */
#define _0010_AD_ANx04_GROUPA_USED           (0x0010U) /* ANx04 is subjected to group A conversion */
#define _0020_AD_ANx05_USED                  (0x0020U) /* ANx05 is subjected to conversion */
#define _0020_AD_ANx05_GROUPA_USED           (0x0020U) /* ANx05 is subjected to group A conversion */
#define _0040_AD_ANx06_USED                  (0x0040U) /* ANx06 is subjected to conversion */
#define _0040_AD_ANx06_GROUPA_USED           (0x0040U) /* ANx06 is subjected to group A conversion */
#define _0080_AD_ANx07_USED                  (0x0080U) /* ANx07 is subjected to conversion */
#define _0080_AD_ANx07_GROUPA_USED           (0x0080U) /* ANx07 is subjected to group A conversion */
#define _0100_AD_AN108_USED                  (0x0100U) /* AN108 is subjected to conversion */
#define _0100_AD_AN108_GROUPA_USED           (0x0100U) /* AN108 is subjected to group A conversion */
#define _0200_AD_AN109_USED                  (0x0200U) /* AN109 is subjected to conversion */
#define _0200_AD_AN109_GROUPA_USED           (0x0200U) /* AN109 is subjected to group A conversion */
#define _0400_AD_AN110_USED                  (0x0400U) /* AN110 is subjected to conversion */
#define _0400_AD_AN110_GROUPA_USED           (0x0400U) /* AN110 is subjected to group A conversion */
#define _0800_AD_AN111_USED                  (0x0800U) /* AN111 is subjected to conversion */
#define _0800_AD_AN111_GROUPA_USED           (0x0800U) /* AN111 is subjected to group A conversion */
#define _1000_AD_AN112_USED                  (0x1000U) /* AN112 is subjected to conversion */
#define _1000_AD_AN112_GROUPA_USED           (0x1000U) /* AN112 is subjected to group A conversion */
#define _2000_AD_AN113_USED                  (0x2000U) /* AN113 is subjected to conversion */
#define _2000_AD_AN113_GROUPA_USED           (0x2000U) /* AN113 is subjected to group A conversion */
#define _4000_AD_AN114_USED                  (0x4000U) /* AN114 is subjected to conversion */
#define _4000_AD_AN114_GROUPA_USED           (0x4000U) /* AN114 is subjected to group A conversion */
#define _8000_AD_AN115_USED                  (0x8000U) /* AN115 is subjected to conversion */
#define _8000_AD_AN115_GROUPA_USED           (0x8000U) /* AN115 is subjected to group A conversion */
                                            
/*                                          
    A/D Channel Select Register A1 (ADANSA1)    
*/                                          
#define _0001_AD_AN116_USED                  (0x0001U) /* AN116 is subjected to conversion */
#define _0001_AD_AN116_GROUPA_USED           (0x0001U) /* AN116 is subjected to group A conversion */
#define _0002_AD_AN117_USED                  (0x0002U) /* AN117 is subjected to conversion */
#define _0002_AD_AN117_GROUPA_USED           (0x0002U) /* AN117 is subjected to group A conversion */
#define _0004_AD_AN118_USED                  (0x0004U) /* AN118 is subjected to conversion */
#define _0004_AD_AN118_GROUPA_USED           (0x0004U) /* AN118 is subjected to group A conversion */
#define _0008_AD_AN119_USED                  (0x0008U) /* AN119 is subjected to conversion */
#define _0008_AD_AN119_GROUPA_USED           (0x0008U) /* AN119 is subjected to group A conversion */
#define _0010_AD_AN120_USED                  (0x0010U) /* AN120 is subjected to conversion */
#define _0010_AD_AN120_GROUPA_USED           (0x0010U) /* AN120 is subjected to group A conversion */

/*
    A/D Channel Select Register A0 (ADANSB0)
*/
#define _0001_AD_ANx00_GROUPB_USED           (0x0001U) /* ANx00 is subjected to group B conversion */
#define _0002_AD_ANx01_GROUPB_USED           (0x0002U) /* ANx01 is subjected to group B conversion */
#define _0004_AD_ANx02_GROUPB_USED           (0x0004U) /* ANx02 is subjected to group B conversion */
#define _0008_AD_ANx03_GROUPB_USED           (0x0008U) /* ANx03 is subjected to group B conversion */
#define _0010_AD_ANx04_GROUPB_USED           (0x0010U) /* ANx04 is subjected to group B conversion */
#define _0020_AD_ANx05_GROUPB_USED           (0x0020U) /* ANx05 is subjected to group B conversion */
#define _0040_AD_ANx06_GROUPB_USED           (0x0040U) /* ANx06 is subjected to group B conversion */
#define _0080_AD_ANx07_GROUPB_USED           (0x0080U) /* ANx07 is subjected to group B conversion */
#define _0100_AD_AN108_GROUPB_USED           (0x0100U) /* AN108 is subjected to group B conversion */
#define _0200_AD_AN109_GROUPB_USED           (0x0200U) /* AN109 is subjected to group B conversion */
#define _0400_AD_AN110_GROUPB_USED           (0x0400U) /* AN110 is subjected to group B conversion */
#define _0800_AD_AN111_GROUPB_USED           (0x0800U) /* AN111 is subjected to group B conversion */
#define _1000_AD_AN112_GROUPB_USED           (0x1000U) /* AN112 is subjected to group B conversion */
#define _2000_AD_AN113_GROUPB_USED           (0x2000U) /* AN113 is subjected to group B conversion */
#define _4000_AD_AN114_GROUPB_USED           (0x4000U) /* AN114 is subjected to group B conversion */
#define _8000_AD_AN115_GROUPB_USED           (0x8000U) /* AN115 is subjected to group B conversion */
                                            
/*                                          
    A/D Channel Select Register A1 (ADANSB1)    
*/                                          
#define _0001_AD_AN116_GROUPB_USED           (0x0001U) /* AN116 is subjected to group B conversion */
#define _0002_AD_AN117_GROUPB_USED           (0x0002U) /* AN117 is subjected to group B conversion */
#define _0004_AD_AN118_GROUPB_USED           (0x0004U) /* AN118 is subjected to group B conversion */
#define _0008_AD_AN119_GROUPB_USED           (0x0008U) /* AN119 is subjected to group B conversion */
#define _0010_AD_AN120_GROUPB_USED           (0x0010U) /* AN120 is subjected to group B conversion */

/*
    A/D-Converted Value Addition/Average Mode Select Register 0 (ADADS0)
*/
#define _0001_AD_ANx00_ADD_USED              (0x0001U) /* ANx00 is selected to addition/average mode */
#define _0002_AD_ANx01_ADD_USED              (0x0002U) /* ANx01 is selected to addition/average mode */
#define _0004_AD_ANx02_ADD_USED              (0x0004U) /* ANx02 is selected to addition/average mode */
#define _0008_AD_ANx03_ADD_USED              (0x0008U) /* ANx03 is selected to addition/average mode */
#define _0010_AD_ANx04_ADD_USED              (0x0010U) /* ANx04 is selected to addition/average mode */
#define _0020_AD_ANx05_ADD_USED              (0x0020U) /* ANx05 is selected to addition/average mode */
#define _0040_AD_ANx06_ADD_USED              (0x0040U) /* ANx06 is selected to addition/average mode */
#define _0080_AD_ANx07_ADD_USED              (0x0080U) /* ANx07 is selected to addition/average mode */
#define _0100_AD_AN108_ADD_USED              (0x0100U) /* AN108 is selected to addition/average mode */
#define _0200_AD_AN109_ADD_USED              (0x0200U) /* AN109 is selected to addition/average mode */
#define _0400_AD_AN110_ADD_USED              (0x0400U) /* AN110 is selected to addition/average mode */
#define _0800_AD_AN111_ADD_USED              (0x0800U) /* AN111 is selected to addition/average mode */
#define _1000_AD_AN112_ADD_USED              (0x1000U) /* AN112 is selected to addition/average mode */
#define _2000_AD_AN113_ADD_USED              (0x2000U) /* AN113 is selected to addition/average mode */
#define _4000_AD_AN114_ADD_USED              (0x4000U) /* AN114 is selected to addition/average mode */
#define _8000_AD_AN115_ADD_USED              (0x8000U) /* AN115 is selected to addition/average mode */

/*
    A/D-Converted Value Addition/Average Mode Select Register 1 (ADADS1)
*/
#define _0001_AD_AN116_ADD_USED              (0x0001U) /* AN116 is selected to addition/average mode */
#define _0002_AD_AN117_ADD_USED              (0x0002U) /* AN117 is selected to addition/average mode */
#define _0004_AD_AN118_ADD_USED              (0x0004U) /* AN118 is selected to addition/average mode */
#define _0008_AD_AN119_ADD_USED              (0x0008U) /* AN119 is selected to addition/average mode */
#define _0010_AD_AN120_ADD_USED              (0x0010U) /* AN120 is selected to addition/average mode */

/*
    A/D-Converted Value Addition/Average Count Select Register (ADADC)
*/
/* Addition Count Select (ADC) */
#define _00_AD_1_TIME_CONVERSION             (0x00U) /* 1-time conversion */
#define _01_AD_2_TIME_CONVERSION             (0x01U) /* 2-time conversion */
#define _02_AD_3_TIME_CONVERSION             (0x02U) /* 3-time conversion */
#define _03_AD_4_TIME_CONVERSION             (0x03U) /* 4-time conversion */
/* Average Mode Enable bit (AVEE) */
#define _00_AD_ADDITION_MODE                 (0x00U) /* Addition mode */
#define _80_AD_AVERAGE_MODE                  (0x80U) /* Average mode */

/*
    A/D Control Extended Register (ADCER)
*/
/* A/D Conversion Resolution Setting (ADPRC) */
#define _0000_AD_RESOLUTION_12BIT            (0x0000U) /* 12-bit resolution */
#define _0002_AD_RESOLUTION_10BIT            (0x0002U) /* 10-bit resolution */
#define _0004_AD_RESOLUTION_8BIT             (0x0004U) /* 8-bit resolution */
/* A/D Data Register Automatic Clearing Enable (ACE) */
#define _0000_AD_AUTO_CLEARING_DISABLE       (0x0000U) /* Disable auto clearing */
#define _0020_AD_AUTO_CLEARING_ENABLE        (0x0020U) /* Enable auto clearing */
/* Self-Diagnosis Conversion Voltage Select (DIAGVAL) */
#define _0100_AD_SELFTDIAGST_0V              (0x0100U) /* Self-diagnosis using a voltage of 0V */
#define _0200_AD_SELFTDIAGST_VREFH0_HALF     (0x0200U) /* Self-diagnosis using a voltage of VREFH0_1/2 */
#define _0300_AD_SELFTDIAGST_VREFH0          (0x0300U) /* Self-diagnosis using a voltage of VREFH0_1 */
#define _0200_AD_SELFTDIAGST_AVCC1_HALF      (0x0200U) /* Self-diagnosis using a voltage of AVCC1_1/2*/
#define _0300_AD_SELFTDIAGST_AVCC1           (0x0300U) /* Self-diagnosis using a voltage of AVCC1_1*/
/* Self-Diagnosis Mode Select (DIAGLD) */
#define _0000_AD_SELFTDIAGST_ROTATION        (0x0000U) /* Rotation mode for self-diagnosis voltage */
#define _0400_AD_SELFTDIAGST_FIX             (0x0400U) /* Fixed mode for self-diagnosis voltage */
/* Self-Diagnosis Enable (DIAGM) */
#define _0000_AD_SELFTDIAGST_DISABLE         (0x0000U) /* 12-bit A/D converter self-diagnosis disable */
#define _0800_AD_SELFTDIAGST_ENABLE          (0x0800U) /* 12-bit A/D converter self-diagnosis enable */
/* A/D Data Register Format Select (ADRFMT) */
#define _0000_AD_RIGHT_ALIGNMENT             (0x0000U) /* Right-alignment for data register format */
#define _8000_AD_LEFT_ALIGNMENT              (0x8000U) /* Left-alignment for data register format */

/*
    A/D Start Trigger Select Register (ADSTRGR)
*/
/* A/D Conversion Start Trigger Select for Group B (TRSB) */
#define _0001_AD_TRSB_TRGA0N                 (0x0001U) /* Compare match with or input capture to MTU0.TGRA */
#define _0002_AD_TRSB_TRGA1N                 (0x0002U) /* Compare match with or input capture to MTU1.TGRA */
#define _0003_AD_TRSB_TRGA2N                 (0x0003U) /* Compare match with or input capture to MTU2.TGRA */
#define _0004_AD_TRSB_TRGA3N                 (0x0004U) /* Compare match with or input capture to MTU3.TGRA */
#define _0005_AD_TRSB_TRGA4N                 (0x0005U) /* Compare match with or input capture to MTU4.TGRA,or an
                                                          underflow of MTU4.TCNT (in the trough) in complementary
                                                          PWM mode */
#define _0006_AD_TRSB_TRGA6N                 (0x0006U) /* Compare match with or input capture to MTU6.TGRA */
#define _0007_AD_TRSB_TRGA7N                 (0x0007U) /* Compare match with or input capture to MTU7.TGRA,or an
                                                          underflow of MTU7.TCNT (in the trough) in complementary
                                                          PWM mode */
#define _0008_AD_TRSB_TRG0N                  (0x0008U) /* Compare match with MTU0.TGRE */
#define _0009_AD_TRSB_TRG4AN                 (0x0009U) /* Compare match between MTU4.TADCORA and MTU4.TCNT */
#define _000A_AD_TRSB_TRG4BN                 (0x000AU) /* Compare match between MTU4.TADCORB and MTU4.TCNT */
#define _000B_AD_TRSB_TRG4BN_TRG4AN          (0x000BU) /* Compare match between MTU4.TADCORA and MTU4.TCNT, or
                                                          between MTU4.TADCORB and MTU4.TCNT */
#define _000C_AD_TRSB_TRG4ABN                (0x000CU) /* Compare match between MTU4.TADCORA and MTU4.TCNT, and
                                                          between MTU4.TADCORB and MTU4.TCNT (when interrupt skipping
                                                          function 2 is in use) */
#define _000D_AD_TRSB_TRG7AN                 (0x000DU) /* Compare match between MTU7.TADCORA and MTU7.TCNT */
#define _000E_AD_TRSB_TRG7BN                 (0x000EU) /* Compare match between MTU7.TADCORB and MTU7.TCNT */
#define _000F_AD_TRSB_TRG7AN_TRG7BN          (0x000FU) /* Compare match between MTU7.TADCORA and MTU7.TCNT, or between
                                                          MTU7.TADCORB and MTU7.TCNT */
#define _0010_AD_TRSB_TRG7ABN                (0x0010U) /* Compare match between MTU7.TADCORA and MTU7.TCNT, and between
                                                          MTU7.TADCORB and MTU7.TCNT (when interrupt skipping function
                                                          2 is in use) */
#define _0011_AD_TRSB_GTADTRA0N              (0x0011U) /* Compare match with GPT0.GTADTRA */
#define _0012_AD_TRSB_GTADTRB0N              (0x0012U) /* Compare match with GPT0.GTADTRB */
#define _0013_AD_TRSB_GTADTRA1N              (0x0013U) /* Compare match with GPT1.GTADTRA */
#define _0014_AD_TRSB_GTADTRB1N              (0x0014U) /* Compare match with GPT1.GTADTRB */
#define _0015_AD_TRSB_GTADTRA2N              (0x0015U) /* Compare match with GPT2.GTADTRA */
#define _0016_AD_TRSB_GTADTRB2N              (0x0016U) /* Compare match with GPT2.GTADTRB */
#define _0017_AD_TRSB_GTADTRA3N              (0x0017U) /* Compare match with GPT3.GTADTRA */
#define _0018_AD_TRSB_GTADTRB3N              (0x0018U) /* Compare match with GPT3.GTADTRB */
#define _0019_AD_TRSB_GTADTRA0N_GTADTRB0N    (0x0019U) /* Compare match with GPT0.GTADTRA or with GPT0.GTADTRB */
#define _001A_AD_TRSB_GTADTRA1N_GTADTRB1N    (0x001AU) /* Compare match with GPT1.GTADTRA or with GPT1.GTADTRB */
#define _001B_AD_TRSB_GTADTRA2N_GTADTRB2N    (0x001BU) /* Compare match with GPT2.GTADTRA or with GPT2.GTADTRB*/
#define _001C_AD_TRSB_GTADTRA3N_GTADTRB3N    (0x001CU) /* Compare match with GPT3.GTADTRA or with GPT3.GTADTRB */
#define _001D_AD_TRSB_TMTRG0AN_0             (0x001DU) /* Compare match between TMR0.TCORA0 and TMR0.TCNT0(unit0,ch0) */
#define _001E_AD_TRSB_TMTRG0AN_1             (0x001EU) /* Compare match between TMR2.TCORA0 and TMR2.TCNT0(unit1,ch0) */
#define _001F_AD_TRSB_TPTRGAN                (0x001FU) /* Compare match with or input capture to TPUn.TGRAn(n = 0to5) */
#define _0020_AD_TRSB_TPTRG0AN               (0x0020U) /* Compare match with or input capture to TPU0.TGRA0 */
#define _0030_AD_TRSB_ELCTRG0N_ELCTRG1N      (0x0030U) /* Trigger from ELC */
/* A/D Conversion Start Trigger Select (TRSA) */
#define _0000_AD_TRSA_ADTRG                  (0x0000U) /* Input pin for the trigger */
#define _0100_AD_TRSA_TRGA0N                 (0x0100U) /* Compare match with or input capture to MTU0.TGRA */
#define _0200_AD_TRSA_TRGA1N                 (0x0200U) /* Compare match with or input capture to MTU1.TGRA */
#define _0300_AD_TRSA_TRGA2N                 (0x0300U) /* Compare match with or input capture to MTU2.TGRA */
#define _0400_AD_TRSA_TRGA3N                 (0x0400U) /* Compare match with or input capture to MTU3.TGRA */
#define _0500_AD_TRSA_TRGA4N                 (0x0500U) /* Compare match with or input capture to MTU4.TGRA or, in
                                                          complementary PWM mode,an underflow of MTU4.TCNT
                                                          (in the trough)*/
#define _0600_AD_TRSA_TRGA6N                 (0x0600U) /* Compare match with or input capture to MTU6.TGRA */
#define _0700_AD_TRSA_TRGA7N                 (0x0700U) /* Compare match with or input capture to MTU7.TGRA or, in
                                                          complementary PWM mode,an underflow of MTU7.TCNT
                                                          (in the trough)*/
#define _0800_AD_TRSA_TRG0N                  (0x0800U) /* Compare match with MTU0.TGRE */
#define _0900_AD_TRSA_TRG4AN                 (0x0900U) /* Compare match between MTU4.TADCORA and MTU4.TCNT */
#define _0A00_AD_TRSA_TRG4BN                 (0x0A00U) /* Compare match between MTU4.TADCORB and MTU4.TCNT */
#define _0B00_AD_TRSA_TRG4BN_TRG4AN          (0x0B00U) /* Compare match between MTU4.TADCORA and MTU4.TCNT, or between
                                                          MTU4.TADCORB and MTU4.TCNT */
#define _0C00_AD_TRSA_TRG4ABN                (0x0C00U) /* Compare match between MTU4.TADCORA and MTU4.TCNT, and between
                                                          MTU4.TADCORB and MTU4.TCNT (when interrupt skipping function
                                                          2 is in use) */
#define _0D00_AD_TRSA_TRG7AN                 (0x0D00U) /* Compare match between MTU7.TADCORA and MTU7.TCNT */
#define _0E00_AD_TRSA_TRG7BN                 (0x0E00U) /* Compare match between MTU7.TADCORB and MTU7.TCNT */
#define _0F00_AD_TRSA_TRG7AN_TRG7BN          (0x0F00U) /* Compare match between MTU7.TADCORA and MTU7.TCNT, or between
                                                          MTU7.TADCORB and MTU7.TCNT */
#define _1000_AD_TRSA_TRG7ABN                (0x1000U) /* Compare match between MTU7.TADCORA and MTU7.TCNT, and between
                                                          MTU7.TADCORB and MTU7.TCNT (when interrupt skipping function
                                                          2 is in use) */
#define _1100_AD_TRSA_GTADTRA0N              (0x1100U) /* Compare match with GPT0.GTADTRA */
#define _1200_AD_TRSA_GTADTRB0N              (0x1200U) /* Compare match with GPT0.GTADTRB */
#define _1300_AD_TRSA_GTADTRA1N              (0x1300U) /* Compare match with GPT1.GTADTRA */
#define _1400_AD_TRSA_GTADTRB1N              (0x1400U) /* Compare match with GPT1.GTADTRB */
#define _1500_AD_TRSA_GTADTRA2N              (0x1500U) /* Compare match with GPT2.GTADTRA */
#define _1600_AD_TRSA_GTADTRB2N              (0x1600U) /* Compare match with GPT2.GTADTRB */
#define _1700_AD_TRSA_GTADTRA3N              (0x1700U) /* Compare match with GPT3.GTADTRA */
#define _1800_AD_TRSA_GTADTRB3N              (0x1800U) /* Compare match with GPT3.GTADTRB */
#define _1900_AD_TRSA_GTADTRA0N_GTADTRB0N    (0x1900U) /* Compare match with GPT0.GTADTRA or with GPT0.GTADTRB */
#define _1A00_AD_TRSA_GTADTRA1N_GTADTRB1N    (0x1A00U) /* Compare match with GPT1.GTADTRA or with GPT1.GTADTRB */
#define _1B00_AD_TRSA_GTADTRA2N_GTADTRB2N    (0x1B00U) /* Compare match with GPT2.GTADTRA or with GPT2.GTADTRB */
#define _1C00_AD_TRSA_GTADTRA3N_GTADTRB3N    (0x1C00U) /* Compare match with GPT3.GTADTRA or with GPT3.GTADTRB */
#define _1D00_AD_TRSA_TMTRG0AN_0             (0x1D00U) /* Compare match between TMR0.TCORA0 and TMR0.TCNT0(unit0,ch0) */
#define _1E00_AD_TRSA_TMTRG0AN_1             (0x1E00U) /* Compare match between TMR2.TCORA0 and TMR2.TCNT0(unit1,ch0) */
#define _1F00_AD_TRSA_TPTRGAN                (0x1F00U) /* Compare match with or input capture to TPUn.TGRAn(n=0 to 5) */
#define _2000_AD_TRSA_TPTRG0AN               (0x2000U) /* Compare match with or input capture to TPU0.TGRAn */
#define _3000_AD_TRSA_ELCTRG0N_ELCTRG1N      (0x3000U) /* Trigger from ELC */

/*
    A/D Conversion Extended Input Control Register (ADEXICR)
*/
/* Temperature Sensor Output A/D Converted Value Addition/Averaging Mode Select (TSSAD) */
#define _0000_AD_TEMP_ADD_UNUSED             (0x0000U) /* Temperature sensor output A/D converted value addition/average
                                                          mode disabled */
#define _0001_AD_TEMP_ADD_USED               (0x0001U) /* Temperature sensor output A/D converted value addition/average
                                                          mode enabled */
/* Internal Reference Voltage A/D Converted Value Addition/Average Mode Select (OCSAD) */
#define _0000_AD_IREF_ADD_UNUSED             (0x0000U) /* Internal ref. voltage A/D converted value addition/average 
                                                          mode disabled */
#define _0002_AD_IREF_ADD_USED               (0x0002U) /* Internal ref. voltage A/D converted value addition/average
                                                          mode enabled */
/* Temperature sensor output A/D conversion select (TSSA) */
#define _0000_AD_TEMP_UNUSED                 (0x0000U) /* A/D conversion of temperature sensor output is disabled */
#define _0100_AD_TEMP_USED                   (0x0100U) /* A/D conversion of temperature sensor output is enabled */
#define _0100_AD_TEMP_GROUPA_USED            (0x0100U) /* A/D conversion of temperature sensor output is enabled in 
                                                          group A  */ 
/* Temperature sensor output A/D conversion select (TSSB) */
#define _0000_AD_TEMP_GROUPB_UNUSED          (0x0000U) /* A/D conversion of temperature sensor output is disabled in 
                                                          group B  */
#define _0400_AD_TEMP_GROUPB_USED            (0x0400U) /* A/D conversion of temperature sensor output is enabled in 
                                                          group B  */
/* Internal reference voltage A/D conversion select (OCSA) */
#define _0000_AD_IREF_UNUSED                 (0x0000U) /* A/D conversion of internal reference voltage is disabled */
#define _0200_AD_IREF_USED                   (0x0200U) /* A/D conversion of internal reference voltage is enabled */
#define _0200_AD_IREF_GROUPA_USED            (0x0200U) /* A/D conversion of internal reference voltage is enabled in 
                                                          group A  */
/* Internal reference voltage A/D conversion select (OCSB) */
#define _0000_AD_IREF_GROUPB_UNUSED          (0x0000U) /* A/D conversion of internal reference voltage is disabled in 
                                                          group B  */
#define _0800_AD_IREF_GROUPB_USED            (0x0800U) /* A/D conversion of internal reference voltage is enabled in 
                                                          group B  */
/* Extended Analog Input Select (EXSEL) */
#define _0000_AD_EXTNANEX1_IN_DISABLE        (0x0000U) /* Extended analog input disable */
#define _2000_AD_EXTNANEX1_IN_ENABLE         (0x2000U) /* Extended analog input enable */
/* Extended analog output control (EXOEN) */
#define _0000_AD_EXTNANEX0_OUT_DISABLE       (0x0000U) /* Extended analog output disable */
#define _8000_AD_EXTNANEX0_OUT_ENABLE        (0x8000U) /* Extended analog output enable */

/*
    A/D Sample-and-Hold Circuit Control Register (ADSHCR)
*/
/*  Channel-Dedicated Sample-and-Hold Circuit Bypass Select (SHANS) */
#define _0100_AD_DSH_AN000_SELECT            (0x0100U) /* AN000 use the channel-dedicated sample-and-hold circuits */
#define _0200_AD_DSH_AN001_SELECT            (0x0200U) /* AN001 use the channel-dedicated sample-and-hold circuits */
#define _0400_AD_DSH_AN002_SELECT            (0x0400U) /* AN002 use the channel-dedicated sample-and-hold circuits */

/*
    A/D Disconnection Detection Control Register (ADDISCR)
*/
#define _00_AD_DISCONECT_UNUSED              (0x00U) /* Detection detection control unused */
#define _00_AD_DISCONECT_DISCHARGE           (0x00U) /* Detection detection control discharge */
#define _10_AD_DISCONECT_PRECHARGE           (0x10U) /* Detection detection control precharge */
#define _02_AD_DISCONECT_2ADCLK              (0x02U) /* 2 ADCLK of detection detection control precharge/discharge */
#define _03_AD_DISCONECT_3ADCLK              (0x03U) /* 3 ADCLK of detection detection control precharge/discharge */
#define _04_AD_DISCONECT_4ADCLK              (0x04U) /* 4 ADCLK of detection detection control precharge/discharge */
#define _05_AD_DISCONECT_5ADCLK              (0x05U) /* 5 ADCLK of detection detection control precharge/discharge */
#define _06_AD_DISCONECT_6ADCLK              (0x06U) /* 6 ADCLK of detection detection control precharge/discharge */
#define _07_AD_DISCONECT_7ADCLK              (0x07U) /* 7 ADCLK of detection detection control precharge/discharge */
#define _08_AD_DISCONECT_8ADCLK              (0x08U) /* 8 ADCLK of detection detection control precharge/discharge */
#define _09_AD_DISCONECT_9ADCLK              (0x09U) /* 9 ADCLK of detection detection control precharge/discharge */
#define _0A_AD_DISCONECT_10ADCLK             (0x0AU) /* 10 ADCLK of detection detection control precharge/discharge */
#define _0B_AD_DISCONECT_11ADCLK             (0x0BU) /* 11 ADCLK of detection detection control precharge/discharge */
#define _0C_AD_DISCONECT_12ADCLK             (0x0CU) /* 12 ADCLK of detection detection control precharge/discharge */
#define _0D_AD_DISCONECT_13ADCLK             (0x0DU) /* 13 ADCLK of detection detection control precharge/discharge */
#define _0E_AD_DISCONECT_14ADCLK             (0x0EU) /* 14 ADCLK of detection detection control precharge/discharge */
#define _0F_AD_DISCONECT_15ADCLK             (0x0FU) /* 15 ADCLK of detection detection control precharge/discharge */

/*
    A/D Group Scan Priority Control Register (ADGSPCR)
*/
/* Group-A Priority Control Setting (PGS) */
#define _0000_AD_GPAPRIORITY_DISABLE         (0x0000U) /* Operation is without group A priority control */
#define _0001_AD_GPAPRIORITY_ENABLE          (0x0001U) /* Operation is with group A priority control */
/* Group B Restart Setting (GBRSCN) */
#define _0000_AD_GPBRESTART_DISABLE          (0x0000U) /* Group B not restart after discontinued due to Group A
                                                          priority */
#define _0002_AD_GPBRESTART_ENABLE           (0x0002U) /* Group B restart after discontinued due to Group A priority */
/* Group B Single Cycle Scan Continuous Start (GBRP) */
#define _0000_AD_GPBSCSCS_DISABLE            (0x0000U) /* Single cycle scan for group B not continuously activated */
#define _8000_AD_GPBSCSCS_ENABLE             (0x8000U) /* Single cycle scan for group B is continuously activated */

/* 
    A/D Compare Control Register (ADCMPCR)
*/
/* Window Function Setting (WCMPE) */
#define _00_AD_WINDOWFUNCTION_DISABLE        (0x00U) /* Window function disabled */ 
#define _40_AD_WINDOWFUNCTION_ENABLE         (0x40U) /* Window function enabled */
/* Compare Interrupt Enable (CMPIE) */
#define _00_AD_COMPARISON_INTERRUPT_DISABLE  (0x00U) /* S12CMPI interrupt is disabled */ 
#define _80_AD_COMPARISON_INTERRUPT_ENABLE   (0x80U) /* S12CMPI interrupt is enabled */

/* 
    A/D Compare Channel Select Extended Register (ADCMPANSER)
*/
/* Temperature Sensor Output Compare Select(CMPSTS) */
#define _00_AD_TEMP_CMPA_UNUSED              (0x00U) /* Temperature sensor output is not a target for comparison */ 
#define _01_AD_TEMP_CMPA_USED                (0x01U) /* Temperature sensor output is a target for comparison */
/* Internal Reference Voltage Compare Select (CMPSOC) */
#define _00_AD_IREF_CMPA_UNUSED              (0x00U) /* Internal reference voltage is not a target for comparison */ 
#define _02_AD_IREF_CMPA_USED                (0x02U) /* Internal reference voltage is a target for comparison */

/* 
    A/D Compare Channel Select Register 0 (ADCMPANSR0)
*/
#define _0001_AD_ANx00_CMPA_USED             (0x0001U) /* ANx00 is target for comparison */
#define _0002_AD_ANx01_CMPA_USED             (0x0002U) /* ANx01 is target for comparison */
#define _0004_AD_ANx02_CMPA_USED             (0x0004U) /* ANx02 is target for comparison */
#define _0008_AD_ANx03_CMPA_USED             (0x0008U) /* ANx03 is target for comparison */
#define _0010_AD_ANx04_CMPA_USED             (0x0010U) /* ANx04 is target for comparison */
#define _0020_AD_ANx05_CMPA_USED             (0x0020U) /* ANx05 is target for comparison */
#define _0040_AD_ANx06_CMPA_USED             (0x0040U) /* ANx06 is target for comparison */
#define _0080_AD_ANx07_CMPA_USED             (0x0080U) /* ANx07 is target for comparison */
#define _0100_AD_AN108_CMPA_USED             (0x0100U) /* AN108 is target for comparison */
#define _0200_AD_AN109_CMPA_USED             (0x0200U) /* AN109 is target for comparison */
#define _0400_AD_AN110_CMPA_USED             (0x0400U) /* AN110 is target for comparison */
#define _0800_AD_AN111_CMPA_USED             (0x0800U) /* AN111 is target for comparison */
#define _1000_AD_AN112_CMPA_USED             (0x1000U) /* AN112 is target for comparison */
#define _2000_AD_AN113_CMPA_USED             (0x2000U) /* AN113 is target for comparison */
#define _4000_AD_AN114_CMPA_USED             (0x4000U) /* AN114 is target for comparison */
#define _8000_AD_AN115_CMPA_USED             (0x8000U) /* AN115 is target for comparison */

/*
    A/D Compare Channel Select Register 1 (ADCMPANSR1)
*/
#define _0001_AD_AN116_CMPA_USED             (0x0001U) /* AN116 is target for comparison */
#define _0002_AD_AN117_CMPA_USED             (0x0002U) /* AN117 is target for comparison */
#define _0004_AD_AN118_CMPA_USED             (0x0004U) /* AN118 is target for comparison */
#define _0008_AD_AN119_CMPA_USED             (0x0008U) /* AN119 is target for comparison */
#define _0010_AD_AN120_CMPA_USED             (0x0010U) /* AN120 is target for comparison */

/* 
    A/D Compare Level Register 0 (ADCMPLR0)
*/
#define _0000_AD_ANx00_CMPA_LEVEL0           (0x0000U) /* ANx00 converted value < ADCMPDR0 register value or ANx00
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_ANx01_CMPA_LEVEL0           (0x0000U) /* ANx01 converted value < ADCMPDR0 register value or ANx01
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_ANx02_CMPA_LEVEL0           (0x0000U) /* ANx02 converted value < ADCMPDR0 register value or ANx02
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_ANx03_CMPA_LEVEL0           (0x0000U) /* ANx03 converted value < ADCMPDR0 register value or ANx03
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_ANx04_CMPA_LEVEL0           (0x0000U) /* ANx04 converted value < ADCMPDR0 register value or ANx04
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_ANx05_CMPA_LEVEL0           (0x0000U) /* ANx05 converted value < ADCMPDR0 register value or ANx05
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_ANx06_CMPA_LEVEL0           (0x0000U) /* ANx06 converted value < ADCMPDR0 register value or ANx06
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_ANx07_CMPA_LEVEL0           (0x0000U) /* ANx07 converted value < ADCMPDR0 register value or ANx07
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_AN108_CMPA_LEVEL0           (0x0000U) /* AN108 converted value < ADCMPDR0 register value or AN108
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_AN109_CMPA_LEVEL0           (0x0000U) /* AN109 converted value < ADCMPDR0 register value or AN109
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_AN110_CMPA_LEVEL0           (0x0000U) /* AN110 converted value < ADCMPDR0 register value or AN110
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_AN111_CMPA_LEVEL0           (0x0000U) /* AN111 converted value < ADCMPDR0 register value or AN111
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_AN112_CMPA_LEVEL0           (0x0000U) /* AN112 converted value < ADCMPDR0 register value or AN112
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_AN113_CMPA_LEVEL0           (0x0000U) /* AN113 converted value < ADCMPDR0 register value or AN113
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_AN114_CMPA_LEVEL0           (0x0000U) /* AN114 converted value < ADCMPDR0 register value or AN114
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_AN115_CMPA_LEVEL0           (0x0000U) /* AN115 converted value < ADCMPDR0 register value or AN115
                                                          converted value > ADCMPDR1 register value */
#define _0001_AD_ANx00_CMPA_LEVEL1           (0x0001U) /* ADCMPDR0 register value < ANx00 converted value < ADCMPDR1
                                                          register value */
#define _0002_AD_ANx01_CMPA_LEVEL1           (0x0002U) /* ADCMPDR0 register value < ANx01 converted value < ADCMPDR1
                                                          register value */
#define _0004_AD_ANx02_CMPA_LEVEL1           (0x0004U) /* ADCMPDR0 register value < ANx02 converted value < ADCMPDR1
                                                          register value */
#define _0008_AD_ANx03_CMPA_LEVEL1           (0x0008U) /* ADCMPDR0 register value < ANx03 converted value < ADCMPDR1
                                                          register value */
#define _0010_AD_ANx04_CMPA_LEVEL1           (0x0010U) /* ADCMPDR0 register value < ANx04 converted value < ADCMPDR1
                                                          register value */
#define _0020_AD_ANx05_CMPA_LEVEL1           (0x0020U) /* ADCMPDR0 register value < ANx05 converted value < ADCMPDR1
                                                          register value */
#define _0040_AD_ANx06_CMPA_LEVEL1           (0x0040U) /* ADCMPDR0 register value < ANx06 converted value < ADCMPDR1
                                                          register value */
#define _0080_AD_ANx07_CMPA_LEVEL1           (0x0080U) /* ADCMPDR0 register value < ANx07 converted value < ADCMPDR1
                                                          register value */
#define _0100_AD_AN108_CMPA_LEVEL1           (0x0100U) /* ADCMPDR0 register value < AN108 converted value < ADCMPDR1
                                                          register value */
#define _0200_AD_AN109_CMPA_LEVEL1           (0x0200U) /* ADCMPDR0 register value < AN109 converted value < ADCMPDR1
                                                          register value */
#define _0400_AD_AN110_CMPA_LEVEL1           (0x0400U) /* ADCMPDR0 register value < AN110 converted value < ADCMPDR1
                                                          register value */
#define _0800_AD_AN111_CMPA_LEVEL1           (0x0800U) /* ADCMPDR0 register value < AN111 converted value < ADCMPDR1
                                                          register value */
#define _1000_AD_AN112_CMPA_LEVEL1           (0x1000U) /* ADCMPDR0 register value < AN112 converted value < ADCMPDR1
                                                          register value */
#define _2000_AD_AN113_CMPA_LEVEL1           (0x2000U) /* ADCMPDR0 register value < AN113 converted value < ADCMPDR1
                                                          register value */
#define _4000_AD_AN114_CMPA_LEVEL1           (0x4000U) /* ADCMPDR0 register value < AN114 converted value < ADCMPDR1
                                                          register value */
#define _8000_AD_AN115_CMPA_LEVEL1           (0x8000U) /* ADCMPDR0 register value < AN115 converted value < ADCMPDR1
                                                          register value */

/*
    A/D Compare Level Register 1 (ADCMPLR1)
*/
#define _0000_AD_AN116_CMPA_LEVEL0           (0x0000U) /* AN116 converted value < ADCMPDR0 register value or AN116
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_AN117_CMPA_LEVEL0           (0x0000U) /* AN117 converted value < ADCMPDR0 register value or AN117
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_AN118_CMPA_LEVEL0           (0x0000U) /* AN118 converted value < ADCMPDR0 register value or AN118
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_AN119_CMPA_LEVEL0           (0x0000U) /* AN119 converted value < ADCMPDR0 register value or AN119
                                                          converted value > ADCMPDR1 register value */
#define _0000_AD_AN120_CMPA_LEVEL0           (0x0000U) /* AN120 converted value < ADCMPDR0 register value or AN120
                                                          converted value > ADCMPDR1 register value */
#define _0001_AD_AN116_CMPA_LEVEL1           (0x0001U) /* ADCMPDR0 register value < AN116 converted value < ADCMPDR1
                                                          register value */
#define _0002_AD_AN117_CMPA_LEVEL1           (0x0002U) /* ADCMPDR0 register value < AN117 converted value < ADCMPDR1
                                                          register value */
#define _0004_AD_AN118_CMPA_LEVEL1           (0x0004U) /* ADCMPDR0 register value < AN118 converted value < ADCMPDR1
                                                          register value */
#define _0008_AD_AN119_CMPA_LEVEL1           (0x0008U) /* ADCMPDR0 register value < AN119 converted value < ADCMPDR1
                                                          register value */
#define _0010_AD_AN120_CMPA_LEVEL1           (0x0010U) /* ADCMPDR0 register value < AN120 converted value < ADCMPDR1
                                                          register value */

/* 
    A/D Compare Level Extended Register (ADCMPLER)
*/
/* Temperature Sensor Output Compare Level Select(CMPLTS) */
#define _00_AD_TEMP_CMPA_LEVEL0              (0x00U) /* Temperature converted value < ADCMPDR0 register value or 
                                                        Temperature converted value > ADCMPDR1 register value */ 
#define _01_AD_TEMP_CMPA_LEVEL1              (0x01U) /* ADCMPDR0 register value < Temperature converted value < ADCMPDR1
                                                        register value */
/* Internal Reference Voltage Compare Level Select (CMPLOC) */
#define _00_AD_IREF_CMPA_LEVEL0              (0x00U) /* Internal converted value < ADCMPDR0 register value or 
                                                        Internal converted value > ADCMPDR1 register value */ 
#define _02_AD_IREF_CMPA_LEVEL1              (0x02U) /* ADCMPDR0 register value < Internal converted value < ADCMPDR1
                                                        register value */

/*
    Interrupt Source Priority Register n (IPRn)
*/
/* Interrupt Priority Level Select (IPR[3:0]) */
#define _00_AD_PRIORITY_LEVEL0               (0x00U) /* Level 0 (interrupt disabled) */
#define _01_AD_PRIORITY_LEVEL1               (0x01U) /* Level 1 */
#define _02_AD_PRIORITY_LEVEL2               (0x02U) /* Level 2 */
#define _03_AD_PRIORITY_LEVEL3               (0x03U) /* Level 3 */
#define _04_AD_PRIORITY_LEVEL4               (0x04U) /* Level 4 */
#define _05_AD_PRIORITY_LEVEL5               (0x05U) /* Level 5 */
#define _06_AD_PRIORITY_LEVEL6               (0x06U) /* Level 6 */
#define _07_AD_PRIORITY_LEVEL7               (0x07U) /* Level 7 */
#define _08_AD_PRIORITY_LEVEL8               (0x08U) /* Level 8 */
#define _09_AD_PRIORITY_LEVEL9               (0x09U) /* Level 9 */
#define _0A_AD_PRIORITY_LEVEL10              (0x0AU) /* Level 10 */
#define _0B_AD_PRIORITY_LEVEL11              (0x0BU) /* Level 11 */
#define _0C_AD_PRIORITY_LEVEL12              (0x0CU) /* Level 12 */
#define _0D_AD_PRIORITY_LEVEL13              (0x0DU) /* Level 13 */
#define _0E_AD_PRIORITY_LEVEL14              (0x0EU) /* Level 14 */
#define _0F_AD_PRIORITY_LEVEL15              (0x0FU) /* Level 15 (highest) */

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/
typedef enum
{
    ADCHANNEL0, ADCHANNEL1, ADCHANNEL2, ADCHANNEL3, ADCHANNEL4, ADCHANNEL5, ADCHANNEL6,
    ADCHANNEL7, ADCHANNEL8, ADCHANNEL9, ADCHANNEL10, ADCHANNEL11, ADCHANNEL12,
    ADCHANNEL13, ADCHANNEL14, ADCHANNEL15, ADCHANNEL16, ADCHANNEL17, ADCHANNEL18,
    ADCHANNEL19, ADCHANNEL20, ADSELFDIAGNOSIS, ADTEMPSENSOR, ADINTERREFVOLT,ADDATADUPLICATION,
    ADDATADUPLICATIONA, ADDATADUPLICATIONB
} ad_channel_t;

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#endif

