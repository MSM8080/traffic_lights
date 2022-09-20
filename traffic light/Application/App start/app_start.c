/*
 * app_start.c
 *
 * Created: 9/18/2022 8:37:55 PM
 *  Author: Welcome
 */ 

#include "app_start.h"

// for counting numbers of timer overflows
static uint8_t ovf_counter = 0;
// for know in which state we are in
static uint8_t current_state = 0;
// for know in which state we are going to
static uint8_t next_state = 0;

// driver functions
//-- system flow function
void APP_start()
{
	switch(next_state)
	{
		case 0:
		{
			current_state = 0;
			LED_on(CAR,RED);
			LED_on(Pedestrian,GREEN);
			Timer_start_stop(prescaler_1024);
			next_state = 5;	
		}
		break;

		case 1:
		{
			current_state = 1;
			LED_on(CAR,YELLOW);
			LED_on(Pedestrian,YELLOW);
			Timer_start_stop(prescaler_1024);
			next_state = 5;
		}
		break;

		case 2:
		{
			current_state = 2;
			LED_on(CAR,GREEN);
			LED_on(Pedestrian,RED);
			Timer_start_stop(prescaler_1024);
			next_state = 5;
		}
		break;

		case 3:
		{
			current_state = 3;
			LED_on(CAR,YELLOW);
			LED_on(Pedestrian,YELLOW);
			Timer_start_stop(prescaler_1024);
			next_state = 5;
		}
		break;
	}	
}


// timer 0 interrupt function
ISR(TIMER_0)
{
	if(ovf_counter > 17)
	{
		ovf_counter = 0;
		Timer_clear_state();
		switch(current_state)
		{
			case 0:
			{
				LED_off(CAR,RED);
				LED_off(Pedestrian,GREEN);
				Timer_start_stop(Stop);
				next_state = 1;
			}
			break;

			case 1:
			{
				LED_off(CAR,YELLOW);
				LED_off(Pedestrian,YELLOW);
				Timer_start_stop(Stop);
				next_state = 2;
			}
			break;

			case 2:
			{
				LED_off(CAR,GREEN);
				LED_off(Pedestrian,RED);
				Timer_start_stop(Stop);
				next_state = 3;
			}
			break;

			case 3:
			{
				LED_off(CAR,YELLOW);
				LED_off(Pedestrian,YELLOW);
				Timer_start_stop(Stop);
				next_state = 0;
			}
			break;			
		}
	}
	else if(current_state == 1 || current_state == 3)
	{
		LED_toggle(CAR,YELLOW);
		LED_toggle(Pedestrian,YELLOW);	
		ovf_counter++;
			
	}
	else
	{
		ovf_counter++;	
	}
}

ISR(EXT_INT_0)
{
	
}
