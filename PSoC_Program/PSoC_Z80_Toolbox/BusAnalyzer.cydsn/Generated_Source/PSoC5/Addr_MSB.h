/*******************************************************************************
* File Name: Addr_MSB.h  
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

#if !defined(CY_PINS_Addr_MSB_H) /* Pins Addr_MSB_H */
#define CY_PINS_Addr_MSB_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Addr_MSB_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Addr_MSB__PORT == 15 && ((Addr_MSB__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Addr_MSB_Write(uint8 value);
void    Addr_MSB_SetDriveMode(uint8 mode);
uint8   Addr_MSB_ReadDataReg(void);
uint8   Addr_MSB_Read(void);
void    Addr_MSB_SetInterruptMode(uint16 position, uint16 mode);
uint8   Addr_MSB_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Addr_MSB_SetDriveMode() function.
     *  @{
     */
        #define Addr_MSB_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Addr_MSB_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Addr_MSB_DM_RES_UP          PIN_DM_RES_UP
        #define Addr_MSB_DM_RES_DWN         PIN_DM_RES_DWN
        #define Addr_MSB_DM_OD_LO           PIN_DM_OD_LO
        #define Addr_MSB_DM_OD_HI           PIN_DM_OD_HI
        #define Addr_MSB_DM_STRONG          PIN_DM_STRONG
        #define Addr_MSB_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Addr_MSB_MASK               Addr_MSB__MASK
#define Addr_MSB_SHIFT              Addr_MSB__SHIFT
#define Addr_MSB_WIDTH              8u

/* Interrupt constants */
#if defined(Addr_MSB__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Addr_MSB_SetInterruptMode() function.
     *  @{
     */
        #define Addr_MSB_INTR_NONE      (uint16)(0x0000u)
        #define Addr_MSB_INTR_RISING    (uint16)(0x0001u)
        #define Addr_MSB_INTR_FALLING   (uint16)(0x0002u)
        #define Addr_MSB_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Addr_MSB_INTR_MASK      (0x01u) 
#endif /* (Addr_MSB__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Addr_MSB_PS                     (* (reg8 *) Addr_MSB__PS)
/* Data Register */
#define Addr_MSB_DR                     (* (reg8 *) Addr_MSB__DR)
/* Port Number */
#define Addr_MSB_PRT_NUM                (* (reg8 *) Addr_MSB__PRT) 
/* Connect to Analog Globals */                                                  
#define Addr_MSB_AG                     (* (reg8 *) Addr_MSB__AG)                       
/* Analog MUX bux enable */
#define Addr_MSB_AMUX                   (* (reg8 *) Addr_MSB__AMUX) 
/* Bidirectional Enable */                                                        
#define Addr_MSB_BIE                    (* (reg8 *) Addr_MSB__BIE)
/* Bit-mask for Aliased Register Access */
#define Addr_MSB_BIT_MASK               (* (reg8 *) Addr_MSB__BIT_MASK)
/* Bypass Enable */
#define Addr_MSB_BYP                    (* (reg8 *) Addr_MSB__BYP)
/* Port wide control signals */                                                   
#define Addr_MSB_CTL                    (* (reg8 *) Addr_MSB__CTL)
/* Drive Modes */
#define Addr_MSB_DM0                    (* (reg8 *) Addr_MSB__DM0) 
#define Addr_MSB_DM1                    (* (reg8 *) Addr_MSB__DM1)
#define Addr_MSB_DM2                    (* (reg8 *) Addr_MSB__DM2) 
/* Input Buffer Disable Override */
#define Addr_MSB_INP_DIS                (* (reg8 *) Addr_MSB__INP_DIS)
/* LCD Common or Segment Drive */
#define Addr_MSB_LCD_COM_SEG            (* (reg8 *) Addr_MSB__LCD_COM_SEG)
/* Enable Segment LCD */
#define Addr_MSB_LCD_EN                 (* (reg8 *) Addr_MSB__LCD_EN)
/* Slew Rate Control */
#define Addr_MSB_SLW                    (* (reg8 *) Addr_MSB__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Addr_MSB_PRTDSI__CAPS_SEL       (* (reg8 *) Addr_MSB__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Addr_MSB_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Addr_MSB__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Addr_MSB_PRTDSI__OE_SEL0        (* (reg8 *) Addr_MSB__PRTDSI__OE_SEL0) 
#define Addr_MSB_PRTDSI__OE_SEL1        (* (reg8 *) Addr_MSB__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Addr_MSB_PRTDSI__OUT_SEL0       (* (reg8 *) Addr_MSB__PRTDSI__OUT_SEL0) 
#define Addr_MSB_PRTDSI__OUT_SEL1       (* (reg8 *) Addr_MSB__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Addr_MSB_PRTDSI__SYNC_OUT       (* (reg8 *) Addr_MSB__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Addr_MSB__SIO_CFG)
    #define Addr_MSB_SIO_HYST_EN        (* (reg8 *) Addr_MSB__SIO_HYST_EN)
    #define Addr_MSB_SIO_REG_HIFREQ     (* (reg8 *) Addr_MSB__SIO_REG_HIFREQ)
    #define Addr_MSB_SIO_CFG            (* (reg8 *) Addr_MSB__SIO_CFG)
    #define Addr_MSB_SIO_DIFF           (* (reg8 *) Addr_MSB__SIO_DIFF)
#endif /* (Addr_MSB__SIO_CFG) */

/* Interrupt Registers */
#if defined(Addr_MSB__INTSTAT)
    #define Addr_MSB_INTSTAT            (* (reg8 *) Addr_MSB__INTSTAT)
    #define Addr_MSB_SNAP               (* (reg8 *) Addr_MSB__SNAP)
    
	#define Addr_MSB_0_INTTYPE_REG 		(* (reg8 *) Addr_MSB__0__INTTYPE)
	#define Addr_MSB_1_INTTYPE_REG 		(* (reg8 *) Addr_MSB__1__INTTYPE)
	#define Addr_MSB_2_INTTYPE_REG 		(* (reg8 *) Addr_MSB__2__INTTYPE)
	#define Addr_MSB_3_INTTYPE_REG 		(* (reg8 *) Addr_MSB__3__INTTYPE)
	#define Addr_MSB_4_INTTYPE_REG 		(* (reg8 *) Addr_MSB__4__INTTYPE)
	#define Addr_MSB_5_INTTYPE_REG 		(* (reg8 *) Addr_MSB__5__INTTYPE)
	#define Addr_MSB_6_INTTYPE_REG 		(* (reg8 *) Addr_MSB__6__INTTYPE)
	#define Addr_MSB_7_INTTYPE_REG 		(* (reg8 *) Addr_MSB__7__INTTYPE)
#endif /* (Addr_MSB__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Addr_MSB_H */


/* [] END OF FILE */
