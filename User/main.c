/*
 * main.c
 *
 *  Created on: 2018-3-21
 *      Author: Administrator
 */

#include "main.h"
#include "LEDS.h"
#include "key.h"
#include "exti.h"
#include "time.h"
#include "epwm.h"
#include "smg.h"
#include "adc.h"

void main()
{
    InitSysCtrl();

    InitPieCtrl();
    IER = 0x0000;
    IFR = 0x0000;
    InitPieVectTable();

    // LED1_Init();
    // LED2_Init();
    // EXTI1_Init();
    // EXTI2_Init();
    // TIM0_Init(CPU_FREQUENCY,500000);
    // EPWM1_Init(50000);
    // LED6_Init();
    // LED7_Init();
    // EPWM6_Init(500);
    SMG_Init();
    ADC_Init();


    // int i = 0;
    // unsigned char fx = 0;

    // KEY_Init();
    while (1)
    {
        SMG_DisplayFloat(ADC_ReadValueConv(),2);
        // if (KEY_Scan(0) == 1)
        // {
        //     LEDS_Toggle();
        // }
        // if (fx == 0)
        // {
        //     i++;
        //     if (i == 300)
        //     {
        //         fx = 1;
        //     }
        // }
        // else
        // {
        //     i--;
        //     if (i == 0)
        //     {
        //         fx = 0;
        //     }
        // }
        // EPwm6A_SetCompare(i); // i值最大可以取499，因为ARR最大值是499.
        // EPwm6B_SetCompare(300-i);       // i值最大可以取499，因为ARR最大值是499.
        // DELAY_US(10 * 1000);
    }
}
