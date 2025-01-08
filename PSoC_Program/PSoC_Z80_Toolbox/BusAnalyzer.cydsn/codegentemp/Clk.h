/*******************************************************************************
* File Name: Clk.h  
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

#if !defined(CY_PINS_Clk_H) /* Pins Clk_H */
#define CY_PINS_Clk_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Clk_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Clk__PORT == 15 && ((Clk__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Clk_Write(uint8 value);
void    Clk_SetDriveMode(uint8 mode);
uint8   Clk_ReadDataReg(void);
uint8   Clk_Read(void);
void    Clk_SetInterruptMode(uint16 position, uint16 mode);
uint8   Clk_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Clk_SetDriveMode() function.
     *  @{
     */
        #define Clk_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Clk_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Clk_DM_RES_UP          PIN_DM_RES_UP
        #define Clk_DM_RES_DWN         PIN_DM_RES_DWN
        #define Clk_DM_OD_LO           PIN_DM_OD_LO
        #define Clk_DM_OD_HI           PIN_DM_OD_HI
        #define Clk_DM_STRONG          PIN_DM_STRONG
        #define Clk_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Clk_MASK               Clk__MASK
#define Clk_SHIFT              Clk__SHIFT
#define Clk_WIDTH              1u

/* Interrupt constants */
#if defined(Clk__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Clk_SetInterruptMode() function.
     *  @{
     */
        #define Clk_INTR_NONE      (uint16)(0x0000u)
        #define Clk_INTR_RISING    (uint16)(0x0001u)
        #define Clk_INTR_FALLING   (uint16)(0x0002u)
        #define Clk_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Clk_INTR_MASK      (0x01u) 
#endif /* (Clk__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Clk_PS                     (* (reg8 *) Clk__PS)
/* Data Register */
#define Clk_DR                     (* (reg8 *) Clk__DR)
/* Port Number */
#define Clk_PRT_NUM                (* (reg8 *) Clk__PRT) 
/* Connect to Analog Globals */                                                  
#define Clk_AG                     (* (reg8 *) Clk__AG)                       
/* Analog MUX bux enable */
#define Clk_AMUX                   (* (reg8 *) Clk__AMUX) 
/* Bidirectional Enable */                                                        
#define Clk_BIE                    (* (reg8 *) Clk__BIE)
/* Bit-mask for Aliased Register Access */
#define Clk_BIT_MASK               (* (reg8 *) Clk__BIT_MASK)
/* Bypass Enable */
#define Clk_BYP                    (* (reg8 *) Clk__BYP)
/* Port wide control signals */                                                   
#define Clk_CTL                    (* (reg8 *) Clk__CTL)
/* Drive Modes */
#define Clk_DM0                    (* (reg8 *) Clk__DM0) 
#define Clk_DM1                    (* (reg8 *) Clk__DM1)
#define Clk_DM2                    (* (reg8 *) Clk__DM2) 
/* Input Buffer Disable Override */
#define Clk_INP_DIS                (* (reg8 *) Clk__INP_DIS)
/* LCD Common or Segment Drive */
#define Clk_LCD_COM_SEG            (* (reg8 *) Clk__LCD_COM_SEG)
/* Enable Segment LCD */
#define Clk_LCD_EN                 (* (reg8 *) Clk__LCD_EN)
/* Slew Rate Control */
#define Clk_SLW                    (* (reg8 *) Clk__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Clk_PRTDSI__CAPS_SEL       (* (reg8 *) Clk__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Clk_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Clk__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Clk_PRTDSI__OE_SEL0        (* (reg8 *) Clk__PRTDSI__OE_SEL0) 
#define Clk_PRTDSI__OE_SEL1        (* (reg8 *) Clk__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Clk_PRTDSI__OUT_SEL0       (* (reg8 *) Clk__PRTDSI__OUT_SEL0) 
#define Clk_PRTDSI__OUT_SEL1       (* (reg8 *) Clk__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Clk_PRTDSI__SYNC_OUT       (* (reg8 *) Clk__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Clk__SIO_CFG)
    #define Clk_SIO_HYST_EN        (* (reg8 *) Clk__SIO_HYST_EN)
    #define Clk_SIO_REG_HIFREQ     (* (reg8 *) Clk__SIO_REG_HIFREQ)
    #define Clk_SIO_CFG            (* (reg8 *) Clk__SIO_CFG)
    #define Clk_SIO_DIFF           (* (reg8 *) Clk__SIO_DIFF)
#endif /* (Clk__SIO_CFG) */

/* Interrupt Registers */
#if defined(Clk__INTSTAT)
    #define Clk_INTSTAT            (* (reg8 *) Clk__INTSTAT)
    #define Clk_SNAP               (* (reg8 *) Clk__SNAP)
    
	#define Clk_0_INTTYPE_REG 		(* (reg8 *) Clk__0__INTTYPE)
#endif /* (Clk__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Clk_H */


/* [] END OF FILE */
