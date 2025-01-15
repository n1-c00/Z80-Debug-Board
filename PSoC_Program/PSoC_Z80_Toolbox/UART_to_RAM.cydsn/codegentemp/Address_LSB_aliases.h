/*******************************************************************************
* File Name: Address_LSB.h  
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

#if !defined(CY_PINS_Address_LSB_ALIASES_H) /* Pins Address_LSB_ALIASES_H */
#define CY_PINS_Address_LSB_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Address_LSB_0			(Address_LSB__0__PC)
#define Address_LSB_0_INTR	((uint16)((uint16)0x0001u << Address_LSB__0__SHIFT))

#define Address_LSB_1			(Address_LSB__1__PC)
#define Address_LSB_1_INTR	((uint16)((uint16)0x0001u << Address_LSB__1__SHIFT))

#define Address_LSB_2			(Address_LSB__2__PC)
#define Address_LSB_2_INTR	((uint16)((uint16)0x0001u << Address_LSB__2__SHIFT))

#define Address_LSB_3			(Address_LSB__3__PC)
#define Address_LSB_3_INTR	((uint16)((uint16)0x0001u << Address_LSB__3__SHIFT))

#define Address_LSB_4			(Address_LSB__4__PC)
#define Address_LSB_4_INTR	((uint16)((uint16)0x0001u << Address_LSB__4__SHIFT))

#define Address_LSB_5			(Address_LSB__5__PC)
#define Address_LSB_5_INTR	((uint16)((uint16)0x0001u << Address_LSB__5__SHIFT))

#define Address_LSB_6			(Address_LSB__6__PC)
#define Address_LSB_6_INTR	((uint16)((uint16)0x0001u << Address_LSB__6__SHIFT))

#define Address_LSB_7			(Address_LSB__7__PC)
#define Address_LSB_7_INTR	((uint16)((uint16)0x0001u << Address_LSB__7__SHIFT))

#define Address_LSB_INTR_ALL	 ((uint16)(Address_LSB_0_INTR| Address_LSB_1_INTR| Address_LSB_2_INTR| Address_LSB_3_INTR| Address_LSB_4_INTR| Address_LSB_5_INTR| Address_LSB_6_INTR| Address_LSB_7_INTR))

#endif /* End Pins Address_LSB_ALIASES_H */


/* [] END OF FILE */
