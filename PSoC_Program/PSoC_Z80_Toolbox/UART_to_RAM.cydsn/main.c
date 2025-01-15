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

uint8_t size, in, len;     //variables
uint8_t write, read; //flags

uint8_t rxData[]={};

void writeToRAM(uint16_t start_addr, uint8_t* data){
    uint16_t addr;
    
    //since we do not want to read, set the OE/Read Pin high
    Read_Write(1);
        
    for(uint16_t cnt=0; cnt <= (strlen(data)-1); cnt++){
    
        addr = start_addr + cnt;
        
        //put the address onto the bus
        Address_LSB_Write(addr & 0x0FF);
        Address_MSB_Write(addr >> 8);

        Write_Write(0);
        CS_Write(0);
        
        //get the data bus out of High-Z mode
        Data_SetDriveMode(Data_DM_RES_UPDWN);
        
        //put data on the bus (longer than needed but shortest time for delay
        Data_Write(data[cnt]);
        CyDelayUs(1);
        
        Write_Write(1);
        CS_Write(1);
        
        Data_SetDriveMode(Data_DM_DIG_HIZ);
        CyDelayUs(1);
    }
}

uint8_t readFromRAM(uint16_t addr){
    uint8_t data = 0;
    
    Write_Write(1);
    
    //put the address onto the bus
    Address_LSB_Write(addr & 0x0FF);
    Address_MSB_Write(addr >> 8);
    
    Read_Write(0);
    CS_Write(0);
    
    CyDelayUs(1);
    data = Data_Read();
    
    CS_Write(1);
    Read_Write(1);
    
    CyDelayUs(1);
    
    return data;
}


int main(void)
{
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    UART_Start();
    UART_PutString("\n***Test scrip for writing to a paralell RAM-IC***\nStart writing with 'w' and reading with 'r':\n");
    
    for(;;){
        
        switch(UART_GetChar()){
            case 'w': write = 1; size = 0; UART_PutString("Please put your Programm in now! \n Finish with 'f'!\n"); break;
            case 'r': read = 1; UART_PutString("Enter Number of Bytes to read. Finish with 'f'!\n"); break;
            default: break;
        }
        
        
        while(write == 1){
            in = UART_GetChar();
            if(in != 0){
                if(in == 'f'){
                    write = 0;
                    UART_PutString("Writing to RAM\n");
                    //To-Do Code for Writing to RAM
                    writeToRAM(0x0000, rxData);
                    UART_PutArray(rxData, size);
                    break;
                } else {
                    rxData[size] = in;
                    size++;
                }
            }    
        }
        
        if(read == 1){
            }
        }
    }
    
}

/* [] END OF FILE */
