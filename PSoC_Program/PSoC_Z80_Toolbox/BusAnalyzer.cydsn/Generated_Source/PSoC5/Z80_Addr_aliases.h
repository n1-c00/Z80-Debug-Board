/*******************************************************************************
* File Name: Z80_Addr.h  
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

#if !defined(CY_PINS_Z80_Addr_ALIASES_H) /* Pins Z80_Addr_ALIASES_H */
#define CY_PINS_Z80_Addr_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Z80_Addr_0			(Z80_Addr__0__PC)
#define Z80_Addr_0_INTR	((uint16)((uint16)0x0001u << Z80_Addr__0__SHIFT))

#define Z80_Addr_1			(Z80_Addr__1__PC)
#define Z80_Addr_1_INTR	((uint16)((uint16)0x0001u << Z80_Addr__1__SHIFT))

#define Z80_Addr_2			(Z80_Addr__2__PC)
#define Z80_Addr_2_INTR	((uint16)((uint16)0x0001u << Z80_Addr__2__SHIFT))

#define Z80_Addr_3			(Z80_Addr__3__PC)
#define Z80_Addr_3_INTR	((uint16)((uint16)0x0001u << Z80_Addr__3__SHIFT))

#define Z80_Addr_4			(Z80_Addr__4__PC)
#define Z80_Addr_4_INTR	((uint16)((uint16)0x0001u << Z80_Addr__4__SHIFT))

#define Z80_Addr_5			(Z80_Addr__5__PC)
#define Z80_Addr_5_INTR	((uint16)((uint16)0x0001u << Z80_Addr__5__SHIFT))

#define Z80_Addr_6			(Z80_Addr__6__PC)
#define Z80_Addr_6_INTR	((uint16)((uint16)0x0001u << Z80_Addr__6__SHIFT))

#define Z80_Addr_7			(Z80_Addr__7__PC)
#define Z80_Addr_7_INTR	((uint16)((uint16)0x0001u << Z80_Addr__7__SHIFT))

#define Z80_Addr_8			(Z80_Addr__8__PC)
#define Z80_Addr_8_INTR	((uint16)((uint16)0x0001u << Z80_Addr__8__SHIFT))

#define Z80_Addr_9			(Z80_Addr__9__PC)
#define Z80_Addr_9_INTR	((uint16)((uint16)0x0001u << Z80_Addr__9__SHIFT))

#define Z80_Addr_10			(Z80_Addr__10__PC)
#define Z80_Addr_10_INTR	((uint16)((uint16)0x0001u << Z80_Addr__10__SHIFT))

#define Z80_Addr_11			(Z80_Addr__11__PC)
#define Z80_Addr_11_INTR	((uint16)((uint16)0x0001u << Z80_Addr__11__SHIFT))

#define Z80_Addr_12			(Z80_Addr__12__PC)
#define Z80_Addr_12_INTR	((uint16)((uint16)0x0001u << Z80_Addr__12__SHIFT))

#define Z80_Addr_13			(Z80_Addr__13__PC)
#define Z80_Addr_13_INTR	((uint16)((uint16)0x0001u << Z80_Addr__13__SHIFT))

#define Z80_Addr_14			(Z80_Addr__14__PC)
#define Z80_Addr_14_INTR	((uint16)((uint16)0x0001u << Z80_Addr__14__SHIFT))

#define Z80_Addr_15			(Z80_Addr__15__PC)
#define Z80_Addr_15_INTR	((uint16)((uint16)0x0001u << Z80_Addr__15__SHIFT))

#define Z80_Addr_INTR_ALL	 ((uint16)(Z80_Addr_0_INTR| Z80_Addr_1_INTR| Z80_Addr_2_INTR| Z80_Addr_3_INTR| Z80_Addr_4_INTR| Z80_Addr_5_INTR| Z80_Addr_6_INTR| Z80_Addr_7_INTR| Z80_Addr_8_INTR| Z80_Addr_9_INTR| Z80_Addr_10_INTR| Z80_Addr_11_INTR| Z80_Addr_12_INTR| Z80_Addr_13_INTR| Z80_Addr_14_INTR| Z80_Addr_15_INTR))

#endif /* End Pins Z80_Addr_ALIASES_H */


/* [] END OF FILE */
