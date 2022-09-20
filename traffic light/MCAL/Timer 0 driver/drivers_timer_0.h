/*
 * drivers_timer_0.h
 *
 * Created: 9/18/2022 3:24:46 PM
 *  Author: Welcome
 */ 


#ifndef DRIVERS_TIMER_0_H_
#define DRIVERS_TIMER_0_H_

// include timer registers
#include "registers_timer_0.h"

// timer mode
typedef enum{
	NORMAL,
	PWM,
	CTC,
	FastPWM
}set_mode;

// timer prescaler
typedef enum{
	Stop,
	prescaler_1,
	prescaler_8,
	prescaler_64,
	prescaler_256,
	prescaler_1024
}start_stop_prescaler;

// driver functions
// Set timer value & mode
void Timer_set(uint8_t mode, uint8_t init_value);
// start timer
void Timer_start_stop(uint8_t prescaler);
// check timer state
void Timer_check_state(uint8_t* ovf);
// clear timer state
void Timer_clear_state();

#endif /* DRIVERS_TIMER_0_H_ */