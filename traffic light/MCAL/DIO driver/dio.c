/*
 * dio.c
 *
 * Created: 9/18/2022 3:21:26 PM
 *  Author: Welcome
 */ 

// include drivers_dio.h
#include "drivers_dio.h"

// function take PORTnum and search for PORTX & return pointer to its PIN address
volatile PORT_REGS* wihch_port(uint8_t PORTnum)
{
	switch(PORTnum)
	{
		case 'A':return PORTA;break;
		case 'B':return PORTB;break;
		case 'C':return PORTC;break;
		case 'D':return PORTD;break;
	}
}

// driver functions definitions
//--initialization of DIO port pins
void DIO_init(uint8_t PORTnum, uint8_t PINnum, uint8_t dir)
{
	volatile PORT_REGS* PORT_G = 0;
	PORT_G = wihch_port(PORTnum);
	
	if(dir == OUT)
	SETBIT(PORT_G->DDR,PINnum);
	else if(dir==IN)
	CLEARBIT(PORT_G->DDR,PINnum);
}

//--writing into DIO port pins
void DIO_write(uint8_t PORTnum, uint8_t PINnum, uint8_t val)
{
	
	volatile PORT_REGS* PORT_G = 0;
	PORT_G = wihch_port(PORTnum);

	if(val==HIGH)
	SETBIT(PORT_G->PORT,PINnum);
	else if(val==LOW)
	CLEARBIT(PORT_G->PORT,PINnum);
}

//--toggle state of DIO port pins
void DIO_toggle(uint8_t PORTnum, uint8_t PINnum)
{
	volatile PORT_REGS* PORT_G = 0;
	PORT_G = wihch_port(PORTnum);
	
	TOGGLEBIT(PORT_G->PORT,PINnum);
}

//--read from DIO port pins
void DIO_read(uint8_t PORTnum, uint8_t PINnum, uint8_t* val)
{
	volatile PORT_REGS* PORT_G = 0;
	PORT_G = wihch_port(PORTnum);
	*val = GETBIT(PORT_G->PIN,PINnum);
}
