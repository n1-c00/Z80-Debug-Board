/*******************************************************************************
* File Name: Address_MSB.h  
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

#if !defined(CY_PINS_Address_MSB_H) /* Pins Address_MSB_H */
#define CY_PINS_Address_MSB_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Address_MSB_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Address_MSB__PORT == 15 && ((Address_MSB__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Address_MSB_Write(uint8 value);
void    Address_MSB_SetDriveMode(uint8 mode);
uint8   Address_MSB_ReadDataReg(void);
uint8   Address_MSB_Read(void);
void    Address_MSB_SetInterruptMode(uint16 position, uint16 mode);
uint8   Address_MSB_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Address_MSB_SetDriveMode() function.
     *  @{
     */
        #define Address_MSB_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Address_MSB_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Address_MSB_DM_RES_UP          PIN_DM_RES_UP
        #define Address_MSB_DM_RES_DWN         PIN_DM_RES_DWN
        #define Address_MSB_DM_OD_LO           PIN_DM_OD_LO
        #define Address_MSB_DM_OD_HI           PIN_DM_OD_HI
        #define Address_MSB_DM_STRONG          PIN_DM_STRONG
        #define Address_MSB_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Address_MSB_MASK               Address_MSB__MASK
#define Address_MSB_SHIFT              Address_MSB__SHIFT
#define Address_MSB_WIDTH              3u

/* Interrupt constants */
#if defined(Address_MSB__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Address_MSB_SetInterruptMode() function.
     *  @{
     */
        #define Address_MSB_INTR_NONE      (uint16)(0x0000u)
        #define Address_MSB_INTR_RISING    (uint16)(0x0001u)
        #define Address_MSB_INTR_FALLING   (uint16)(0x0002u)
        #define Address_MSB_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Address_MSB_INTR_MASK      (0x01u) 
#endif /* (Address_MSB__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Address_MSB_PS                     (* (reg8 *) Address_MSB__PS)
/* Data Register */
#define Address_MSB_DR                     (* (reg8 *) Address_MSB__DR)
/* Port Number */
#define Address_MSB_PRT_NUM                (* (reg8 *) Address_MSB__PRT) 
/* Connect to Analog Globals */                                                  
#define Address_MSB_AG                     (* (reg8 *) Address_MSB__AG)                       
/* Analog MUX bux enable */
#define Address_MSB_AMUX                   (* (reg8 *) Address_MSB__AMUX) 
/* Bidirectional Enable */                                                        
#define Address_MSB_BIE                    (* (reg8 *) Address_MSB__BIE)
/* Bit-mask for Aliased Register Access */
#define Address_MSB_BIT_MASK               (* (reg8 *) Address_MSB__BIT_MASK)
/* Bypass Enable */
#define Address_MSB_BYP                    (* (reg8 *) Address_MSB__BYP)
/* Port wide control signals */                                                   
#define Address_MSB_CTL                    (* (reg8 *) Address_MSB__CTL)
/* Drive Modes */
#define Address_MSB_DM0                    (* (reg8 *) Address_MSB__DM0) 
#define Address_MSB_DM1                    (* (reg8 *) Address_MSB__DM1)
#define Address_MSB_DM2                    (* (reg8 *) Address_MSB__DM2) 
/* Input Buffer Disable Override */
#define Address_MSB_INP_DIS                (* (reg8 *) Address_MSB__INP_DIS)
/* LCD Common or Segment Drive */
#define Address_MSB_LCD_COM_SEG            (* (reg8 *) Address_MSB__LCD_COM_SEG)
/* Enable Segment LCD */
#define Address_MSB_LCD_EN                 (* (reg8 *) Address_MSB__LCD_EN)
/* Slew Rate Control */
#define Address_MSB_SLW                    (* (reg8 *) Address_MSB__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Address_MSB_PRTDSI__CAPS_SEL       (* (reg8 *) Address_MSB__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Address_MSB_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Address_MSB__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Address_MSB_PRTDSI__OE_SEL0        (* (reg8 *) Address_MSB__PRTDSI__OE_SEL0) 
#define Address_MSB_PRTDSI__OE_SEL1        (* (reg8 *) Address_MSB__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Address_MSB_PRTDSI__OUT_SEL0       (* (reg8 *) Address_MSB__PRTDSI__OUT_SEL0) 
#define Address_MSB_PRTDSI__OUT_SEL1       (* (reg8 *) Address_MSB__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Address_MSB_PRTDSI__SYNC_OUT       (* (reg8 *) Address_MSB__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Address_MSB__SIO_CFG)
    #define Address_MSB_SIO_HYST_EN        (* (reg8 *) Address_MSB__SIO_HYST_EN)
    #define Address_MSB_SIO_REG_HIFREQ     (* (reg8 *) Address_MSB__SIO_REG_HIFREQ)
    #define Address_MSB_SIO_CFG            (* (reg8 *) Address_MSB__SIO_CFG)
    #define Address_MSB_SIO_DIFF           (* (reg8 *) Address_MSB__SIO_DIFF)
#endif /* (Address_MSB__SIO_CFG) */

/* Interrupt Registers */
#if defined(Address_MSB__INTSTAT)
    #define Address_MSB_INTSTAT            (* (reg8 *) Address_MSB__INTSTAT)
    #define Address_MSB_SNAP               (* (reg8 *) Address_MSB__SNAP)
    
	#define Address_MSB_0_INTTYPE_REG 		(* (reg8 *) Address_MSB__0__INTTYPE)
	#define Address_MSB_1_INTTYPE_REG 		(* (reg8 *) Address_MSB__1__INTTYPE)
	#define Address_MSB_2_INTTYPE_REG 		(* (reg8 *) Address_MSB__2__INTTYPE)
#endif /* (Address_MSB__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Address_MSB_H */


/* [] END OF FILE */
