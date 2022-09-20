/*
 * drivers_dio.h
 *
 * Created: 9/18/2022 3:20:26 PM
 *  Author: Welcome
 */ 


#ifndef DRIVERS_DIO_H_
#define DRIVERS_DIO_H_

// include registers_dio.h
#include "registers_dio.h"

// Direction state
typedef enum{
	IN, // 0
	OUT // 1
}direction;

// value state
typedef enum{
	LOW, // 0
	HIGH // 1
}value;

// driver functions
//initialization of DIO port pins
void DIO_init(uint8_t PORTnum, uint8_t PINnum, uint8_t dir);
//writing into DIO port pins
void DIO_write(uint8_t PORTnum, uint8_t PINnum, uint8_t val);
//toggle state of DIO port pins
void DIO_toggle(uint8_t PORTnum, uint8_t PINnum);
//read from DIO port pins
void DIO_read(uint8_t PORTnum, uint8_t PINnum, uint8_t* val);

#endif /* DRIVERS_DIO_H_ */