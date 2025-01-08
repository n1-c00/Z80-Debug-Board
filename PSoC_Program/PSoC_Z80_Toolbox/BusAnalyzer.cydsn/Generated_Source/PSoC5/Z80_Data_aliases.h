/*******************************************************************************
* File Name: Z80_Data.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Z80_Data_ALIASES_H) /* Pins Z80_Data_ALIASES_H */
#define CY_PINS_Z80_Data_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Z80_Data_0			(Z80_Data__0__PC)
#define Z80_Data_0_INTR	((uint16)((uint16)0x0001u << Z80_Data__0__SHIFT))

#define Z80_Data_1			(Z80_Data__1__PC)
#define Z80_Data_1_INTR	((uint16)((uint16)0x0001u << Z80_Data__1__SHIFT))

#define Z80_Data_2			(Z80_Data__2__PC)
#define Z80_Data_2_INTR	((uint16)((uint16)0x0001u << Z80_Data__2__SHIFT))

#define Z80_Data_3			(Z80_Data__3__PC)
#define Z80_Data_3_INTR	((uint16)((uint16)0x0001u << Z80_Data__3__SHIFT))

#define Z80_Data_4			(Z80_Data__4__PC)
#define Z80_Data_4_INTR	((uint16)((uint16)0x0001u << Z80_Data__4__SHIFT))

#define Z80_Data_5			(Z80_Data__5__PC)
#define Z80_Data_5_INTR	((uint16)((uint16)0x0001u << Z80_Data__5__SHIFT))

#define Z80_Data_6			(Z80_Data__6__PC)
#define Z80_Data_6_INTR	((uint16)((uint16)0x0001u << Z80_Data__6__SHIFT))

#define Z80_Data_7			(Z80_Data__7__PC)
#define Z80_Data_7_INTR	((uint16)((uint16)0x0001u << Z80_Data__7__SHIFT))

#define Z80_Data_INTR_ALL	 ((uint16)(Z80_Data_0_INTR| Z80_Data_1_INTR| Z80_Data_2_INTR| Z80_Data_3_INTR| Z80_Data_4_INTR| Z80_Data_5_INTR| Z80_Data_6_INTR| Z80_Data_7_INTR))

#endif /* End Pins Z80_Data_ALIASES_H */


/* [] END OF FILE */
