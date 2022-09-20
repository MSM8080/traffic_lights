/*
 * registers_timer_0.h
 *
 * Created: 9/18/2022 3:25:51 PM
 *  Author: Welcome
 */ 


#ifndef REGISTERS_TIMER_0_H_
#define REGISTERS_TIMER_0_H_

// include Lib files.h
#include "../../Utilities/types.h"
#include "../../Utilities/bit_math.h"

#define TCCR0 *((volatile uint8_t*)0x53) // start timing timer0 register
#define TCNT0 *((volatile uint8_t*)0x52) // set initial value timer0 register
#define TIFR *((volatile uint8_t*)0x58) //// overflow flag timer0 register
#define TIMSK *((volatile uint8_t*)0x59) //// timer 0 interrupt register

#endif /* REGISTERS_TIMER_0_H_ */