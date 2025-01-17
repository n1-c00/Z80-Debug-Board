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

#define SIZE 256
volatile uint8_t memory[SIZE];

char out[] = {};
uint8_t data, addr;

CY_ISR(PUSH_ROM){
    
    // push the Data corresponding to the Addr onto the Data-Bus
    Data_Write( memory[Addr_LSB_Read()] );

}

void memory_Init(){

    for( uint32_t i=0; i < SIZE; i++){
        
        memory[i] = 0;
        
        //Test Code
        UART_PutChar(memory[i]);
        
    }
    UART_PutChar('\n');
}

int main(void)
{
    UART_Start();
    
    //write memory full of NOPs
    memory_Init();
    
    UART_PutString("***Test Output for simulation ROM with PSoC5***\n");
    UART_PutString(" Addr | Data ");
    
    ROM_Access_StartEx(PUSH_ROM);
    ROM_Access_ClearPending();
    
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        //trigger at every new clock cycle
        if(Clock_out_Read()){
            
            data = Data_Read();
            addr = Addr_LSB_Read();
            
            sprintf(out, "\n  %2x  |  %2x  ", addr, data);
            //send the table entry to the PC
            UART_PutString(out);            
            
            //wait for the clock to go low again
            while(Clock_out_Read());
        }
    }
}

/* [] END OF FILE */
