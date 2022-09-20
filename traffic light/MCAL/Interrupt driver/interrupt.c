/*
 * interrupt.c
 *
 * Created: 9/18/2022 3:44:37 PM
 *  Author: Welcome
 */ 

// include interrupt drivers
#include "drivers_interrupt.h"

// driver functions
//--enable global interrupt in micro controller
void interrupt_globle_enable()
{
	SETBIT(SREG,7);
}

//--disable global interrupt in micro controller
void interrupt_globle_disable()
{
	CLEARBIT(SREG,7);
}

//--choose detection flags mode
void interrupt_sense(uint8_t sense)
{
	switch(sense)
	{
		case LOW_LEVEL:
		{
			CLEARBIT(MCUCR,0); // ISC00 == 0
			CLEARBIT(MCUCR,1); // ISC01 == 0
		}
		break;
		
		case ANY:
		{
			SETBIT(MCUCR,0);   // ISC00 == 1
			CLEARBIT(MCUCR,1); // ISC01 == 0
		}
		break;
		
		case FALLING_EDGE:
		{
			CLEARBIT(MCUCR,0);  // ISC00 == 0
			SETBIT(MCUCR,1);	// ISC01 == 1
		}
		break;
		
		case RAISING_EEDGE:
		{
			SETBIT(MCUCR,0); // ISC00 == 1
			SETBIT(MCUCR,1); // ISC01 == 1
		}
		break;
	}
}

//--enable specific interrupt we will use in micro controller
void interrupt_enable()
{
	SETBIT(GICR,6); // start listening by interrupt
}