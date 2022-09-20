/*
 * registers_interrupt.h
 *
 * Created: 9/18/2022 3:37:13 PM
 *  Author: Welcome
 */ 


#ifndef REGISTERS_INTERRUPT_H_
#define REGISTERS_INTERRUPT_H_

// include Lib files.h
#include "../../Utilities/types.h"
#include "../../Utilities/bit_math.h"

// interrupt registers
#define MCUCR *((volatile uint8_t*)0x55) // interrupt mode register
#define GICR *((volatile uint8_t*)0x5B) // interrupt enable register
#define GIFR *((volatile uint8_t*)0x5A) // interrupt flag request register
#define SREG *((volatile uint8_t*)0x5F) // global interrupt enable register

// interrupt vectors
#define EXT_INT_0 __vector_1 // external interrupt request 0
#define TIMER_0 __vector_11 // timer 0 overflow interrupt request

// ISR definition
#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal,used));\
void INT_VECT(void)

#endif /* REGISTERS_INTERRUPT_H_ */