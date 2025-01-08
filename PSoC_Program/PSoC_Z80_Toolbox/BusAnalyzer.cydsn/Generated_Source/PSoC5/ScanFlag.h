/*******************************************************************************
* File Name: ScanFlag.h
* Version 1.71
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_ScanFlag_H)
#define CY_ISR_ScanFlag_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void ScanFlag_Start(void);
void ScanFlag_StartEx(cyisraddress address);
void ScanFlag_Stop(void);

CY_ISR_PROTO(ScanFlag_Interrupt);

void ScanFlag_SetVector(cyisraddress address);
cyisraddress ScanFlag_GetVector(void);

void ScanFlag_SetPriority(uint8 priority);
uint8 ScanFlag_GetPriority(void);

void ScanFlag_Enable(void);
uint8 ScanFlag_GetState(void);
void ScanFlag_Disable(void);

void ScanFlag_SetPending(void);
void ScanFlag_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the ScanFlag ISR. */
#define ScanFlag_INTC_VECTOR            ((reg32 *) ScanFlag__INTC_VECT)

/* Address of the ScanFlag ISR priority. */
#define ScanFlag_INTC_PRIOR             ((reg8 *) ScanFlag__INTC_PRIOR_REG)

/* Priority of the ScanFlag interrupt. */
#define ScanFlag_INTC_PRIOR_NUMBER      ScanFlag__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable ScanFlag interrupt. */
#define ScanFlag_INTC_SET_EN            ((reg32 *) ScanFlag__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the ScanFlag interrupt. */
#define ScanFlag_INTC_CLR_EN            ((reg32 *) ScanFlag__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the ScanFlag interrupt state to pending. */
#define ScanFlag_INTC_SET_PD            ((reg32 *) ScanFlag__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the ScanFlag interrupt. */
#define ScanFlag_INTC_CLR_PD            ((reg32 *) ScanFlag__INTC_CLR_PD_REG)


#endif /* CY_ISR_ScanFlag_H */


/* [] END OF FILE */
