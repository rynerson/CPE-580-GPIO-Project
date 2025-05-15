// Programming Assignment 1: Getting Started
// Student name: Linda Rynerson
// Due Date: Sept 10, 2024

#include "PortF.h"
#include "IO.h"
#include "stdint.h"
#include "tm4c123gh6pm.h"



// Change this number to the current part
#define PART 2      // 1 for PART3B, 2 for PART3C

int main(){
	PortF_Init();
	
	
	if(PART==1){																									// Should Execute only for PART 3B
		
		while(1){
			// you may need to call your functions created IO.c file
			//Toggle green if switch 2 is pressed
			if(((pushbuttons())==0x10) && ((pushbuttons())!=0x01)){
				Green_toggle();
			}
			//Turn off light if only switch 1 is pressed
			else if(((pushbuttons())==0x01)){
				Green_off();
			}
			else{
				Green_on();
			}
		}
	}
		
	else if(PART==2){																						 // Should Execute only for PART 3C (Bit-specific addressing)
		
		while(1){
			// Write the code that demonstrate PART3C functionality
			//count from 1 to 3 in binary if switch 1 is pressed
			if(((pushbuttons()) == 0x01)){
				Blue_BSoff();
				Red_BSOff(); //00
				delay();
				Blue_BSoff();
				Red_BSon(); //01
				delay();
				Blue_BSon();
				Red_BSOff();
				//10
				delay();
				Blue_BSon();
				Red_BSon();
				delay();
				//11
				
				
			}
			//count from 3 to 1 if switch 2 is pressed
			else if((pushbuttons() == 0x10) && ((pushbuttons()) != 0x01)){
				Blue_BSon();
				Red_BSon(); // 11
				delay();
				Blue_BSon(); 
				Red_BSOff(); //10
				delay();
				Blue_BSoff();
				Red_BSon(); //01
				delay();
				Blue_BSoff();
				Red_BSOff();
				//00
				delay();
				
			}
			else{
				Blue_BSoff();
				Red_BSOff();
			}
			
		}
	}
	
	// Shouldn't reach unless you set an incorrect value for LAB_PART
	else return 0;
	
}
