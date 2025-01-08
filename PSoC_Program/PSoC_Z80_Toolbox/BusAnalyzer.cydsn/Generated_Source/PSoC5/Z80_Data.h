/*******************************************************************************
* File Name: Z80_Data.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Z80_Data_H) /* Pins Z80_Data_H */
#define CY_PINS_Z80_Data_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Z80_Data_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Z80_Data__PORT == 15 && ((Z80_Data__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Z80_Data_Write(uint8 value);
void    Z80_Data_SetDriveMode(uint8 mode);
uint8   Z80_Data_ReadDataReg(void);
uint8   Z80_Data_Read(void);
void    Z80_Data_SetInterruptMode(uint16 position, uint16 mode);
uint8   Z80_Data_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Z80_Data_SetDriveMode() function.
     *  @{
     */
        #define Z80_Data_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Z80_Data_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Z80_Data_DM_RES_UP          PIN_DM_RES_UP
        #define Z80_Data_DM_RES_DWN         PIN_DM_RES_DWN
        #define Z80_Data_DM_OD_LO           PIN_DM_OD_LO
        #define Z80_Data_DM_OD_HI           PIN_DM_OD_HI
        #define Z80_Data_DM_STRONG          PIN_DM_STRONG
        #define Z80_Data_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Z80_Data_MASK               Z80_Data__MASK
#define Z80_Data_SHIFT              Z80_Data__SHIFT
#define Z80_Data_WIDTH              8u

/* Interrupt constants */
#if defined(Z80_Data__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Z80_Data_SetInterruptMode() function.
     *  @{
     */
        #define Z80_Data_INTR_NONE      (uint16)(0x0000u)
        #define Z80_Data_INTR_RISING    (uint16)(0x0001u)
        #define Z80_Data_INTR_FALLING   (uint16)(0x0002u)
        #define Z80_Data_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Z80_Data_INTR_MASK      (0x01u) 
#endif /* (Z80_Data__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Z80_Data_PS                     (* (reg8 *) Z80_Data__PS)
/* Data Register */
#define Z80_Data_DR                     (* (reg8 *) Z80_Data__DR)
/* Port Number */
#define Z80_Data_PRT_NUM                (* (reg8 *) Z80_Data__PRT) 
/* Connect to Analog Globals */                                                  
#define Z80_Data_AG                     (* (reg8 *) Z80_Data__AG)                       
/* Analog MUX bux enable */
#define Z80_Data_AMUX                   (* (reg8 *) Z80_Data__AMUX) 
/* Bidirectional Enable */                                                        
#define Z80_Data_BIE                    (* (reg8 *) Z80_Data__BIE)
/* Bit-mask for Aliased Register Access */
#define Z80_Data_BIT_MASK               (* (reg8 *) Z80_Data__BIT_MASK)
/* Bypass Enable */
#define Z80_Data_BYP                    (* (reg8 *) Z80_Data__BYP)
/* Port wide control signals */                                                   
#define Z80_Data_CTL                    (* (reg8 *) Z80_Data__CTL)
/* Drive Modes */
#define Z80_Data_DM0                    (* (reg8 *) Z80_Data__DM0) 
#define Z80_Data_DM1                    (* (reg8 *) Z80_Data__DM1)
#define Z80_Data_DM2                    (* (reg8 *) Z80_Data__DM2) 
/* Input Buffer Disable Override */
#define Z80_Data_INP_DIS                (* (reg8 *) Z80_Data__INP_DIS)
/* LCD Common or Segment Drive */
#define Z80_Data_LCD_COM_SEG            (* (reg8 *) Z80_Data__LCD_COM_SEG)
/* Enable Segment LCD */
#define Z80_Data_LCD_EN                 (* (reg8 *) Z80_Data__LCD_EN)
/* Slew Rate Control */
#define Z80_Data_SLW                    (* (reg8 *) Z80_Data__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Z80_Data_PRTDSI__CAPS_SEL       (* (reg8 *) Z80_Data__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Z80_Data_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Z80_Data__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Z80_Data_PRTDSI__OE_SEL0        (* (reg8 *) Z80_Data__PRTDSI__OE_SEL0) 
#define Z80_Data_PRTDSI__OE_SEL1        (* (reg8 *) Z80_Data__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Z80_Data_PRTDSI__OUT_SEL0       (* (reg8 *) Z80_Data__PRTDSI__OUT_SEL0) 
#define Z80_Data_PRTDSI__OUT_SEL1       (* (reg8 *) Z80_Data__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Z80_Data_PRTDSI__SYNC_OUT       (* (reg8 *) Z80_Data__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Z80_Data__SIO_CFG)
    #define Z80_Data_SIO_HYST_EN        (* (reg8 *) Z80_Data__SIO_HYST_EN)
    #define Z80_Data_SIO_REG_HIFREQ     (* (reg8 *) Z80_Data__SIO_REG_HIFREQ)
    #define Z80_Data_SIO_CFG            (* (reg8 *) Z80_Data__SIO_CFG)
    #define Z80_Data_SIO_DIFF           (* (reg8 *) Z80_Data__SIO_DIFF)
#endif /* (Z80_Data__SIO_CFG) */

/* Interrupt Registers */
#if defined(Z80_Data__INTSTAT)
    #define Z80_Data_INTSTAT            (* (reg8 *) Z80_Data__INTSTAT)
    #define Z80_Data_SNAP               (* (reg8 *) Z80_Data__SNAP)
    
	#define Z80_Data_0_INTTYPE_REG 		(* (reg8 *) Z80_Data__0__INTTYPE)
	#define Z80_Data_1_INTTYPE_REG 		(* (reg8 *) Z80_Data__1__INTTYPE)
	#define Z80_Data_2_INTTYPE_REG 		(* (reg8 *) Z80_Data__2__INTTYPE)
	#define Z80_Data_3_INTTYPE_REG 		(* (reg8 *) Z80_Data__3__INTTYPE)
	#define Z80_Data_4_INTTYPE_REG 		(* (reg8 *) Z80_Data__4__INTTYPE)
	#define Z80_Data_5_INTTYPE_REG 		(* (reg8 *) Z80_Data__5__INTTYPE)
	#define Z80_Data_6_INTTYPE_REG 		(* (reg8 *) Z80_Data__6__INTTYPE)
	#define Z80_Data_7_INTTYPE_REG 		(* (reg8 *) Z80_Data__7__INTTYPE)
#endif /* (Z80_Data__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Z80_Data_H */


/* [] END OF FILE */
