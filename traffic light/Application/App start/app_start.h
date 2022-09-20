/*
 * app_start.h
 *
 * Created: 9/18/2022 8:38:09 PM
 *  Author: Welcome
 */ 


#ifndef APP_START_H_
#define APP_START_H_

// include traffic light drivers
#include "../../MCAL/Timer 0 driver/drivers_timer_0.h"
// include led drivers
#include "../../ECUAL/LED driver/drivers_led.h"
// include led drivers
#include "../../MCAL/Interrupt driver/drivers_interrupt.h"
// include initialization driver for application
#include "../App init/app_init.h"

// driver functions
//-- system flow function
void APP_start();

#endif /* APP_START_H_ */