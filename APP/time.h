/*
 * time.h
 *
 *  Created on: 2018-1-24
 *      Author: Administrator
 */

#ifndef TIME_H_
#define TIME_H_


#include "main.h"
#include "leds.h"


void TIM0_Init(float Freq, float Period);
interrupt void TIM0_IRQn(void);

void TIM1_Init(float Freq, float Period);
interrupt void TIM1_IRQn(void);

void TIM2_Init(float Freq, float Period);
interrupt void TIM2_IRQn(void);


#endif /* TIME_H_ */
