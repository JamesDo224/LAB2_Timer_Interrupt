/*
 * softwareTimer.h
 *
 *  Created on: Sep 29, 2024
 *      Author: Do Tuan Anh
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

extern int timer0_counter;
extern int timer0_flag;

extern int timer1_counter;
extern int timer1_flag;

extern int timer2_counter;
extern int timer2_flag;

extern int timer3_counter;
extern int timer3_flag;

extern int TIMER_CYCLE;

void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);

void timer_run();

#endif /* INC_SOFTWARETIMER_H_ */
