/*
 * drivers_button.h
 *
 * Created: 9/18/2022 4:51:53 PM
 *  Author: Welcome
 */ 


#ifndef DRIVERS_BUTTON_H_
#define DRIVERS_BUTTON_H_

// include lower layer DIO driver
#include "../../MCAL/DIO driver/drivers_dio.h"

// driver functions
//initialization of Button port pins
void BUTTON_init(uint8_t buttonPort, uint8_t buttonPin);
//reading from Button port pins
void BUTTON_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t* val);


#endif /* DRIVERS_BUTTON_H_ */