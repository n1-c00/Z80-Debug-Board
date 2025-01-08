/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* Clk */
#define Clk__0__INTTYPE CYREG_PICU3_INTTYPE1
#define Clk__0__MASK 0x02u
#define Clk__0__PC CYREG_PRT3_PC1
#define Clk__0__PORT 3u
#define Clk__0__SHIFT 1u
#define Clk__AG CYREG_PRT3_AG
#define Clk__AMUX CYREG_PRT3_AMUX
#define Clk__BIE CYREG_PRT3_BIE
#define Clk__BIT_MASK CYREG_PRT3_BIT_MASK
#define Clk__BYP CYREG_PRT3_BYP
#define Clk__CTL CYREG_PRT3_CTL
#define Clk__DM0 CYREG_PRT3_DM0
#define Clk__DM1 CYREG_PRT3_DM1
#define Clk__DM2 CYREG_PRT3_DM2
#define Clk__DR CYREG_PRT3_DR
#define Clk__INP_DIS CYREG_PRT3_INP_DIS
#define Clk__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define Clk__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Clk__LCD_EN CYREG_PRT3_LCD_EN
#define Clk__MASK 0x02u
#define Clk__PORT 3u
#define Clk__PRT CYREG_PRT3_PRT
#define Clk__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Clk__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Clk__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Clk__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Clk__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Clk__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Clk__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Clk__PS CYREG_PRT3_PS
#define Clk__SHIFT 1u
#define Clk__SLW CYREG_PRT3_SLW

/* Data */
#define Data__0__INTTYPE CYREG_PICU5_INTTYPE0
#define Data__0__MASK 0x01u
#define Data__0__PC CYREG_PRT5_PC0
#define Data__0__PORT 5u
#define Data__0__SHIFT 0u
#define Data__1__INTTYPE CYREG_PICU5_INTTYPE1
#define Data__1__MASK 0x02u
#define Data__1__PC CYREG_PRT5_PC1
#define Data__1__PORT 5u
#define Data__1__SHIFT 1u
#define Data__2__INTTYPE CYREG_PICU5_INTTYPE2
#define Data__2__MASK 0x04u
#define Data__2__PC CYREG_PRT5_PC2
#define Data__2__PORT 5u
#define Data__2__SHIFT 2u
#define Data__3__INTTYPE CYREG_PICU5_INTTYPE3
#define Data__3__MASK 0x08u
#define Data__3__PC CYREG_PRT5_PC3
#define Data__3__PORT 5u
#define Data__3__SHIFT 3u
#define Data__4__INTTYPE CYREG_PICU5_INTTYPE4
#define Data__4__MASK 0x10u
#define Data__4__PC CYREG_PRT5_PC4
#define Data__4__PORT 5u
#define Data__4__SHIFT 4u
#define Data__5__INTTYPE CYREG_PICU5_INTTYPE5
#define Data__5__MASK 0x20u
#define Data__5__PC CYREG_PRT5_PC5
#define Data__5__PORT 5u
#define Data__5__SHIFT 5u
#define Data__6__INTTYPE CYREG_PICU5_INTTYPE6
#define Data__6__MASK 0x40u
#define Data__6__PC CYREG_PRT5_PC6
#define Data__6__PORT 5u
#define Data__6__SHIFT 6u
#define Data__7__INTTYPE CYREG_PICU5_INTTYPE7
#define Data__7__MASK 0x80u
#define Data__7__PC CYREG_PRT5_PC7
#define Data__7__PORT 5u
#define Data__7__SHIFT 7u
#define Data__AG CYREG_PRT5_AG
#define Data__AMUX CYREG_PRT5_AMUX
#define Data__BIE CYREG_PRT5_BIE
#define Data__BIT_MASK CYREG_PRT5_BIT_MASK
#define Data__BYP CYREG_PRT5_BYP
#define Data__CTL CYREG_PRT5_CTL
#define Data__DM0 CYREG_PRT5_DM0
#define Data__DM1 CYREG_PRT5_DM1
#define Data__DM2 CYREG_PRT5_DM2
#define Data__DR CYREG_PRT5_DR
#define Data__INP_DIS CYREG_PRT5_INP_DIS
#define Data__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU5_BASE
#define Data__LCD_COM_SEG CYREG_PRT5_LCD_COM_SEG
#define Data__LCD_EN CYREG_PRT5_LCD_EN
#define Data__MASK 0xFFu
#define Data__PORT 5u
#define Data__PRT CYREG_PRT5_PRT
#define Data__PRTDSI__CAPS_SEL CYREG_PRT5_CAPS_SEL
#define Data__PRTDSI__DBL_SYNC_IN CYREG_PRT5_DBL_SYNC_IN
#define Data__PRTDSI__OE_SEL0 CYREG_PRT5_OE_SEL0
#define Data__PRTDSI__OE_SEL1 CYREG_PRT5_OE_SEL1
#define Data__PRTDSI__OUT_SEL0 CYREG_PRT5_OUT_SEL0
#define Data__PRTDSI__OUT_SEL1 CYREG_PRT5_OUT_SEL1
#define Data__PRTDSI__SYNC_OUT CYREG_PRT5_SYNC_OUT
#define Data__PS CYREG_PRT5_PS
#define Data__SHIFT 0u
#define Data__SLW CYREG_PRT5_SLW

