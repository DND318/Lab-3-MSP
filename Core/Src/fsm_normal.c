#include "fsm_normal.h"
#include "software_timer.h"
#include "Light.h"
#include "global.h"
#include "button.h"


void fsm_normal_run() {
	switch(LedStatus){
		case INIT:
			Red1Green2();
			LedStatus = RED_GREEN;
			setTimer0(NORMAL_GREEN*100);
			setTimer1(1);
			setTimer2(100);
			break;
		case RED_GREEN:
			Red1Green2();
			if (timer0_flag == 1){
				LedStatus = RED_YELLOW;
				count1 = NORMAL_YELLOW;
				count2 = NORMAL_YELLOW;
				setTimer0(NORMAL_YELLOW*100);
			}
			if (is_button_pressed(0) == 1){
					LedStatus = MAN_RED;
					mode = 2;
					setTimer3(20);
					setTimer0(1000);
			}
			break;

		case RED_YELLOW:
			Red1Yellow2();
			if (timer0_flag == 1){
				LedStatus = GREEN_RED;
				count1 = NORMAL_GREEN;
				count2 = NORMAL_RED;
				setTimer0(NORMAL_GREEN*100);
			}
			break;
			if (is_button_pressed(0) == 1){
					LedStatus = MAN_RED;
					mode = 2;
					setTimer3(20);
					setTimer0(1000);
			}
		case GREEN_RED:
			Green1Red2();
			if (timer0_flag == 1){
				LedStatus = YELLOW_RED;
				count1 = NORMAL_YELLOW;
				count2= NORMAL_YELLOW;
				setTimer0(NORMAL_YELLOW*100);
			}
			if (is_button_pressed(0) == 1){
					LedStatus = MAN_GREEN;
					mode = 2;
					setTimer3(20);
					setTimer0(1000);
			}
			break;

		case YELLOW_RED:
			Yellow1Red2();
			if (timer0_flag == 1){
				LedStatus = RED_GREEN;
				count1 = NORMAL_RED;
				count2 = NORMAL_GREEN;
				setTimer0(NORMAL_GREEN*100);
			}
			if (is_button_pressed(0) == 1){
					LedStatus = MAN_YELLOW;
					mode = 2;
					setTimer3(20);
					setTimer0(1000);
			}
			break;
		default:
			break;
	}
	// decrease time each second
	if (timer2_flag == 1){
		count1--;
		count2--;
		setTimer2(100);
	}
	// display 7seg
	if (timer1_flag == 1){
		  handle7SEG();
		  setTimer1(1);
	 }


}
void handle7SEG() {
	switch (mode){
		case 1:
			update7SEG();
			break;
		default:
			update7SEG_2(countMan1);
			break;
	}
}
