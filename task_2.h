/* University of Washington
 * ECE/CSE 474,  [8//2022]
 *
 *   [Robyn Jung] 
 *
 *   [Lab 3]
 *   [Task 2] Play "Close Encounters of the Third Kind"
 *       Play the theme and sleep for 4 sec, then play again.
 *
 */

#ifndef TASK_2_H
#define TASK_2_H

#include "globals.h"
#include "task_3.h"

/**************************************************************
 *              FUNCTION PROTOTYPES
 **************************************************************/
 
/*
 * @brief task that plays 5 tones for 1 second each and delays for 4 seconds in cycle
 */
void task2();

/*
 * @brief enables audio playback using RR scheduler through direct port manipulation
 */
void sound_player();

/*
 * @brief sets up Timer Counter 4 for audio output (CTC Mode)
 */
void task_2_setup();

/*
 * @brief updates OCR4A value. useful for switching between tones
 * 
 * @param C: value to be set as OCR4A
 */
void updateFreq(int C);




#endif