/* Rx_1 */
#define Rx_1__0__INTTYPE CYREG_PICU2_INTTYPE0
#define Rx_1__0__MASK 0x01u
#define Rx_1__0__PC CYREG_PRT2_PC0
#define Rx_1__0__PORT 2u
#define Rx_1__0__SHIFT 0u
#define Rx_1__AG CYREG_PRT2_AG
#define Rx_1__AMUX CYREG_PRT2_AMUX
#define Rx_1__BIE CYREG_PRT2_BIE
#define Rx_1__BIT_MASK CYREG_PRT2_BIT_MASK
#define Rx_1__BYP CYREG_PRT2_BYP
#define Rx_1__CTL CYREG_PRT2_CTL
#define Rx_1__DM0 CYREG_PRT2_DM0
#define Rx_1__DM1 CYREG_PRT2_DM1
#define Rx_1__DM2 CYREG_PRT2_DM2
#define Rx_1__DR CYREG_PRT2_DR
#define Rx_1__INP_DIS CYREG_PRT2_INP_DIS
#define Rx_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Rx_1__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Rx_1__LCD_EN CYREG_PRT2_LCD_EN
#define Rx_1__MASK 0x01u
#define Rx_1__PORT 2u
#define Rx_1__PRT CYREG_PRT2_PRT
#define Rx_1__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Rx_1__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Rx_1__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Rx_1__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Rx_1__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Rx_1__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Rx_1__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Rx_1__PS CYREG_PRT2_PS
#define Rx_1__SHIFT 0u
#define Rx_1__SLW CYREG_PRT2_SLW

/* Tx_1 */
#define Tx_1__0__INTTYPE CYREG_PICU2_INTTYPE1
#define Tx_1__0__MASK 0x02u
#define Tx_1__0__PC CYREG_PRT2_PC1
#define Tx_1__0__PORT 2u
#define Tx_1__0__SHIFT 1u
#define Tx_1__AG CYREG_PRT2_AG
#define Tx_1__AMUX CYREG_PRT2_AMUX
#define Tx_1__BIE CYREG_PRT2_BIE
#define Tx_1__BIT_MASK CYREG_PRT2_BIT_MASK
#define Tx_1__BYP CYREG_PRT2_BYP
#define Tx_1__CTL CYREG_PRT2_CTL
#define Tx_1__DM0 CYREG_PRT2_DM0
#define Tx_1__DM1 CYREG_PRT2_DM1
#define Tx_1__DM2 CYREG_PRT2_DM2
#define Tx_1__DR CYREG_PRT2_DR
#define Tx_1__INP_DIS CYREG_PRT2_INP_DIS
#define Tx_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Tx_1__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Tx_1__LCD_EN CYREG_PRT2_LCD_EN
#define Tx_1__MASK 0x02u
#define Tx_1__PORT 2u
#define Tx_1__PRT CYREG_PRT2_PRT
#define Tx_1__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Tx_1__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Tx_1__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Tx_1__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Tx_1__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Tx_1__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Tx_1__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Tx_1__PS CYREG_PRT2_PS
#define Tx_1__SHIFT 1u
#define Tx_1__SLW CYREG_PRT2_SLW

