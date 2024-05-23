/*
 * LED.h
 *
 *  Created on: 2024?¨º5??14??
 *      Author: 31904
 */

#ifndef LEDS_H_
#define LEDS_H_

#include "main.h"
#include "DSP2833x_Gpio.h"

void LEDS_Init();
void LEDS_ON();
void LEDS_OFF();
void LEDS_Toggle();

void LED1_Init();
void LED1_ON();
void LED1_OFF();
void LED1_Toggle();

void LED2_Init();
void LED2_ON();
void LED2_OFF();
void LED2_Toggle();

void LED6_Init();
void LED7_Init();



#endif /* LEDS_H_ */
