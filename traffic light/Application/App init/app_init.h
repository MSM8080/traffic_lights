/*
 * app_init.h
 *
 * Created: 9/18/2022 5:33:24 PM
 *  Author: Welcome
 */ 


#ifndef APP_INIT_H_
#define APP_INIT_H_

// include LED & Button drivers
#include "../../ECUAL/LED driver/drivers_led.h"
#include "../../ECUAL/Button driver/drivers_button.h"

// include interrupt driver
#include "../../MCAL/Interrupt driver/drivers_interrupt.h"
// include timer 0 driver
#include "../../MCAL/Timer 0 driver/drivers_timer_0.h"

// LED types
#define CAR 'A'
#define Pedestrian 'B'

// LED colors
typedef enum{
	RED,    // 0
	YELLOW, // 1
	GREEN   // 2
}colors;

// driver functions
//initialization of car traffic LEDs
void App_init();

#endif /* APP_INIT_H_ */