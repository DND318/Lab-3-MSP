/*
 * Light.c
 *
 *  Created on: May 10, 2024
 *      Author: Dell
 */
#include "Light.h"
#include "global.h"
int ledIndex = 0;
void RedGreen(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
}
void RedYellow(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
}
void GreenRed(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
}
void YellowRed(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
}
void GreenGreen(){
	HAL_GPIO_TogglePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
	HAL_GPIO_TogglePin(LED_GREEN2_GPIO_Port,LED_GREEN2_Pin );
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);

}
void RedRed(){
	HAL_GPIO_TogglePin(LED_RED1_GPIO_Port, LED_RED1_Pin);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
	HAL_GPIO_TogglePin(LED_RED2_GPIO_Port, LED_RED2_Pin);
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);

}
void YellowYellow(){
	HAL_GPIO_TogglePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin);
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
	HAL_GPIO_TogglePin(LED_YELLOW2_GPIO_Port,LED_YELLOW2_Pin );
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port,LED_RED2_Pin , RESET);
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
}

void display7SEG(int num){
	switch (num){
	case 0:
			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_SET);
	    	HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_SET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOA, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, SEG6_Pin, GPIO_PIN_RESET);
			break;
		default:
			break;
	}
}
void update7SEG (){

	switch (ledIndex)
		  {
			  case 0:
				  HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(DIGIT1_GPIO_Port, DIGIT1_Pin, GPIO_PIN_SET);
				  display7SEG(count1 / 10);
				  ledIndex = 1;
				  break;
			  case 1:
				  HAL_GPIO_WritePin(DIGIT1_GPIO_Port, DIGIT1_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(DIGIT2_GPIO_Port, DIGIT2_Pin, GPIO_PIN_SET);
				  display7SEG(count1 % 10);
				  ledIndex = 2;
				  break;
			  case 2:
				  HAL_GPIO_WritePin(DIGIT2_GPIO_Port, DIGIT2_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(DIGIT3_GPIO_Port, DIGIT3_Pin, GPIO_PIN_SET);
				  display7SEG(count2 / 10);
				  ledIndex = 3;
				  break;
			  case 3:
				  HAL_GPIO_WritePin(DIGIT3_GPIO_Port,DIGIT3_Pin , GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(DIGIT4_GPIO_Port,DIGIT4_Pin, GPIO_PIN_SET);
				  display7SEG(count2 % 10);
				  ledIndex = 4;
				  break;
			  case 4:
				  HAL_GPIO_WritePin(DIGIT4_GPIO_Port,DIGIT4_Pin , GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(MODE_GPIO_Port,MODE_Pin, GPIO_PIN_SET);
				  display7SEG(mode);
				  ledIndex = 0;
				  break;
		  }

}
void update7SEG_2 (int num){

	switch (ledIndex)
		  {
			  case 0:
				  HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(DIGIT1_GPIO_Port, DIGIT1_Pin, GPIO_PIN_SET);
				  display7SEG(num / 10);
				  ledIndex = 1;
				  break;
			  case 1:
				  HAL_GPIO_WritePin(DIGIT1_GPIO_Port, DIGIT1_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(DIGIT2_GPIO_Port, DIGIT2_Pin, GPIO_PIN_SET);
				  display7SEG(num % 10);
				  ledIndex = 2;
				  break;
			  case 2:
				  HAL_GPIO_WritePin(DIGIT2_GPIO_Port, DIGIT2_Pin, GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(DIGIT3_GPIO_Port, DIGIT3_Pin, GPIO_PIN_SET);
				  display7SEG(num / 10);
				  ledIndex = 3;
				  break;
			  case 3:
				  HAL_GPIO_WritePin(DIGIT3_GPIO_Port,DIGIT3_Pin , GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(DIGIT4_GPIO_Port,DIGIT4_Pin, GPIO_PIN_SET);
				  display7SEG(num % 10);
				  ledIndex = 4;
				  break;
			  case 4:
				  HAL_GPIO_WritePin(DIGIT4_GPIO_Port,DIGIT4_Pin , GPIO_PIN_RESET);
				  HAL_GPIO_WritePin(MODE_GPIO_Port,MODE_Pin, GPIO_PIN_SET);
				  display7SEG(mode);
				  ledIndex = 0;
				  break;
		  }

}