/* UART */
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB11_12_ACTL
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB11_12_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB11_12_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB11_12_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB11_12_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB11_12_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB11_12_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB11_12_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB11_12_MSK
#define UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB11_ACTL
#define UART_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_B0_UDB11_CTL
#define UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_B0_UDB11_ST_CTL
#define UART_BUART_sRX_RxBitCounter__COUNT_REG CYREG_B0_UDB11_CTL
#define UART_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_B0_UDB11_ST_CTL
#define UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB11_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB11_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_B0_UDB11_MSK
#define UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB11_12_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB11_12_ST
#define UART_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_B0_UDB11_MSK
#define UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB11_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB11_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB11_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB11_ST_CTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB11_ST_CTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_B0_UDB11_ST
#define UART_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_B0_UDB12_13_A0
#define UART_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_B0_UDB12_13_A1
#define UART_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_B0_UDB12_13_D0
#define UART_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_B0_UDB12_13_D1
#define UART_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB12_13_ACTL
#define UART_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_B0_UDB12_13_F0
#define UART_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_B0_UDB12_13_F1
#define UART_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_B0_UDB12_A0_A1
#define UART_BUART_sRX_RxShifter_u0__A0_REG CYREG_B0_UDB12_A0
#define UART_BUART_sRX_RxShifter_u0__A1_REG CYREG_B0_UDB12_A1
#define UART_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_B0_UDB12_D0_D1
#define UART_BUART_sRX_RxShifter_u0__D0_REG CYREG_B0_UDB12_D0
#define UART_BUART_sRX_RxShifter_u0__D1_REG CYREG_B0_UDB12_D1
#define UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB12_ACTL
#define UART_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_B0_UDB12_F0_F1
#define UART_BUART_sRX_RxShifter_u0__F0_REG CYREG_B0_UDB12_F0
#define UART_BUART_sRX_RxShifter_u0__F1_REG CYREG_B0_UDB12_F1
#define UART_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB12_13_ACTL
#define UART_BUART_sRX_RxSts__16BIT_STATUS_REG CYREG_B0_UDB12_13_ST
#define UART_BUART_sRX_RxSts__3__MASK 0x08u
#define UART_BUART_sRX_RxSts__3__POS 3
#define UART_BUART_sRX_RxSts__4__MASK 0x10u
#define UART_BUART_sRX_RxSts__4__POS 4
#define UART_BUART_sRX_RxSts__5__MASK 0x20u
#define UART_BUART_sRX_RxSts__5__POS 5
#define UART_BUART_sRX_RxSts__MASK 0x38u
#define UART_BUART_sRX_RxSts__MASK_REG CYREG_B0_UDB12_MSK
#define UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB12_ACTL
#define UART_BUART_sRX_RxSts__STATUS_REG CYREG_B0_UDB12_ST
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B0_UDB08_09_A0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B0_UDB08_09_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B0_UDB08_09_D0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B0_UDB08_09_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB08_09_ACTL
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B0_UDB08_09_F0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B0_UDB08_09_F1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B0_UDB08_A0_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B0_UDB08_A0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B0_UDB08_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B0_UDB08_D0_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B0_UDB08_D0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B0_UDB08_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B0_UDB08_ACTL
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B0_UDB08_F0_F1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B0_UDB08_F0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B0_UDB08_F1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__MSK_DP_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__PER_DP_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define UART_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B0_UDB11_12_A0
#define UART_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B0_UDB11_12_A1
#define UART_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B0_UDB11_12_D0
#define UART_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B0_UDB11_12_D1
#define UART_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB11_12_ACTL
#define UART_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B0_UDB11_12_F0
#define UART_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B0_UDB11_12_F1
#define UART_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B0_UDB11_A0_A1
#define UART_BUART_sTX_TxShifter_u0__A0_REG CYREG_B0_UDB11_A0
#define UART_BUART_sTX_TxShifter_u0__A1_REG CYREG_B0_UDB11_A1
#define UART_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B0_UDB11_D0_D1
#define UART_BUART_sTX_TxShifter_u0__D0_REG CYREG_B0_UDB11_D0
#define UART_BUART_sTX_TxShifter_u0__D1_REG CYREG_B0_UDB11_D1
#define UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB11_ACTL
#define UART_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B0_UDB11_F0_F1
#define UART_BUART_sTX_TxShifter_u0__F0_REG CYREG_B0_UDB11_F0
#define UART_BUART_sTX_TxShifter_u0__F1_REG CYREG_B0_UDB11_F1
#define UART_BUART_sTX_TxShifter_u0__MSK_DP_AUX_CTL_REG CYREG_B0_UDB11_MSK_ACTL
#define UART_BUART_sTX_TxShifter_u0__PER_DP_AUX_CTL_REG CYREG_B0_UDB11_MSK_ACTL
#define UART_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_BUART_sTX_TxSts__0__POS 0
#define UART_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_BUART_sTX_TxSts__1__POS 1
#define UART_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB08_09_ACTL
#define UART_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B0_UDB08_09_ST
#define UART_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_BUART_sTX_TxSts__2__POS 2
#define UART_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_BUART_sTX_TxSts__3__POS 3
#define UART_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_BUART_sTX_TxSts__MASK_REG CYREG_B0_UDB08_MSK
#define UART_BUART_sTX_TxSts__MASK_ST_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define UART_BUART_sTX_TxSts__PER_ST_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB08_ACTL
#define UART_BUART_sTX_TxSts__STATUS_CNT_REG CYREG_B0_UDB08_ST_CTL
#define UART_BUART_sTX_TxSts__STATUS_CONTROL_REG CYREG_B0_UDB08_ST_CTL
#define UART_BUART_sTX_TxSts__STATUS_REG CYREG_B0_UDB08_ST
#define UART_IntClock__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define UART_IntClock__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define UART_IntClock__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define UART_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_IntClock__INDEX 0x00u
#define UART_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_IntClock__PM_ACT_MSK 0x01u
#define UART_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_IntClock__PM_STBY_MSK 0x01u

