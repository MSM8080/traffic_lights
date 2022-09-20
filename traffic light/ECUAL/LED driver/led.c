/*
 * led.c
 *
 * Created: 9/18/2022 4:40:16 PM
 *  Author: Welcome
 */ 

// include led driver
#include "drivers_led.h"

// driver functions
//initialization of LED port pins
void LED_init(uint8_t ledport, uint8_t ledpin)
{
	DIO_init(ledport,ledpin,OUT);
}

//writing high into LED port pins
void LED_on(uint8_t ledport, uint8_t ledpin)
{
	DIO_write(ledport,ledpin,HIGH);
}

//writing low into LED port pins
void LED_off(uint8_t ledport, uint8_t ledpin)
{
	DIO_write(ledport,ledpin,LOW);
}

//toggle state of LED port pins
void LED_toggle(uint8_t ledport, uint8_t ledpin)
{
	DIO_toggle(ledport,ledpin);
}
