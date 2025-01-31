/***********************************************************************
*
*  FILE        : AD_test.c
*  DATE        : 2024-10-08
*  DESCRIPTION : Main Program
*
***********************************************************************/
/***********************************************************************************************************************
	Includes
***********************************************************************************************************************/
/* Code　Generation Module */
#include "r_smc_entry.h"

/* FIT Module */
#include "r_cmt_rx_if.h"

/* For Debug(sprintf) */
#include <stdio.h>

/***********************************************************************************************************************
	DEFINE
***********************************************************************************************************************/
/* R_CMT_CreatePeriodic 第一引数用のDEFINE */
#define	CMT_FREQUENCY_10HZ	(10)		/* 100[ms]周期(10[Hz]) */

/***********************************************************************************************************************
	External RAM
***********************************************************************************************************************/

/***********************************************************************************************************************
	Public RAM
***********************************************************************************************************************/

/***********************************************************************************************************************
	Static RAM
***********************************************************************************************************************/

/***********************************************************************************************************************
	ROM
***********************************************************************************************************************/

/***********************************************************************************************************************
	Function
***********************************************************************************************************************/
void main(void);
void CallBack_CMT_100ms(void *pdata);

/**********************************************************************************************************************
* Function Name: main
* Description  : コード生成(S12AD0)/FITモジュール(CMT)の開始設定とMainループ
*				 【実行内容】
*				 1.S12ADC ユニット0 AD変換開始
*				 2.100[ms]周期(10[Hz])コンペアマッチタイマ割り込みの設定(AD変換値を取得)
* Arguments    : None
* Return Value : None
**********************************************************************************************************************/
void main(void)
{
    bool        cmt_result;		/* R_CMT_CreatePeriodicの戻り値(true:初期化成功、false：初期化失敗) */
    uint32_t    cmt_hdl;		/* R_CMT_CreatePeriodicで割り当てられたCMTチャネル */

	/* 1.S12ADC ユニット0 AD変換開始 */
    /* スマートコンフィグレータで設定したAN000のAD変換を開始する */
	R_Config_S12AD0_Start();

	/* 2.100[ms]周期(10[Hz])コンペアマッチタイマ割り込みの設定 */
	/* 引数1：要求される周波数(Hz)、引数2：コールバック関数へのポインタ、引数3：割り当てられたCMTチャネル(関数内で更新)　*/
    cmt_result = R_CMT_CreatePeriodic(CMT_FREQUENCY_10HZ, CallBack_CMT_100ms, &cmt_hdl);

    if( cmt_result == false ) {
    	/* CMTの初期化に失敗した場合の処理 */
    	printf("CMT setting failed");
    }

	while(1) {
		/* IDLE状態 */
		/* 割り込み待ち(何もしない) */
	}

}

/**********************************************************************************************************************
* Function Name: CallBack_CMT_100ms_1s
* Description  : 100[ms]周期(10[Hz])コンペアマッチタイマ割り込み
*				 【実行内容】
*				 1.AD変換値読み出し
*				 2.AD取得結果をRenesas Debug Virtual Consoleに出力
* Arguments    : None
* Return Value : None
**********************************************************************************************************************/
void CallBack_CMT_100ms(void *pdata)
{
	uint16_t	ad_conv_result;

    /* 1.AD変換値読み出し */
	/* 読み出し中のレジスタ書き換えを防ぐためAD変換停止 */
	R_Config_S12AD0_Stop();

	/* AD変換結果を取得 */
	R_Config_S12AD0_Get_ValueResult(ADCHANNEL0, (uint16_t *)&ad_conv_result);

	/* AD変換再開 */
	R_Config_S12AD0_Start();

	/* 2.AD取得結果表示(Renesas Debug Virtual Consoleに出力) */
    printf("AD Convert Result=%d\n", ad_conv_result);

}
