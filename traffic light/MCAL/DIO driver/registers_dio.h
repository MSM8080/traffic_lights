/*
 * registers_dio.h
 *
 * Created: 9/18/2022 3:19:14 PM
 *  Author: Welcome
 */ 


#ifndef REGISTERS_DIO_H_
#define REGISTERS_DIO_H_

// include Lib files.h
#include "../../Utilities/types.h"
#include "../../Utilities/bit_math.h"

// struct for PORT registers in order of its memory location
typedef struct {
	uint8_t PIN;
	uint8_t DDR;
	uint8_t PORT;
}PORT_REGS;

// define pointers to PIN of each PORT
#define PORTA ((volatile PORT_REGS*) 0x39)
#define PORTB ((volatile PORT_REGS*) 0x36)
#define PORTC ((volatile PORT_REGS*) 0x33)
#define PORTD ((volatile PORT_REGS*) 0x30)

#endif /* REGISTERS_DIO_H_ */