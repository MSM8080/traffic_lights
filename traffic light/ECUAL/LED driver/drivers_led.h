/*
 * drivers_led.h
 *
 * Created: 9/18/2022 4:26:52 PM
 *  Author: Welcome
 */ 


#ifndef DRIVERS_LED_H_
#define DRIVERS_LED_H_

// include DIO driver
#include "../../MCAL/DIO driver/drivers_dio.h"

// driver functions
//initialization of LED port pins
void LED_init(uint8_t ledport, uint8_t ledpin);
//writing high into LED port pins
void LED_on(uint8_t ledport, uint8_t ledpin);
//writing low into LED port pins
void LED_off(uint8_t ledport, uint8_t ledpin);
//toggle state of LED port pins
void LED_toggle(uint8_t ledport, uint8_t ledpin);

#endif /* DRIVERS_LED_H_ */