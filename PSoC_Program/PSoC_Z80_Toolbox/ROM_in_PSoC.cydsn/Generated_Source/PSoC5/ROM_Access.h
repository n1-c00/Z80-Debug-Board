/*******************************************************************************
* File Name: ROM_Access.h
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
#if !defined(CY_ISR_ROM_Access_H)
#define CY_ISR_ROM_Access_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void ROM_Access_Start(void);
void ROM_Access_StartEx(cyisraddress address);
void ROM_Access_Stop(void);

CY_ISR_PROTO(ROM_Access_Interrupt);

void ROM_Access_SetVector(cyisraddress address);
cyisraddress ROM_Access_GetVector(void);

void ROM_Access_SetPriority(uint8 priority);
uint8 ROM_Access_GetPriority(void);

void ROM_Access_Enable(void);
uint8 ROM_Access_GetState(void);
void ROM_Access_Disable(void);

void ROM_Access_SetPending(void);
void ROM_Access_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the ROM_Access ISR. */
#define ROM_Access_INTC_VECTOR            ((reg32 *) ROM_Access__INTC_VECT)

/* Address of the ROM_Access ISR priority. */
#define ROM_Access_INTC_PRIOR             ((reg8 *) ROM_Access__INTC_PRIOR_REG)

/* Priority of the ROM_Access interrupt. */
#define ROM_Access_INTC_PRIOR_NUMBER      ROM_Access__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable ROM_Access interrupt. */
#define ROM_Access_INTC_SET_EN            ((reg32 *) ROM_Access__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the ROM_Access interrupt. */
#define ROM_Access_INTC_CLR_EN            ((reg32 *) ROM_Access__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the ROM_Access interrupt state to pending. */
#define ROM_Access_INTC_SET_PD            ((reg32 *) ROM_Access__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the ROM_Access interrupt. */
#define ROM_Access_INTC_CLR_PD            ((reg32 *) ROM_Access__INTC_CLR_PD_REG)


#endif /* CY_ISR_ROM_Access_H */


/* [] END OF FILE */
