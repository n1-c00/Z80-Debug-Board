/*******************************************************************************
* File Name: Addr_MSB.h  
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

#if !defined(CY_PINS_Addr_MSB_ALIASES_H) /* Pins Addr_MSB_ALIASES_H */
#define CY_PINS_Addr_MSB_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Addr_MSB_0			(Addr_MSB__0__PC)
#define Addr_MSB_0_INTR	((uint16)((uint16)0x0001u << Addr_MSB__0__SHIFT))

#define Addr_MSB_1			(Addr_MSB__1__PC)
#define Addr_MSB_1_INTR	((uint16)((uint16)0x0001u << Addr_MSB__1__SHIFT))

#define Addr_MSB_2			(Addr_MSB__2__PC)
#define Addr_MSB_2_INTR	((uint16)((uint16)0x0001u << Addr_MSB__2__SHIFT))

#define Addr_MSB_3			(Addr_MSB__3__PC)
#define Addr_MSB_3_INTR	((uint16)((uint16)0x0001u << Addr_MSB__3__SHIFT))

#define Addr_MSB_4			(Addr_MSB__4__PC)
#define Addr_MSB_4_INTR	((uint16)((uint16)0x0001u << Addr_MSB__4__SHIFT))

#define Addr_MSB_5			(Addr_MSB__5__PC)
#define Addr_MSB_5_INTR	((uint16)((uint16)0x0001u << Addr_MSB__5__SHIFT))

#define Addr_MSB_6			(Addr_MSB__6__PC)
#define Addr_MSB_6_INTR	((uint16)((uint16)0x0001u << Addr_MSB__6__SHIFT))

#define Addr_MSB_7			(Addr_MSB__7__PC)
#define Addr_MSB_7_INTR	((uint16)((uint16)0x0001u << Addr_MSB__7__SHIFT))

#define Addr_MSB_INTR_ALL	 ((uint16)(Addr_MSB_0_INTR| Addr_MSB_1_INTR| Addr_MSB_2_INTR| Addr_MSB_3_INTR| Addr_MSB_4_INTR| Addr_MSB_5_INTR| Addr_MSB_6_INTR| Addr_MSB_7_INTR))

#endif /* End Pins Addr_MSB_ALIASES_H */


/* [] END OF FILE */
