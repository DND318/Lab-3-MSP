/*
 * fsm_normal.c
 *
 *  Created on: May 6, 2024
 *      Author: Dell
 */

#include "fsm_normal.h"

void fsm_normal_run1(){
	switch(status){
	case INIT:
		HAL_GPIO_WritePin(GPIOA, LED_GREEN1_Pin|LED_GREEN2_Pin|LED_YELLOW1_Pin|LED_YELLOW2_Pin|LED_RED1_Pin|LED_RED2_Pin, GPIO_PIN_SET);
		status = AUTO_RED;
		setTimer1(500);
		setTimer2(500);
		break;

	case AUTO_RED:
		HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_RESET);
		if(timer1_flag ==1){
			status = AUTO_GREEN;
			setTimer1(3000);
		}
		break;
	case AUTO_GREEN:
		HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);

		if(timer1_flag ==1){
			status = AUTO_YELLOW;
			setTimer1(2000);
		}
		break;
	case AUTO_YELLOW:
		HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_RESET);
		if(timer1_flag ==1){
			status = AUTO_RED;
			setTimer1(5000);
		}
		break;
	default:
		break;
	}
}

void fsm_normal_run2(){
	switch(status){
	case INIT:
		HAL_GPIO_WritePin(LED_RED2_GPIO_Port,LED_RED2_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port,LED_YELLOW2_Pin , GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port,LED_GREEN2_Pin , GPIO_PIN_SET);
		status = AUTO_GREEN;
		setTimer2(5000);
		break;
	case AUTO_GREEN:
		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_RESET);
		if(timer2_flag ==1){
			status = AUTO_YELLOW;
			setTimer2(2000);
		}
		break;
	case AUTO_YELLOW:
		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_RESET);
		if(timer2_flag ==1){
			status = AUTO_RED;
			setTimer2(3000);
		}
		break;
	case AUTO_RED:
		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_SET);
		if(timer2_flag ==1){
			status = AUTO_GREEN;
			setTimer2(5000);
		}
		break;
	default:
		break;
	}
}
