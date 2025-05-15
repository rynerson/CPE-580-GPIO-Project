#include "IO.h"
#include "tm4c123gh6pm.h"

//The definition of bit specific addressing is only changing the bits that you need to change and leaving the others alone
//The below example is for PortA pin 5
#define PF2 (*((volatile uint32_t *)0x40025010)) //blue
#define PF1 (*((volatile uint32_t *)0x40025008)) //red


// Part of PART 3A

//Turns Green LED On
void Green_on(void){
	GPIO_PORTF_DATA_R =0x08;
	
}
//Turns Green LED Off
void Green_off(void){
	GPIO_PORTF_DATA_R = 0x00;
}

//Green LED Toggle
void Green_toggle(void){
	
	GPIO_PORTF_DATA_R ^=0x08;
	delay();

	
}
//Turns ALL LED On
void ALL_on(void){
	GPIO_PORTF_DATA_R =0xE;
}


//A General Purpose Delay. Simply use some for loops.
void delay(void){
	int i;
	for(i = 0; i<1000000;i++){
	}
}

//Should return the switches states
uint32_t pushbuttons(void){
	
	// Set to 2022 because the compiler expects a return value.  
	// Your function only needs to return a value denoting the button states
	// rather than the answer to life, the universe, and everything...
	return (GPIO_PORTF_DATA_R & 0x11);
}

// Part of Part 3C
//Bit Specific Addressing Demonstration
//A Bit Specific demonstration for Blue LED
void Blue_BSon(void){
	PF2 = 0xF;
	
}
//Blue LED - Bit Specific Off
void Blue_BSoff(void){
	PF2 = 0x0;
}
//A Bit Specific demonstration for Red LED
void Red_BSon(void){
	PF1=0xF;
}

//Red LED - Bit Specific Off
void Red_BSOff(void){
PF1 = 0x0;
}