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
* File Name        : Config_S12AD0.c
* Component Version: 1.13.0
* Device(s)        : R5F571MLCxFC
* Description      : This file implements device driver for Config_S12AD0.
***********************************************************************************************************************/

/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "Config_S12AD0.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_S12AD0_Create
* Description  : This function initializes the S12AD0 channel
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/

void R_Config_S12AD0_Create(void)
{
    /* Cancel S12AD0 module stop state */
    MSTP(S12AD) = 0U;

    /* Disable and clear S12ADI0 S12CMPI0 interrupt flags */
    S12AD.ADCSR.BIT.ADIE = 0U;
    S12AD.ADCMPCR.BIT.CMPIE = 0U;

    /* Set S12AD0 control registers */
    S12AD.ADDISCR.BYTE = _00_AD_DISCONECT_UNUSED;
    S12AD.ADCSR.WORD = _0000_AD_SYNCASYNCTRG_DISABLE | _4000_AD_CONTINUOUS_SCAN_MODE | 
                       _0000_AD_SCAN_END_INTERRUPT_DISABLE;
    S12AD.ADCER.WORD = _0000_AD_AUTO_CLEARING_DISABLE | _0000_AD_RIGHT_ALIGNMENT | _0000_AD_SELFTDIAGST_DISABLE | 
                       _0000_AD_RESOLUTION_12BIT;
    S12AD.ADADC.BYTE = _00_AD_1_TIME_CONVERSION | _00_AD_ADDITION_MODE;

    /* Set channels and sampling time */
    S12AD.ADANSA0.WORD = _0001_AD_ANx00_USED;
    S12AD.ADSSTR0 = _0B_AD0_SAMPLING_STATE_0;

    /* Set compare control register */
    S12AD.ADCMPCR.BYTE = _00_AD_COMPARISON_INTERRUPT_DISABLE | _00_AD_WINDOWFUNCTION_DISABLE;
    S12AD.ADCMPDR0 = 0x0000U;

    /* Set AN000 pin */
    PORT4.PMR.BYTE &= 0xFEU;
    PORT4.PDR.BYTE &= 0xFEU;
    MPC.P40PFS.BYTE = 0x80U;

    R_Config_S12AD0_Create_UserInit();
}

/***********************************************************************************************************************
* Function Name: R_Config_S12AD0_Start
* Description  : This function starts the AD0 converter
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/

void R_Config_S12AD0_Start(void)
{
    S12AD.ADCSR.BIT.ADST = 1U;
}

/***********************************************************************************************************************
* Function Name: R_Config_S12AD0_Stop
* Description  : This function stop the AD0 converter
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/

void R_Config_S12AD0_Stop(void)
{
    S12AD.ADCSR.BIT.ADST = 0U;
}

/***********************************************************************************************************************
* Function Name: R_Config_S12AD0_Get_ValueResult
* Description  : This function gets result from the AD0 converter
* Arguments    : channel -
*                    channel of data register to be read
*                buffer -
*                    buffer pointer
* Return Value : None
***********************************************************************************************************************/

void R_Config_S12AD0_Get_ValueResult(ad_channel_t channel, uint16_t * const buffer)
{
    switch (channel)
    {
        case ADSELFDIAGNOSIS:
        {
            *buffer = (uint16_t)(S12AD.ADRD.WORD);
            break;
        }
        case ADCHANNEL0:
        {
            *buffer = (uint16_t)(S12AD.ADDR0);
            break;
        }
        case ADCHANNEL1:
        {
            *buffer = (uint16_t)(S12AD.ADDR1);
            break;
        }
        case ADCHANNEL2:
        {
            *buffer = (uint16_t)(S12AD.ADDR2);
            break;
        }
        case ADCHANNEL3:
        {
            *buffer = (uint16_t)(S12AD.ADDR3);
            break;
        }
        case ADCHANNEL4:
        {
            *buffer = (uint16_t)(S12AD.ADDR4);
            break;
        }
        case ADCHANNEL5:
        {
            *buffer = (uint16_t)(S12AD.ADDR5);
            break;
        }
        case ADCHANNEL6:
        {
            *buffer = (uint16_t)(S12AD.ADDR6);
            break;
        }
        case ADCHANNEL7:
        {
            *buffer = (uint16_t)(S12AD.ADDR7);
            break;
        }
        case ADDATADUPLICATION:
        {
            *buffer = (uint16_t)(S12AD.ADDBLDR.WORD);
            break;
        }
        case ADDATADUPLICATIONA:
        {
            *buffer = (uint16_t)(S12AD.ADDBLDRA);
            break;
        }
        case ADDATADUPLICATIONB:
        {
            *buffer = (uint16_t)(S12AD.ADDBLDRB);
            break;
        }
        default:
        {
            break;
        }
    }
}

/***********************************************************************************************************************
* Function Name: R_Config_S12AD0_Set_CompareValue
* Description  : This function sets reference data for AD0 comparison
* Arguments    : reg_value0 -
*                    reference data 0 for comparison
*                reg_value1 -
*                    reference data 1 for comparison
* Return Value : None
***********************************************************************************************************************/

void R_Config_S12AD0_Set_CompareValue(uint16_t reg_value0, uint16_t reg_value1)
{
    S12AD.ADCMPDR0 = reg_value0;
    S12AD.ADCMPDR1 = reg_value1;
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