/* isr_1 */
#define isr_1__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define isr_1__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define isr_1__INTC_MASK 0x01u
#define isr_1__INTC_NUMBER 0u
#define isr_1__INTC_PRIOR_NUM 6u
#define isr_1__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define isr_1__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define isr_1__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* isr_2 */
#define isr_2__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define isr_2__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define isr_2__INTC_MASK 0x02u
#define isr_2__INTC_NUMBER 1u
#define isr_2__INTC_PRIOR_NUM 7u
#define isr_2__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define isr_2__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define isr_2__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Ctrl_M1 */
#define Ctrl_M1__0__INTTYPE CYREG_PICU3_INTTYPE2
#define Ctrl_M1__0__MASK 0x04u
#define Ctrl_M1__0__PC CYREG_PRT3_PC2
#define Ctrl_M1__0__PORT 3u
#define Ctrl_M1__0__SHIFT 2u
#define Ctrl_M1__AG CYREG_PRT3_AG
#define Ctrl_M1__AMUX CYREG_PRT3_AMUX
#define Ctrl_M1__BIE CYREG_PRT3_BIE
#define Ctrl_M1__BIT_MASK CYREG_PRT3_BIT_MASK
#define Ctrl_M1__BYP CYREG_PRT3_BYP
#define Ctrl_M1__CTL CYREG_PRT3_CTL
#define Ctrl_M1__DM0 CYREG_PRT3_DM0
#define Ctrl_M1__DM1 CYREG_PRT3_DM1
#define Ctrl_M1__DM2 CYREG_PRT3_DM2
#define Ctrl_M1__DR CYREG_PRT3_DR
#define Ctrl_M1__INP_DIS CYREG_PRT3_INP_DIS
#define Ctrl_M1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define Ctrl_M1__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Ctrl_M1__LCD_EN CYREG_PRT3_LCD_EN
#define Ctrl_M1__MASK 0x04u
#define Ctrl_M1__PORT 3u
#define Ctrl_M1__PRT CYREG_PRT3_PRT
#define Ctrl_M1__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Ctrl_M1__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Ctrl_M1__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Ctrl_M1__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Ctrl_M1__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Ctrl_M1__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Ctrl_M1__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Ctrl_M1__PS CYREG_PRT3_PS
#define Ctrl_M1__SHIFT 2u
#define Ctrl_M1__SLW CYREG_PRT3_SLW

