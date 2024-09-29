/*
 * digitalClock.c
 *
 *  Created on: Sep 29, 2024
 *      Author: Do Tuan Anh
 */

#include "global.h"
#include "digitalClock.h"

void digitalClock()
{
	  second++;
	  if(second >=60)
	  {
		  second = 0;
		  minute++;
	  }
	  if(minute >= 60)
	  {
		  minute = 0;
		  hour++;
	  }
	  if(hour == 24)
	  {
		  hour = 0;
	  }
}

