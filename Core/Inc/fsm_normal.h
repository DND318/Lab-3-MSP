/*
 * fsm_normal.h
 *
 *  Created on: May 6, 2024
 *      Author: Dell
 */

#ifndef INC_FSM_NORMAL_H_
#define INC_FSM_NORMAL_H_

#include "global.h"

#define INIT 		1
#define RED_GREEN 	2
#define RED_YELLOW 	3
#define GREEN_RED	4
#define	YELLOW_RED 	5

#include "global.h"

void fsm_auto_run();
void handle7SEG();

#endif /* INC_FSM_NORMAL_H_ */