/* Ctrl_RD */
#define Ctrl_RD__0__INTTYPE CYREG_PICU3_INTTYPE4
#define Ctrl_RD__0__MASK 0x10u
#define Ctrl_RD__0__PC CYREG_PRT3_PC4
#define Ctrl_RD__0__PORT 3u
#define Ctrl_RD__0__SHIFT 4u
#define Ctrl_RD__AG CYREG_PRT3_AG
#define Ctrl_RD__AMUX CYREG_PRT3_AMUX
#define Ctrl_RD__BIE CYREG_PRT3_BIE
#define Ctrl_RD__BIT_MASK CYREG_PRT3_BIT_MASK
#define Ctrl_RD__BYP CYREG_PRT3_BYP
#define Ctrl_RD__CTL CYREG_PRT3_CTL
#define Ctrl_RD__DM0 CYREG_PRT3_DM0
#define Ctrl_RD__DM1 CYREG_PRT3_DM1
#define Ctrl_RD__DM2 CYREG_PRT3_DM2
#define Ctrl_RD__DR CYREG_PRT3_DR
#define Ctrl_RD__INP_DIS CYREG_PRT3_INP_DIS
#define Ctrl_RD__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define Ctrl_RD__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Ctrl_RD__LCD_EN CYREG_PRT3_LCD_EN
#define Ctrl_RD__MASK 0x10u
#define Ctrl_RD__PORT 3u
#define Ctrl_RD__PRT CYREG_PRT3_PRT
#define Ctrl_RD__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Ctrl_RD__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Ctrl_RD__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Ctrl_RD__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Ctrl_RD__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Ctrl_RD__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Ctrl_RD__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Ctrl_RD__PS CYREG_PRT3_PS
#define Ctrl_RD__SHIFT 4u
#define Ctrl_RD__SLW CYREG_PRT3_SLW

/* Ctrl_WR */
#define Ctrl_WR__0__INTTYPE CYREG_PICU3_INTTYPE5
#define Ctrl_WR__0__MASK 0x20u
#define Ctrl_WR__0__PC CYREG_PRT3_PC5
#define Ctrl_WR__0__PORT 3u
#define Ctrl_WR__0__SHIFT 5u
#define Ctrl_WR__AG CYREG_PRT3_AG
#define Ctrl_WR__AMUX CYREG_PRT3_AMUX
#define Ctrl_WR__BIE CYREG_PRT3_BIE
#define Ctrl_WR__BIT_MASK CYREG_PRT3_BIT_MASK
#define Ctrl_WR__BYP CYREG_PRT3_BYP
#define Ctrl_WR__CTL CYREG_PRT3_CTL
#define Ctrl_WR__DM0 CYREG_PRT3_DM0
#define Ctrl_WR__DM1 CYREG_PRT3_DM1
#define Ctrl_WR__DM2 CYREG_PRT3_DM2
#define Ctrl_WR__DR CYREG_PRT3_DR
#define Ctrl_WR__INP_DIS CYREG_PRT3_INP_DIS
#define Ctrl_WR__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define Ctrl_WR__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Ctrl_WR__LCD_EN CYREG_PRT3_LCD_EN
#define Ctrl_WR__MASK 0x20u
#define Ctrl_WR__PORT 3u
#define Ctrl_WR__PRT CYREG_PRT3_PRT
#define Ctrl_WR__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Ctrl_WR__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Ctrl_WR__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Ctrl_WR__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Ctrl_WR__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Ctrl_WR__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Ctrl_WR__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Ctrl_WR__PS CYREG_PRT3_PS
#define Ctrl_WR__SHIFT 5u
#define Ctrl_WR__SLW CYREG_PRT3_SLW

