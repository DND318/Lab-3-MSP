/*
 * button.c
 *
 *  Created on: May 6, 2024
 *      Author: Dell
 */
#include "button.h"
int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int TimeOutForKeyPress =  500;
int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int isButton1Pressed(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}
int isButton2Pressed(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}
int isButton3Pressed(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(){
	//TODO
	//HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	button1_flag = 1;
	button2_flag = 1;
	button3_flag = 1;
}

void getkeyInput(){
	//For Button1
  KeyReg2 = KeyReg1;
  KeyReg1 = KeyReg0;
  KeyReg0 = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);
  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
    if (KeyReg2 != KeyReg3){
      KeyReg3 = KeyReg2;

      if (KeyReg3 == PRESSED_STATE){
        TimeOutForKeyPress = 500;
        subKeyProcess();
      }
    }else{
       TimeOutForKeyPress --;
        if (TimeOutForKeyPress == 0){
          KeyReg3 = NORMAL_STATE;
        }
    }
  }
  // For Button 2
    KeyReg2 = KeyReg1;
    KeyReg1 = KeyReg0;
    KeyReg0 = HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin);
    if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
      if (KeyReg2 != KeyReg3){
        KeyReg3 = KeyReg2;

        if (KeyReg3 == PRESSED_STATE){
          TimeOutForKeyPress = 500;
          subKeyProcess();
        }
      }else{
         TimeOutForKeyPress --;
          if (TimeOutForKeyPress == 0){
            KeyReg3 = NORMAL_STATE;
          }
      }
    }

    // For Button 3
    KeyReg2 = KeyReg1;
    KeyReg1 = KeyReg0;
    KeyReg0 = HAL_GPIO_ReadPin(BUTTON3_GPIO_Port, BUTTON3_Pin);
    if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
      if (KeyReg2 != KeyReg3){
        KeyReg3 = KeyReg2;

        if (KeyReg3 == PRESSED_STATE){
          TimeOutForKeyPress = 500;
          subKeyProcess();
        }
      }else{
         TimeOutForKeyPress --;
          if (TimeOutForKeyPress == 0){
            KeyReg3 = NORMAL_STATE;
          }
      }
    }
  }

