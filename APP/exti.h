#ifndef EXTI_H_
#define EXTI_H_

#include "main.h"
#include "leds.h"
#include "key.h"

void EXTI1_Init(void);
interrupt void EXTI1_IRQn(void);

void EXTI2_Init(void);
interrupt void EXTI2_IRQn(void);


#endif /* EXTI_H_ */
