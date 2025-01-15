/*******************************************************************************
* File Name: Address_LSB.h  
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

#if !defined(CY_PINS_Address_LSB_H) /* Pins Address_LSB_H */
#define CY_PINS_Address_LSB_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Address_LSB_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Address_LSB__PORT == 15 && ((Address_LSB__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Address_LSB_Write(uint8 value);
void    Address_LSB_SetDriveMode(uint8 mode);
uint8   Address_LSB_ReadDataReg(void);
uint8   Address_LSB_Read(void);
void    Address_LSB_SetInterruptMode(uint16 position, uint16 mode);
uint8   Address_LSB_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Address_LSB_SetDriveMode() function.
     *  @{
     */
        #define Address_LSB_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Address_LSB_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Address_LSB_DM_RES_UP          PIN_DM_RES_UP
        #define Address_LSB_DM_RES_DWN         PIN_DM_RES_DWN
        #define Address_LSB_DM_OD_LO           PIN_DM_OD_LO
        #define Address_LSB_DM_OD_HI           PIN_DM_OD_HI
        #define Address_LSB_DM_STRONG          PIN_DM_STRONG
        #define Address_LSB_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Address_LSB_MASK               Address_LSB__MASK
#define Address_LSB_SHIFT              Address_LSB__SHIFT
#define Address_LSB_WIDTH              8u

/* Interrupt constants */
#if defined(Address_LSB__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Address_LSB_SetInterruptMode() function.
     *  @{
     */
        #define Address_LSB_INTR_NONE      (uint16)(0x0000u)
        #define Address_LSB_INTR_RISING    (uint16)(0x0001u)
        #define Address_LSB_INTR_FALLING   (uint16)(0x0002u)
        #define Address_LSB_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Address_LSB_INTR_MASK      (0x01u) 
#endif /* (Address_LSB__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Address_LSB_PS                     (* (reg8 *) Address_LSB__PS)
/* Data Register */
#define Address_LSB_DR                     (* (reg8 *) Address_LSB__DR)
/* Port Number */
#define Address_LSB_PRT_NUM                (* (reg8 *) Address_LSB__PRT) 
/* Connect to Analog Globals */                                                  
#define Address_LSB_AG                     (* (reg8 *) Address_LSB__AG)                       
/* Analog MUX bux enable */
#define Address_LSB_AMUX                   (* (reg8 *) Address_LSB__AMUX) 
/* Bidirectional Enable */                                                        
#define Address_LSB_BIE                    (* (reg8 *) Address_LSB__BIE)
/* Bit-mask for Aliased Register Access */
#define Address_LSB_BIT_MASK               (* (reg8 *) Address_LSB__BIT_MASK)
/* Bypass Enable */
#define Address_LSB_BYP                    (* (reg8 *) Address_LSB__BYP)
/* Port wide control signals */                                                   
#define Address_LSB_CTL                    (* (reg8 *) Address_LSB__CTL)
/* Drive Modes */
#define Address_LSB_DM0                    (* (reg8 *) Address_LSB__DM0) 
#define Address_LSB_DM1                    (* (reg8 *) Address_LSB__DM1)
#define Address_LSB_DM2                    (* (reg8 *) Address_LSB__DM2) 
/* Input Buffer Disable Override */
#define Address_LSB_INP_DIS                (* (reg8 *) Address_LSB__INP_DIS)
/* LCD Common or Segment Drive */
#define Address_LSB_LCD_COM_SEG            (* (reg8 *) Address_LSB__LCD_COM_SEG)
/* Enable Segment LCD */
#define Address_LSB_LCD_EN                 (* (reg8 *) Address_LSB__LCD_EN)
/* Slew Rate Control */
#define Address_LSB_SLW                    (* (reg8 *) Address_LSB__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Address_LSB_PRTDSI__CAPS_SEL       (* (reg8 *) Address_LSB__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Address_LSB_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Address_LSB__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Address_LSB_PRTDSI__OE_SEL0        (* (reg8 *) Address_LSB__PRTDSI__OE_SEL0) 
#define Address_LSB_PRTDSI__OE_SEL1        (* (reg8 *) Address_LSB__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Address_LSB_PRTDSI__OUT_SEL0       (* (reg8 *) Address_LSB__PRTDSI__OUT_SEL0) 
#define Address_LSB_PRTDSI__OUT_SEL1       (* (reg8 *) Address_LSB__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Address_LSB_PRTDSI__SYNC_OUT       (* (reg8 *) Address_LSB__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Address_LSB__SIO_CFG)
    #define Address_LSB_SIO_HYST_EN        (* (reg8 *) Address_LSB__SIO_HYST_EN)
    #define Address_LSB_SIO_REG_HIFREQ     (* (reg8 *) Address_LSB__SIO_REG_HIFREQ)
    #define Address_LSB_SIO_CFG            (* (reg8 *) Address_LSB__SIO_CFG)
    #define Address_LSB_SIO_DIFF           (* (reg8 *) Address_LSB__SIO_DIFF)
#endif /* (Address_LSB__SIO_CFG) */

/* Interrupt Registers */
#if defined(Address_LSB__INTSTAT)
    #define Address_LSB_INTSTAT            (* (reg8 *) Address_LSB__INTSTAT)
    #define Address_LSB_SNAP               (* (reg8 *) Address_LSB__SNAP)
    
	#define Address_LSB_0_INTTYPE_REG 		(* (reg8 *) Address_LSB__0__INTTYPE)
	#define Address_LSB_1_INTTYPE_REG 		(* (reg8 *) Address_LSB__1__INTTYPE)
	#define Address_LSB_2_INTTYPE_REG 		(* (reg8 *) Address_LSB__2__INTTYPE)
	#define Address_LSB_3_INTTYPE_REG 		(* (reg8 *) Address_LSB__3__INTTYPE)
	#define Address_LSB_4_INTTYPE_REG 		(* (reg8 *) Address_LSB__4__INTTYPE)
	#define Address_LSB_5_INTTYPE_REG 		(* (reg8 *) Address_LSB__5__INTTYPE)
	#define Address_LSB_6_INTTYPE_REG 		(* (reg8 *) Address_LSB__6__INTTYPE)
	#define Address_LSB_7_INTTYPE_REG 		(* (reg8 *) Address_LSB__7__INTTYPE)
#endif /* (Address_LSB__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Address_LSB_H */


/* [] END OF FILE */
