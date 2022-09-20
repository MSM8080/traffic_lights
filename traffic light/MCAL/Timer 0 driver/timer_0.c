/*
 * timer_0.c
 *
 * Created: 9/18/2022 3:23:46 PM
 *  Author: Welcome
 */ 

// include timer drivers
#include "drivers_timer_0.h"

// driver functions
// Set timer initial value & mode
void Timer_set(uint8_t mode,uint8_t init_value)
{
	switch(mode)
	{
		case NORMAL:
		{
			CLEARBIT(TCCR0,6); // WGM00 == 0
			CLEARBIT(TCCR0,3); // WGM01 == 0
		}
		break;
		
		case PWM:
		{
			SETBIT(TCCR0,6);   // WGM00 == 1
			CLEARBIT(TCCR0,3); // WGM01 == 0
		}
		break;
		
		case CTC:
		{
			CLEARBIT(TCCR0,6); // WGM00 == 0
			SETBIT(TCCR0,3);   // WGM01 == 1
		}
		break;
		
		case FastPWM:
		{
			SETBIT(TCCR0,6); // WGM00 == 1
			SETBIT(TCCR0,3); // WGM01 == 1
		}
		break;
	}
	
	TCNT0 = init_value;
	SETBIT(TIMSK,0); // pin TOIE0 for enable overflow timer 0 interrupt
}

// stop / start timer with many cases of prescaler
void Timer_start_stop(uint8_t prescaler)
{
	switch(prescaler)
	{
		case Stop:
		{
			CLEARBIT(TCCR0,0); // CS00 == 0
			CLEARBIT(TCCR0,1); // CS01 == 0
			CLEARBIT(TCCR0,2); // CS02 == 0
		}
		break;
		
		case prescaler_1:
		{
			SETBIT(TCCR0,0);   // CS00 == 1
			CLEARBIT(TCCR0,1); // CS01 == 0
			CLEARBIT(TCCR0,2); // CS02 == 0
		}

		break;
		
		case prescaler_8:
		{
			CLEARBIT(TCCR0,0); // CS00 == 0
			SETBIT(TCCR0,1);   // CS01 == 1
			CLEARBIT(TCCR0,2); // CS02 == 0
		}
		break;
		
		case prescaler_64:
		{
			SETBIT(TCCR0,0);   // CS00 == 1
			SETBIT(TCCR0,1);   // CS01 == 1
			CLEARBIT(TCCR0,2); // CS02 == 0
		}
		break;
		
		case prescaler_256:
		{
			CLEARBIT(TCCR0,0);   // CS00 == 0
			CLEARBIT(TCCR0,1);   // CS01 == 0
			SETBIT(TCCR0,2);	 // CS02 == 1
		}
		break;
		
		case prescaler_1024:
		{
			SETBIT(TCCR0,0);     // CS00 == 1
			CLEARBIT(TCCR0,1);   // CS01 == 0
			SETBIT(TCCR0,2);	 // CS02 == 1
		}
		break;
	}
}

// get timer state
void Timer_check_state(uint8_t* ovf)
{
	*ovf = GETBIT(TIFR,0);
}

// clear timer overflow flag
void Timer_clear_state()
{
	SETBIT(TIFR,0);
}