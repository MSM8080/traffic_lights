/*
 * drivers_interrupt.h
 *
 * Created: 9/18/2022 3:42:54 PM
 *  Author: Welcome
 */ 


#ifndef DRIVERS_INTERRUPT_H_
#define DRIVERS_INTERRUPT_H_

// include interrupt registers
#include "registers_interrupt.h"

// interrupt sense mode
typedef enum{
	LOW_LEVEL,
	ANY,
	FALLING_EDGE,
	RAISING_EEDGE
}senses;

// driver functions
//--enable global interrupt in micro controller
void interrupt_globle_enable();
//--disable global interrupt in micro controller
void interrupt_globle_disable();
//--choose detection flags mode
void interrupt_sense(uint8_t sense);
//--enable specific interrupt we will use in micro controller
void interrupt_enable();

#endif /* DRIVERS_INTERRUPT_H_ */