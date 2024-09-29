/*
 * control7SEG_LED.h
 *
 *  Created on: Sep 29, 2024
 *      Author: Do Tuan Anh
 */

#ifndef INC_CONTROL7SEG_LED_H_
#define INC_CONTROL7SEG_LED_H_

extern const int MAX_LED;
extern int index_led;

void display7SEG(int num);
void update7SEG(int index);

#endif /* INC_CONTROL7SEG_LED_H_ */
