/*
 * global.h
 *
 *  Created on: May 6, 2024
 *      Author: Dell
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "main.h"
#include "button.h"

#define INIT		1
#define AUTO_RED	2
#define AUTO_YELLOW	3
#define AUTO_GREEN	4

#define MAN_RED = 12;
#define MAN_GREEN = 13;
#define MAN_YELLOW = 14;

extern int status;
extern int count1;
extern int count2;
extern int LedStatus;
extern int manualCount1;
extern int manualCount2;

#endif /* INC_GLOBAL_H_ */
