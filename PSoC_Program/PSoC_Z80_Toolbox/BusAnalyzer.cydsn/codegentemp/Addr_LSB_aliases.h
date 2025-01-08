/*******************************************************************************
* File Name: Addr_LSB.h  
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

#if !defined(CY_PINS_Addr_LSB_ALIASES_H) /* Pins Addr_LSB_ALIASES_H */
#define CY_PINS_Addr_LSB_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Addr_LSB_0			(Addr_LSB__0__PC)
#define Addr_LSB_0_INTR	((uint16)((uint16)0x0001u << Addr_LSB__0__SHIFT))

#define Addr_LSB_1			(Addr_LSB__1__PC)
#define Addr_LSB_1_INTR	((uint16)((uint16)0x0001u << Addr_LSB__1__SHIFT))

#define Addr_LSB_2			(Addr_LSB__2__PC)
#define Addr_LSB_2_INTR	((uint16)((uint16)0x0001u << Addr_LSB__2__SHIFT))

#define Addr_LSB_3			(Addr_LSB__3__PC)
#define Addr_LSB_3_INTR	((uint16)((uint16)0x0001u << Addr_LSB__3__SHIFT))

#define Addr_LSB_4			(Addr_LSB__4__PC)
#define Addr_LSB_4_INTR	((uint16)((uint16)0x0001u << Addr_LSB__4__SHIFT))

#define Addr_LSB_5			(Addr_LSB__5__PC)
#define Addr_LSB_5_INTR	((uint16)((uint16)0x0001u << Addr_LSB__5__SHIFT))

#define Addr_LSB_6			(Addr_LSB__6__PC)
#define Addr_LSB_6_INTR	((uint16)((uint16)0x0001u << Addr_LSB__6__SHIFT))

#define Addr_LSB_7			(Addr_LSB__7__PC)
#define Addr_LSB_7_INTR	((uint16)((uint16)0x0001u << Addr_LSB__7__SHIFT))

#define Addr_LSB_INTR_ALL	 ((uint16)(Addr_LSB_0_INTR| Addr_LSB_1_INTR| Addr_LSB_2_INTR| Addr_LSB_3_INTR| Addr_LSB_4_INTR| Addr_LSB_5_INTR| Addr_LSB_6_INTR| Addr_LSB_7_INTR))

#endif /* End Pins Addr_LSB_ALIASES_H */


/* [] END OF FILE */
