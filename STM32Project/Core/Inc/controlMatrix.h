/*
 * controlMatrix.h
 *
 *  Created on: Sep 29, 2024
 *      Author: Do Tuan Anh
 */

#ifndef INC_CONTROLMATRIX_H_
#define INC_CONTROLMATRIX_H_

#include "main.h"

extern const int MAX_LED_MATRIX;
extern int index_led_matrix;
extern uint8_t matrix_buffer[8];

void displayLEDMatrix(int row, int column);
void updateLEDMatrix(int index);
void updateMatrix_buffer();

#endif /* INC_CONTROLMATRIX_H_ */
