/*******************************************************************************
* File Name: Data.h  
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

#if !defined(CY_PINS_Data_ALIASES_H) /* Pins Data_ALIASES_H */
#define CY_PINS_Data_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Data_0			(Data__0__PC)
#define Data_0_INTR	((uint16)((uint16)0x0001u << Data__0__SHIFT))

#define Data_1			(Data__1__PC)
#define Data_1_INTR	((uint16)((uint16)0x0001u << Data__1__SHIFT))

#define Data_2			(Data__2__PC)
#define Data_2_INTR	((uint16)((uint16)0x0001u << Data__2__SHIFT))

#define Data_3			(Data__3__PC)
#define Data_3_INTR	((uint16)((uint16)0x0001u << Data__3__SHIFT))

#define Data_4			(Data__4__PC)
#define Data_4_INTR	((uint16)((uint16)0x0001u << Data__4__SHIFT))

#define Data_5			(Data__5__PC)
#define Data_5_INTR	((uint16)((uint16)0x0001u << Data__5__SHIFT))

#define Data_6			(Data__6__PC)
#define Data_6_INTR	((uint16)((uint16)0x0001u << Data__6__SHIFT))

#define Data_7			(Data__7__PC)
#define Data_7_INTR	((uint16)((uint16)0x0001u << Data__7__SHIFT))

#define Data_INTR_ALL	 ((uint16)(Data_0_INTR| Data_1_INTR| Data_2_INTR| Data_3_INTR| Data_4_INTR| Data_5_INTR| Data_6_INTR| Data_7_INTR))

#endif /* End Pins Data_ALIASES_H */


/* [] END OF FILE */
