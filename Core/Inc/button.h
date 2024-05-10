/*
 * button.h
 *
 *  Created on: May 6, 2024
 *      Author: Dell
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "global.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int button1_flag;
extern int button2_flag;
extern int button3_flag;

void getkeyInput();


#endif /* INC_BUTTON_H_ */
