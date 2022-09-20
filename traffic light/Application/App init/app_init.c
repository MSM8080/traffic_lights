/*
 * app_init.c
 *
 * Created: 9/18/2022 5:21:51 PM
 *  Author: Welcome
 */ 

#include "app_init.h"

// driver functions
//initialization of car traffic LEDs
void App_init()
{
	// car traffic
	LED_init('A',RED); // RED
	LED_init('A',YELLOW); // YELLOW
	LED_init('A',GREEN); // GREEN

	// pedestrian traffic
	LED_init('B',RED); // RED
	LED_init('B',YELLOW); // YELLOW
	LED_init('B',GREEN); // GREEN
	
	BUTTON_init('D',2);
	
	Timer_set(NORMAL,0);

	interrupt_globle_enable();		// enable interrupts in all ATmega 32
	interrupt_sense(RAISING_EEDGE); // choose detection mode
	interrupt_enable();				// start interrupt listening
	

}