/* Addr_LSB */
#define Addr_LSB__0__INTTYPE CYREG_PICU0_INTTYPE0
#define Addr_LSB__0__MASK 0x01u
#define Addr_LSB__0__PC CYREG_PRT0_PC0
#define Addr_LSB__0__PORT 0u
#define Addr_LSB__0__SHIFT 0u
#define Addr_LSB__1__INTTYPE CYREG_PICU0_INTTYPE1
#define Addr_LSB__1__MASK 0x02u
#define Addr_LSB__1__PC CYREG_PRT0_PC1
#define Addr_LSB__1__PORT 0u
#define Addr_LSB__1__SHIFT 1u
#define Addr_LSB__2__INTTYPE CYREG_PICU0_INTTYPE2
#define Addr_LSB__2__MASK 0x04u
#define Addr_LSB__2__PC CYREG_PRT0_PC2
#define Addr_LSB__2__PORT 0u
#define Addr_LSB__2__SHIFT 2u
#define Addr_LSB__3__INTTYPE CYREG_PICU0_INTTYPE3
#define Addr_LSB__3__MASK 0x08u
#define Addr_LSB__3__PC CYREG_PRT0_PC3
#define Addr_LSB__3__PORT 0u
#define Addr_LSB__3__SHIFT 3u
#define Addr_LSB__4__INTTYPE CYREG_PICU0_INTTYPE4
#define Addr_LSB__4__MASK 0x10u
#define Addr_LSB__4__PC CYREG_PRT0_PC4
#define Addr_LSB__4__PORT 0u
#define Addr_LSB__4__SHIFT 4u
#define Addr_LSB__5__INTTYPE CYREG_PICU0_INTTYPE5
#define Addr_LSB__5__MASK 0x20u
#define Addr_LSB__5__PC CYREG_PRT0_PC5
#define Addr_LSB__5__PORT 0u
#define Addr_LSB__5__SHIFT 5u
#define Addr_LSB__6__INTTYPE CYREG_PICU0_INTTYPE6
#define Addr_LSB__6__MASK 0x40u
#define Addr_LSB__6__PC CYREG_PRT0_PC6
#define Addr_LSB__6__PORT 0u
#define Addr_LSB__6__SHIFT 6u
#define Addr_LSB__7__INTTYPE CYREG_PICU0_INTTYPE7
#define Addr_LSB__7__MASK 0x80u
#define Addr_LSB__7__PC CYREG_PRT0_PC7
#define Addr_LSB__7__PORT 0u
#define Addr_LSB__7__SHIFT 7u
#define Addr_LSB__AG CYREG_PRT0_AG
#define Addr_LSB__AMUX CYREG_PRT0_AMUX
#define Addr_LSB__BIE CYREG_PRT0_BIE
#define Addr_LSB__BIT_MASK CYREG_PRT0_BIT_MASK
#define Addr_LSB__BYP CYREG_PRT0_BYP
#define Addr_LSB__CTL CYREG_PRT0_CTL
#define Addr_LSB__DM0 CYREG_PRT0_DM0
#define Addr_LSB__DM1 CYREG_PRT0_DM1
#define Addr_LSB__DM2 CYREG_PRT0_DM2
#define Addr_LSB__DR CYREG_PRT0_DR
#define Addr_LSB__INP_DIS CYREG_PRT0_INP_DIS
#define Addr_LSB__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define Addr_LSB__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Addr_LSB__LCD_EN CYREG_PRT0_LCD_EN
#define Addr_LSB__MASK 0xFFu
#define Addr_LSB__PORT 0u
#define Addr_LSB__PRT CYREG_PRT0_PRT
#define Addr_LSB__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Addr_LSB__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Addr_LSB__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Addr_LSB__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Addr_LSB__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Addr_LSB__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Addr_LSB__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Addr_LSB__PS CYREG_PRT0_PS
#define Addr_LSB__SHIFT 0u
#define Addr_LSB__SLW CYREG_PRT0_SLW

