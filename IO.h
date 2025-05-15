#ifndef _IO_h
#define _IO_h
#include "stdint.h"

//Place prototypes for your pushbutton and LED functions here
//you may need to add more function here
void LEDs_off(void);
uint32_t pushbuttons(void);
void Red_on(void);
void Red_off(void);
void Green_on(void);
void Green_off(void);
void Green_toggle(void);
void ALL_on(void);
void delay(void);
uint32_t pushbuttons(void);
void Blue_BSon(void);
void Blue_BSoff(void);
void Red_BSon(void);
void Red_BSOff(void);


#endif
