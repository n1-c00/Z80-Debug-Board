/*******************************************************************************
* File Name: Write.h  
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

#if !defined(CY_PINS_Write_H) /* Pins Write_H */
#define CY_PINS_Write_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Write_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Write__PORT == 15 && ((Write__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Write_Write(uint8 value);
void    Write_SetDriveMode(uint8 mode);
uint8   Write_ReadDataReg(void);
uint8   Write_Read(void);
void    Write_SetInterruptMode(uint16 position, uint16 mode);
uint8   Write_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Write_SetDriveMode() function.
     *  @{
     */
        #define Write_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Write_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Write_DM_RES_UP          PIN_DM_RES_UP
        #define Write_DM_RES_DWN         PIN_DM_RES_DWN
        #define Write_DM_OD_LO           PIN_DM_OD_LO
        #define Write_DM_OD_HI           PIN_DM_OD_HI
        #define Write_DM_STRONG          PIN_DM_STRONG
        #define Write_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Write_MASK               Write__MASK
#define Write_SHIFT              Write__SHIFT
#define Write_WIDTH              1u

/* Interrupt constants */
#if defined(Write__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Write_SetInterruptMode() function.
     *  @{
     */
        #define Write_INTR_NONE      (uint16)(0x0000u)
        #define Write_INTR_RISING    (uint16)(0x0001u)
        #define Write_INTR_FALLING   (uint16)(0x0002u)
        #define Write_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Write_INTR_MASK      (0x01u) 
#endif /* (Write__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Write_PS                     (* (reg8 *) Write__PS)
/* Data Register */
#define Write_DR                     (* (reg8 *) Write__DR)
/* Port Number */
#define Write_PRT_NUM                (* (reg8 *) Write__PRT) 
/* Connect to Analog Globals */                                                  
#define Write_AG                     (* (reg8 *) Write__AG)                       
/* Analog MUX bux enable */
#define Write_AMUX                   (* (reg8 *) Write__AMUX) 
/* Bidirectional Enable */                                                        
#define Write_BIE                    (* (reg8 *) Write__BIE)
/* Bit-mask for Aliased Register Access */
#define Write_BIT_MASK               (* (reg8 *) Write__BIT_MASK)
/* Bypass Enable */
#define Write_BYP                    (* (reg8 *) Write__BYP)
/* Port wide control signals */                                                   
#define Write_CTL                    (* (reg8 *) Write__CTL)
/* Drive Modes */
#define Write_DM0                    (* (reg8 *) Write__DM0) 
#define Write_DM1                    (* (reg8 *) Write__DM1)
#define Write_DM2                    (* (reg8 *) Write__DM2) 
/* Input Buffer Disable Override */
#define Write_INP_DIS                (* (reg8 *) Write__INP_DIS)
/* LCD Common or Segment Drive */
#define Write_LCD_COM_SEG            (* (reg8 *) Write__LCD_COM_SEG)
/* Enable Segment LCD */
#define Write_LCD_EN                 (* (reg8 *) Write__LCD_EN)
/* Slew Rate Control */
#define Write_SLW                    (* (reg8 *) Write__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Write_PRTDSI__CAPS_SEL       (* (reg8 *) Write__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Write_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Write__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Write_PRTDSI__OE_SEL0        (* (reg8 *) Write__PRTDSI__OE_SEL0) 
#define Write_PRTDSI__OE_SEL1        (* (reg8 *) Write__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Write_PRTDSI__OUT_SEL0       (* (reg8 *) Write__PRTDSI__OUT_SEL0) 
#define Write_PRTDSI__OUT_SEL1       (* (reg8 *) Write__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Write_PRTDSI__SYNC_OUT       (* (reg8 *) Write__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Write__SIO_CFG)
    #define Write_SIO_HYST_EN        (* (reg8 *) Write__SIO_HYST_EN)
    #define Write_SIO_REG_HIFREQ     (* (reg8 *) Write__SIO_REG_HIFREQ)
    #define Write_SIO_CFG            (* (reg8 *) Write__SIO_CFG)
    #define Write_SIO_DIFF           (* (reg8 *) Write__SIO_DIFF)
#endif /* (Write__SIO_CFG) */

/* Interrupt Registers */
#if defined(Write__INTSTAT)
    #define Write_INTSTAT            (* (reg8 *) Write__INTSTAT)
    #define Write_SNAP               (* (reg8 *) Write__SNAP)
    
	#define Write_0_INTTYPE_REG 		(* (reg8 *) Write__0__INTTYPE)
#endif /* (Write__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Write_H */


/* [] END OF FILE */