/* Ctrl_MREQ */
#define Ctrl_MREQ__0__INTTYPE CYREG_PICU3_INTTYPE3
#define Ctrl_MREQ__0__MASK 0x08u
#define Ctrl_MREQ__0__PC CYREG_PRT3_PC3
#define Ctrl_MREQ__0__PORT 3u
#define Ctrl_MREQ__0__SHIFT 3u
#define Ctrl_MREQ__AG CYREG_PRT3_AG
#define Ctrl_MREQ__AMUX CYREG_PRT3_AMUX
#define Ctrl_MREQ__BIE CYREG_PRT3_BIE
#define Ctrl_MREQ__BIT_MASK CYREG_PRT3_BIT_MASK
#define Ctrl_MREQ__BYP CYREG_PRT3_BYP
#define Ctrl_MREQ__CTL CYREG_PRT3_CTL
#define Ctrl_MREQ__DM0 CYREG_PRT3_DM0
#define Ctrl_MREQ__DM1 CYREG_PRT3_DM1
#define Ctrl_MREQ__DM2 CYREG_PRT3_DM2
#define Ctrl_MREQ__DR CYREG_PRT3_DR
#define Ctrl_MREQ__INP_DIS CYREG_PRT3_INP_DIS
#define Ctrl_MREQ__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define Ctrl_MREQ__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Ctrl_MREQ__LCD_EN CYREG_PRT3_LCD_EN
#define Ctrl_MREQ__MASK 0x08u
#define Ctrl_MREQ__PORT 3u
#define Ctrl_MREQ__PRT CYREG_PRT3_PRT
#define Ctrl_MREQ__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Ctrl_MREQ__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Ctrl_MREQ__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Ctrl_MREQ__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Ctrl_MREQ__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Ctrl_MREQ__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Ctrl_MREQ__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Ctrl_MREQ__PS CYREG_PRT3_PS
#define Ctrl_MREQ__SHIFT 3u
#define Ctrl_MREQ__SLW CYREG_PRT3_SLW

/* Z80_Clock */
#define Z80_Clock__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define Z80_Clock__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define Z80_Clock__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define Z80_Clock__CFG2_SRC_SEL_MASK 0x07u
#define Z80_Clock__INDEX 0x01u
#define Z80_Clock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Z80_Clock__PM_ACT_MSK 0x02u
#define Z80_Clock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Z80_Clock__PM_STBY_MSK 0x02u

/* Clock_Ctrl */
#define Clock_Ctrl_Sync_ctrl_reg__0__MASK 0x01u
#define Clock_Ctrl_Sync_ctrl_reg__0__POS 0
#define Clock_Ctrl_Sync_ctrl_reg__1__MASK 0x02u
#define Clock_Ctrl_Sync_ctrl_reg__1__POS 1
#define Clock_Ctrl_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB08_09_ACTL
#define Clock_Ctrl_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB08_09_CTL
#define Clock_Ctrl_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB08_09_CTL
#define Clock_Ctrl_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB08_09_CTL
#define Clock_Ctrl_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB08_09_CTL
#define Clock_Ctrl_Sync_ctrl_reg__16BIT_MASK_MASK_REG CYREG_B0_UDB08_09_MSK
#define Clock_Ctrl_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB08_09_MSK
#define Clock_Ctrl_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB08_09_MSK
#define Clock_Ctrl_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB08_09_MSK
#define Clock_Ctrl_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_B0_UDB08_ACTL
#define Clock_Ctrl_Sync_ctrl_reg__CONTROL_REG CYREG_B0_UDB08_CTL
#define Clock_Ctrl_Sync_ctrl_reg__CONTROL_ST_REG CYREG_B0_UDB08_ST_CTL
#define Clock_Ctrl_Sync_ctrl_reg__COUNT_REG CYREG_B0_UDB08_CTL
#define Clock_Ctrl_Sync_ctrl_reg__COUNT_ST_REG CYREG_B0_UDB08_ST_CTL
#define Clock_Ctrl_Sync_ctrl_reg__MASK 0x03u
#define Clock_Ctrl_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define Clock_Ctrl_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define Clock_Ctrl_Sync_ctrl_reg__PERIOD_REG CYREG_B0_UDB08_MSK

/* Ctrl_Reset */
#define Ctrl_Reset__0__INTTYPE CYREG_PICU3_INTTYPE0
#define Ctrl_Reset__0__MASK 0x01u
#define Ctrl_Reset__0__PC CYREG_PRT3_PC0
#define Ctrl_Reset__0__PORT 3u
#define Ctrl_Reset__0__SHIFT 0u
#define Ctrl_Reset__AG CYREG_PRT3_AG
#define Ctrl_Reset__AMUX CYREG_PRT3_AMUX
#define Ctrl_Reset__BIE CYREG_PRT3_BIE
#define Ctrl_Reset__BIT_MASK CYREG_PRT3_BIT_MASK
#define Ctrl_Reset__BYP CYREG_PRT3_BYP
#define Ctrl_Reset__CTL CYREG_PRT3_CTL
#define Ctrl_Reset__DM0 CYREG_PRT3_DM0
#define Ctrl_Reset__DM1 CYREG_PRT3_DM1
#define Ctrl_Reset__DM2 CYREG_PRT3_DM2
#define Ctrl_Reset__DR CYREG_PRT3_DR
#define Ctrl_Reset__INP_DIS CYREG_PRT3_INP_DIS
#define Ctrl_Reset__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define Ctrl_Reset__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Ctrl_Reset__LCD_EN CYREG_PRT3_LCD_EN
#define Ctrl_Reset__MASK 0x01u
#define Ctrl_Reset__PORT 3u
#define Ctrl_Reset__PRT CYREG_PRT3_PRT
#define Ctrl_Reset__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Ctrl_Reset__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Ctrl_Reset__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Ctrl_Reset__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Ctrl_Reset__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Ctrl_Reset__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Ctrl_Reset__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Ctrl_Reset__PS CYREG_PRT3_PS
#define Ctrl_Reset__SHIFT 0u
#define Ctrl_Reset__SLW CYREG_PRT3_SLW

