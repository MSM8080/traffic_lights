/*
 * button.c
 *
 * Created: 9/18/2022 4:52:31 PM
 *  Author: Welcome
 */ 

// include button driver
#include "drivers_button.h"

// driver functions
//initialization of Button port pins
void BUTTON_init(uint8_t buttonPort, uint8_t buttonPin)
{
	DIO_init(buttonPort,buttonPin,IN);
}

//reading from Button port pins
void BUTTON_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t* val)
{
	DIO_read(buttonPort,buttonPin,val);
}
