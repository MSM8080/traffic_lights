/*
 * traffic light.c
 *
 * Created: 9/18/2022 2:36:15 PM
 * Author : Welcome
 */ 

// #include <avr/io.h>
#include "ECUAL/LED driver/drivers_led.h"
#include "ECUAL/Button driver/drivers_button.h"
#include "Application/App init/app_init.h"
#include "Application/App start/app_start.h"

int main(void)
{
	//uint8_t value = 0;

	App_init();

	/* Replace with your application code */
    while (1) 
    {
		APP_start();
	}
}

