///*
// * 7SEG_DISPLAY.c
// *
// *  Created on: May 7, 2024
// *      Author: Dell
// */
//#include "main.h"
//#include "7SEG_DISPLAY.h"
//
//int buffer[10] = {1,2,3,4,5,6,7,8,9,0};
//
////void display7SEG(int num){
////	switch (num){
////	case 0:
////			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_SET);
////			break;
////		case 1:
////			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_SET);
////	    	HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_SET);
////			break;
////		case 2:
////			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_RESET);
////			break;
////		case 3:
////			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_RESET);
////			break;
////		case 4:
////			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_RESET);
////			break;
////		case 5:
////			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_RESET);
////			break;
////		case 6:
////			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_RESET);
////			break;
////		case 7:
////			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_SET);
////			break;
////		case 8:
////			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_RESET);
////			break;
////		case 9:
////			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_SET);
////			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_RESET);
////			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_RESET);
////			break;
////		default:
////			break;
////	}
////}
//void displayMode(int MODE){
//
//	if(isButton1Pressed() == 1){
//		MODE++;
//		display7SEG(buffer[MODE]);
//		if(MODE >= 10 ) MODE = 0;
//	}
//}
//
