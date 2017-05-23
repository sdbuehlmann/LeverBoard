/*
last change: 08.5.2017
version: 0.1
*/

#ifndef INTERFACE_H_INCLUDED
#define INTERFACE_H_INCLUDED

void initINTERFACE();                   //Initialices the Interface
void setNoBreakAlert();					//Turns piezo on
void quitNoBtreakAlert();				//Turns piezo off

void setBatteryAlert();					//Turns piezo on
void quitBatteryAlert();				//Turns piezo off
void timeroverflow2();					//Called when timer2 has an overflow. Does nothing
void flashLEDs();						//Flashes all 4 Energy LEDs
char give_new_dutycycle();				//Returns the new duty cycle, considering the angle of the board.

#endif // INTERFACE_H_INCLUDED
