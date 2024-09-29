/*
 * controlMatrix.c
 *
 *  Created on: Sep 29, 2024
 *      Author: Do Tuan Anh
 */

#include "controlMatrix.h"
#include "main.h"

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0xC3,0x81,0x18,0x3C,0x00,0x00,0x3C,0x3C};

void displayLEDMatrix(int row, int column)
{
	switch(row)
	{
	case 0:
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);

		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, (column & 1));
		column = column >> 1;
		break;
	case 1:
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);

		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, (column & 1));
		column = column >> 1;
		break;
	case 2:
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);

		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, (column & 1));
		column = column >> 1;
		break;
	case 3:
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);

		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, (column & 1));
		column = column >> 1;
		break;
	case 4:
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);

		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, (column & 1));
		column = column >> 1;
		break;
	case 5:
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);

		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, (column & 1));
		column = column >> 1;
		break;
	case 6:
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);

		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, (column & 1));
		column = column >> 1;
		break;
	case 7:
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);

		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, (column & 1));
		column = column >> 1;
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, (column & 1));
		column = column >> 1;
		break;
	default:
		break;

	}
}
void updateLEDMatrix(int index)
{
	switch(index)
	{
	case 0:
		displayLEDMatrix(0, matrix_buffer[0]);
		break;
	case 1:
		displayLEDMatrix(1, matrix_buffer[1]);
		break;
	case 2:
		displayLEDMatrix(2, matrix_buffer[2]);
		break;
	case 3:
		displayLEDMatrix(3, matrix_buffer[3]);
		break;
	case 4:
		displayLEDMatrix(4, matrix_buffer[4]);
		break;
	case 5:
		displayLEDMatrix(5, matrix_buffer[5]);
		break;
	case 6:
		displayLEDMatrix(6, matrix_buffer[6]);
		break;
	case 7:
		displayLEDMatrix(7, matrix_buffer[7]);
		break;
	default:
		break;
	}
}

void updateMatrix_buffer()
{
	matrix_buffer[0] = (matrix_buffer[0] << 7) | (matrix_buffer[0] >> 1);
	matrix_buffer[1] = (matrix_buffer[1] << 7) | (matrix_buffer[1] >> 1);
	matrix_buffer[2] = (matrix_buffer[2] << 7) | (matrix_buffer[2] >> 1);
	matrix_buffer[3] = (matrix_buffer[3] << 7) | (matrix_buffer[3] >> 1);
	matrix_buffer[4] = (matrix_buffer[4] << 7) | (matrix_buffer[4] >> 1);
	matrix_buffer[5] = (matrix_buffer[5] << 7) | (matrix_buffer[5] >> 1);
	matrix_buffer[6] = (matrix_buffer[6] << 7) | (matrix_buffer[6] >> 1);
	matrix_buffer[7] = (matrix_buffer[7] << 7) | (matrix_buffer[7] >> 1);
}
