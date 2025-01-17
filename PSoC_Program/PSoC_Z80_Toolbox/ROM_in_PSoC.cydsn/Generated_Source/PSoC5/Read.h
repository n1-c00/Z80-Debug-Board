/*******************************************************************************
* File Name: Read.h  
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

#if !defined(CY_PINS_Read_H) /* Pins Read_H */
#define CY_PINS_Read_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Read_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Read__PORT == 15 && ((Read__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Read_Write(uint8 value);
void    Read_SetDriveMode(uint8 mode);
uint8   Read_ReadDataReg(void);
uint8   Read_Read(void);
void    Read_SetInterruptMode(uint16 position, uint16 mode);
uint8   Read_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Read_SetDriveMode() function.
     *  @{
     */
        #define Read_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Read_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Read_DM_RES_UP          PIN_DM_RES_UP
        #define Read_DM_RES_DWN         PIN_DM_RES_DWN
        #define Read_DM_OD_LO           PIN_DM_OD_LO
        #define Read_DM_OD_HI           PIN_DM_OD_HI
        #define Read_DM_STRONG          PIN_DM_STRONG
        #define Read_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Read_MASK               Read__MASK
#define Read_SHIFT              Read__SHIFT
#define Read_WIDTH              1u

/* Interrupt constants */
#if defined(Read__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Read_SetInterruptMode() function.
     *  @{
     */
        #define Read_INTR_NONE      (uint16)(0x0000u)
        #define Read_INTR_RISING    (uint16)(0x0001u)
        #define Read_INTR_FALLING   (uint16)(0x0002u)
        #define Read_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Read_INTR_MASK      (0x01u) 
#endif /* (Read__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Read_PS                     (* (reg8 *) Read__PS)
/* Data Register */
#define Read_DR                     (* (reg8 *) Read__DR)
/* Port Number */
#define Read_PRT_NUM                (* (reg8 *) Read__PRT) 
/* Connect to Analog Globals */                                                  
#define Read_AG                     (* (reg8 *) Read__AG)                       
/* Analog MUX bux enable */
#define Read_AMUX                   (* (reg8 *) Read__AMUX) 
/* Bidirectional Enable */                                                        
#define Read_BIE                    (* (reg8 *) Read__BIE)
/* Bit-mask for Aliased Register Access */
#define Read_BIT_MASK               (* (reg8 *) Read__BIT_MASK)
/* Bypass Enable */
#define Read_BYP                    (* (reg8 *) Read__BYP)
/* Port wide control signals */                                                   
#define Read_CTL                    (* (reg8 *) Read__CTL)
/* Drive Modes */
#define Read_DM0                    (* (reg8 *) Read__DM0) 
#define Read_DM1                    (* (reg8 *) Read__DM1)
#define Read_DM2                    (* (reg8 *) Read__DM2) 
/* Input Buffer Disable Override */
#define Read_INP_DIS                (* (reg8 *) Read__INP_DIS)
/* LCD Common or Segment Drive */
#define Read_LCD_COM_SEG            (* (reg8 *) Read__LCD_COM_SEG)
/* Enable Segment LCD */
#define Read_LCD_EN                 (* (reg8 *) Read__LCD_EN)
/* Slew Rate Control */
#define Read_SLW                    (* (reg8 *) Read__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Read_PRTDSI__CAPS_SEL       (* (reg8 *) Read__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Read_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Read__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Read_PRTDSI__OE_SEL0        (* (reg8 *) Read__PRTDSI__OE_SEL0) 
#define Read_PRTDSI__OE_SEL1        (* (reg8 *) Read__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Read_PRTDSI__OUT_SEL0       (* (reg8 *) Read__PRTDSI__OUT_SEL0) 
#define Read_PRTDSI__OUT_SEL1       (* (reg8 *) Read__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Read_PRTDSI__SYNC_OUT       (* (reg8 *) Read__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Read__SIO_CFG)
    #define Read_SIO_HYST_EN        (* (reg8 *) Read__SIO_HYST_EN)
    #define Read_SIO_REG_HIFREQ     (* (reg8 *) Read__SIO_REG_HIFREQ)
    #define Read_SIO_CFG            (* (reg8 *) Read__SIO_CFG)
    #define Read_SIO_DIFF           (* (reg8 *) Read__SIO_DIFF)
#endif /* (Read__SIO_CFG) */

/* Interrupt Registers */
#if defined(Read__INTSTAT)
    #define Read_INTSTAT            (* (reg8 *) Read__INTSTAT)
    #define Read_SNAP               (* (reg8 *) Read__SNAP)
    
	#define Read_0_INTTYPE_REG 		(* (reg8 *) Read__0__INTTYPE)
#endif /* (Read__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Read_H */


/* [] END OF FILE */
