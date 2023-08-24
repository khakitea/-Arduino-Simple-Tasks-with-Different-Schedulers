/* University of Washington
 * ECE/CSE 474,  [7//2022]
 *
 *   [Robyn Jung] 
 *
 *   [Lab 2]
 *   [Task 1] Flash an external LED for 250ms every 1 second
 *
 */

#ifndef TASK_1_H
#define TASK_1_H

#include "globals.h"

/**************************************************************
 *              FUNCTION PROTOTYPES
 **************************************************************/
 
/*
 * @brief task which flashes LED on for 250ms and turns LED off for 750ms
 */
void task1();

/*
 * @brief sets Arduino pin 34 (LED_PIN) to output mode using port manipulation
 */
void task_1_setup();





#endif
