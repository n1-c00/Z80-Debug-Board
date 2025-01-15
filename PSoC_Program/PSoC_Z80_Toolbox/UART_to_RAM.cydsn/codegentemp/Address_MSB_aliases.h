/*******************************************************************************
* File Name: Address_MSB.h  
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

#if !defined(CY_PINS_Address_MSB_ALIASES_H) /* Pins Address_MSB_ALIASES_H */
#define CY_PINS_Address_MSB_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Address_MSB_0			(Address_MSB__0__PC)
#define Address_MSB_0_INTR	((uint16)((uint16)0x0001u << Address_MSB__0__SHIFT))

#define Address_MSB_1			(Address_MSB__1__PC)
#define Address_MSB_1_INTR	((uint16)((uint16)0x0001u << Address_MSB__1__SHIFT))

#define Address_MSB_2			(Address_MSB__2__PC)
#define Address_MSB_2_INTR	((uint16)((uint16)0x0001u << Address_MSB__2__SHIFT))

#define Address_MSB_INTR_ALL	 ((uint16)(Address_MSB_0_INTR| Address_MSB_1_INTR| Address_MSB_2_INTR))

#endif /* End Pins Address_MSB_ALIASES_H */


/* [] END OF FILE */
