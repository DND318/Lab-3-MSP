/*
 * modifyLed.c
 *
 *  Created on: May 11, 2024
 *      Author: Dell
 */

#include "fsm_normal.h"
#include "Light.h"
#include "global.h"



void fsm_modify_run(){
	switch(LedStatus){
		case MAN_RED:
			if (timer3_flag == 1){
				red_red();
				setTimer3(20);
			}
//			red_green();

			if (timer0_flag == 1 ){
				LedStatus = GREEN_RED;
				count1 = NORMAL_GREEN;
				count2 = NORMAL_RED;
				setTimer1(NORMAL_GREEN);
				mode = 1;
			}
			if ((is_long_button_flag() == 1)){
				countMan1++;
			}
			if (is_button_pressed(0) == 1){
				LedStatus = MAN_YELLOW;
				countMan1 = NORMAL_YELLOW;
				mode = 3;
				setTimer0(10000);
			}
			if (is_button_pressed(1) == 1){
				countMan1 = countMan1 + 1;
			}
			if (is_button_pressed(2) == 1){
				LedStatus = RED_GREEN;
				mode = 1;
				NORMAL_RED = countMan1;
				NORMAL_GREEN = countMan1 * 70/100;
				NORMAL_YELLOW = NORMAL_RED - NORMAL_GREEN;

				count1 = NORMAL_RED;
				count2 = NORMAL_GREEN;
				setTimer0(NORMAL_GREEN*100);

			}
			break;
		case MAN_YELLOW:
//			yellow_red();
			if (timer3_flag == 1){
				yellow_yellow();
				setTimer3(20);
			}
			if (timer0_flag == 1 ){
				LedStatus = YELLOW_RED;
				count1 = NORMAL_YELLOW;
				count2 = NORMAL_RED;
				setTimer1(NORMAL_YELLOW);
			}
			if (is_button_pressed(0) == 1){
				LedStatus = MAN_GREEN;
				countMan1 = NORMAL_GREEN;
				mode = 4;
				setTimer0(10000);
			}
			if (is_button_pressed(1) == 1){
				countMan1 = countMan1 + 1;
			}
			if ((is_long_button_flag() == 1)){
				countMan1++;
			}
			if (is_button_pressed(2) == 1){
				LedStatus = YELLOW_RED;
				mode = 1;
				NORMAL_YELLOW = countMan1;
				NORMAL_RED = countMan1 /0.3;
				NORMAL_GREEN = NORMAL_RED - NORMAL_YELLOW;

				count1 = NORMAL_YELLOW;
				count2 = NORMAL_RED;
				setTimer0(NORMAL_YELLOW*100);

			}
			break;
		case MAN_GREEN:
//			green_red();
			if (timer3_flag == 1){
				green_green();
				setTimer3(20);
			}
			if (timer0_flag == 1 ){
				LedStatus = GREEN_RED;
				count1 = NORMAL_GREEN;
				count2 = NORMAL_RED;
				setTimer1(NORMAL_GREEN);
			}
			if (is_button_pressed(0) == 1){
				LedStatus = MAN_RED;
				countMan1 = NORMAL_RED;
				mode = 2;
				setTimer0(10000);
			}
			if (is_button_pressed(1) == 1){
				countMan1 = countMan1 + 1;
			}
			if ((is_long_button_flag() == 1)){
				countMan1++;
			}
			if (is_button_pressed(2) == 1){
				LedStatus = GREEN_RED;
				mode = 1;
				NORMAL_GREEN = countMan1;
				NORMAL_RED = countMan1/0.7;
				NORMAL_YELLOW = NORMAL_RED - NORMAL_GREEN;

				count1 = NORMAL_GREEN;
				count2 = NORMAL_RED;
				setTimer0(NORMAL_GREEN*100);

			}
			break;
		default:
			break;
	}
}
