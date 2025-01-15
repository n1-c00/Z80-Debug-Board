 /* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include <stdio.h>
uint8_t scan, input, cnt, in;
uint8_t data, addr;
uint8_t write;

uint8_t rxData[]={};

char out[] = {};



CY_ISR(Clock_ISR){
    scan = 1;
}

int main(void)
{
    isr_1_StartEx(Clock_ISR);
    isr_1_ClearPending();
    
    CyGlobalIntEnable; /* Enable global interrupts. */

    
    //start up Uart
    UART_Start();
    UART_PutString("***Simple Script for reading Data- and Address-Bus of a Zilog Z80***\nPress 'c' for continious mode or 's' for single step:\n");
    UART_PutString(" Addr | Data | M1 | RD | WR | MREQ");
    
    //Data_Write(0x00);

    
    //default the clock to single step
    Clock_Ctrl_Write(0b11);
    
    for(;;)
    {
        //fetch Input from UART-Buffer
        input = UART_GetChar();
        
        //take action depending on the char that was sent
        switch(input){
        case 0: break; //no new data sent
        case 'c': Clock_Ctrl_Write(0b01); break; //set mux to the clock and pull the other input low
        case 's': Clock_Ctrl_Write(0b10); CyDelay(10); Clock_Ctrl_Write(0b11); break; //pulse the line on the Mux 
        default: break;
        }
        
        //when a new clock pulse is sent to the Z80, scan the Data and Address Lines and put the to the console
        if(scan == 1){
            //rest the scan flag
            scan = 0;
            
            //read the data- and address-bus and add them to the out string
            data = 1; //Data_Read();
            addr = 0; //Addr_LSB_Read();
            sprintf(out, "\n  %2x  |  %2x  ", addr, data);
            
            //check the control signals and add an x in the corresponding row
            if(!Ctrl_M1_Read()){strcat(out, "| x  ");}else{strcat(out, "|    ");}
            if(!Ctrl_RD_Read()){strcat(out, "| x  ");}else{strcat(out, "|    ");}
            if(!Ctrl_WR_Read()){strcat(out, "| x  ");}else{strcat(out, "|    ");}
            if(!Ctrl_MREQ_Read()){strcat(out, "|  x  ");}else{strcat(out, "|     ");}

            //send the table entry to the PC
            UART_PutString(out);
        }
    }
}

/* [] END OF FILE */
