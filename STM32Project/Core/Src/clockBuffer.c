/*
 * clockBuffer.c
 *
 *  Created on: Sep 29, 2024
 *      Author: Do Tuan Anh
 */

#include "clockBuffer.h"
#include "global.h"
#include "control7SEG_LED.h"

void updateClockBuffer()
{
	if(hour/10 == 0)
	{
		led_buffer[0] = 0;
		led_buffer[1] = hour;
	}
	else
	{
		led_buffer[0] = hour/10;
		led_buffer[1] = hour%10;
	}

	if(minute/10 == 0)
	{
		led_buffer[2] = 0;
		led_buffer[3] = minute;
	}
	else
	{
		led_buffer[2] = minute/10;
		led_buffer[3] = minute%10;
	}
}