/* User_Button */
#define User_Button__0__INTTYPE CYREG_PICU1_INTTYPE2
#define User_Button__0__MASK 0x04u
#define User_Button__0__PC CYREG_PRT1_PC2
#define User_Button__0__PORT 1u
#define User_Button__0__SHIFT 2u
#define User_Button__AG CYREG_PRT1_AG
#define User_Button__AMUX CYREG_PRT1_AMUX
#define User_Button__BIE CYREG_PRT1_BIE
#define User_Button__BIT_MASK CYREG_PRT1_BIT_MASK
#define User_Button__BYP CYREG_PRT1_BYP
#define User_Button__CTL CYREG_PRT1_CTL
#define User_Button__DM0 CYREG_PRT1_DM0
#define User_Button__DM1 CYREG_PRT1_DM1
#define User_Button__DM2 CYREG_PRT1_DM2
#define User_Button__DR CYREG_PRT1_DR
#define User_Button__INP_DIS CYREG_PRT1_INP_DIS
#define User_Button__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define User_Button__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define User_Button__LCD_EN CYREG_PRT1_LCD_EN
#define User_Button__MASK 0x04u
#define User_Button__PORT 1u
#define User_Button__PRT CYREG_PRT1_PRT
#define User_Button__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define User_Button__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define User_Button__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define User_Button__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define User_Button__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define User_Button__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define User_Button__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define User_Button__PS CYREG_PRT1_PS
#define User_Button__SHIFT 2u
#define User_Button__SLW CYREG_PRT1_SLW

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "BusAnalyzer"
#define CY_VERSION "PSoC Creator  4.4"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 26u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E160069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 26u
#define CYDEV_CHIP_MEMBER_4AA 25u
#define CYDEV_CHIP_MEMBER_4AB 30u
#define CYDEV_CHIP_MEMBER_4AC 14u
#define CYDEV_CHIP_MEMBER_4AD 15u
#define CYDEV_CHIP_MEMBER_4AE 16u
#define CYDEV_CHIP_MEMBER_4D 20u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 27u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 24u
#define CYDEV_CHIP_MEMBER_4I 32u
#define CYDEV_CHIP_MEMBER_4J 21u
#define CYDEV_CHIP_MEMBER_4K 22u
#define CYDEV_CHIP_MEMBER_4L 31u
#define CYDEV_CHIP_MEMBER_4M 29u
#define CYDEV_CHIP_MEMBER_4N 11u
#define CYDEV_CHIP_MEMBER_4O 8u
#define CYDEV_CHIP_MEMBER_4P 28u
#define CYDEV_CHIP_MEMBER_4Q 17u
#define CYDEV_CHIP_MEMBER_4R 9u
#define CYDEV_CHIP_MEMBER_4S 12u
#define CYDEV_CHIP_MEMBER_4T 10u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 23u
#define CYDEV_CHIP_MEMBER_4W 13u
#define CYDEV_CHIP_MEMBER_4X 7u
#define CYDEV_CHIP_MEMBER_4Y 18u
#define CYDEV_CHIP_MEMBER_4Z 19u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 33u
#define CYDEV_CHIP_MEMBER_FM3 37u
#define CYDEV_CHIP_MEMBER_FM4 38u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 34u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 35u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 36u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AD_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AE_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4W_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4X_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000003u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */