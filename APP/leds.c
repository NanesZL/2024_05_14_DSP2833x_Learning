/*
 * LED.c
 *
 *  Created on: 2024��5��14��
 *      Author: 31904
 */

#include "LEDS.h"

/*******************************************************************************
 * �� �� ��         : LED_Init
 * ��������         : LED��ʼ������
 * ��    ��         : ��
 * ��    ��         : ��
 *******************************************************************************/
void LEDS_Init()
{
    EALLOW;                                  // �ر�д����
    SysCtrlRegs.PCLKCR3.bit.GPIOINENCLK = 1; // ����GPIOʱ��

    // LED1�˿�����
    GpioCtrlRegs.GPCMUX1.bit.GPIO68 = 0; // ����Ϊͨ��GPIO����
    GpioCtrlRegs.GPCDIR.bit.GPIO68 = 1;  // ����GPIO����Ϊ���
    GpioCtrlRegs.GPCPUD.bit.GPIO68 = 0;  // ʹ��GPIO��������

    GpioDataRegs.GPCSET.bit.GPIO68 = 1; // ����GPIO����ߵ�ƽ

    EDIS; // ����д����
}

void LEDS_ON()
{
    GpioDataRegs.GPCCLEAR.bit.GPIO68 = 1; // ����GPIO����͵�ƽ
}

void LEDS_OFF()
{
    GpioDataRegs.GPCSET.bit.GPIO68 = 1; // ����GPIO����ߵ�ƽ
}

void LEDS_Toggle()
{
    GpioDataRegs.GPCTOGGLE.bit.GPIO68 = 1; // ����GPIO�����ת�ź�
}

/**
 * @description: ��ʼ��LED1 ��Ӧ��GPIOΪ68
 * @return {*}
 */
void LED1_Init()
{
    EALLOW;                                  // �ر�д����
    SysCtrlRegs.PCLKCR3.bit.GPIOINENCLK = 1; // ����GPIOʱ��

    // LED1�˿�����
    GpioCtrlRegs.GPCMUX1.bit.GPIO68 = 0; // ����Ϊͨ��GPIO����
    GpioCtrlRegs.GPCDIR.bit.GPIO68 = 1;  // ����GPIO����Ϊ���
    GpioCtrlRegs.GPCPUD.bit.GPIO68 = 0;  // ʹ��GPIO��������

    GpioDataRegs.GPCSET.bit.GPIO68 = 1; // ����GPIO����ߵ�ƽ

    EDIS; // ����д����
}

void LED1_ON()
{
    GpioDataRegs.GPCCLEAR.bit.GPIO68=1;
}

void LED1_OFF()
{
    GpioDataRegs.GPCSET.bit.GPIO68 = 1; // ����GPIO����ߵ�ƽ
}

void LED1_Toggle()
{
    GpioDataRegs.GPCTOGGLE.bit.GPIO68 = 1; // ����GPIO�����ת�ź�
}


/**
 * @description: ��ʼ��LED2 ��Ӧ��GPIOΪ67
 * @return {*}
 */
void LED2_Init()
{
    EALLOW;                                  // �ر�д����
    SysCtrlRegs.PCLKCR3.bit.GPIOINENCLK = 1; // ����GPIOʱ��

    // LED1�˿�����
    GpioCtrlRegs.GPCMUX1.bit.GPIO67 = 0; // ����Ϊͨ��GPIO����
    GpioCtrlRegs.GPCDIR.bit.GPIO67 = 1;  // ����GPIO����Ϊ���
    GpioCtrlRegs.GPCPUD.bit.GPIO67 = 0;  // ʹ��GPIO��������

    GpioDataRegs.GPCSET.bit.GPIO67 = 1; // ����GPIO����ߵ�ƽ

    EDIS; // ����д����
}

void LED2_ON()
{
    GpioDataRegs.GPCCLEAR.bit.GPIO67=1;
}

void LED2_OFF()
{
    GpioDataRegs.GPCSET.bit.GPIO67 = 1; // ����GPIO����ߵ�ƽ
}

void LED2_Toggle()
{
    GpioDataRegs.GPCTOGGLE.bit.GPIO67 = 1; // ����GPIO�����ת�ź�
}

void LED6_Init()
{
    EALLOW;                                  // �ر�д����
    SysCtrlRegs.PCLKCR3.bit.GPIOINENCLK = 1; // ����GPIOʱ��

    // LED6�˿�����
    GpioCtrlRegs.GPAMUX1.bit.GPIO10 = 0; // ����Ϊͨ��GPIO����
    GpioCtrlRegs.GPADIR.bit.GPIO10 = 1;  // ����GPIO����Ϊ���
    GpioCtrlRegs.GPAPUD.bit.GPIO10 = 0;  // ʹ��GPIO��������

    GpioDataRegs.GPASET.bit.GPIO10 = 1; // ����GPIO����ߵ�ƽ

    EDIS; // ����д����
}

void LED7_Init()
{
    EALLOW;                                  // �ر�д����
    SysCtrlRegs.PCLKCR3.bit.GPIOINENCLK = 1; // ����GPIOʱ��

    // LED1�˿�����
    GpioCtrlRegs.GPAMUX1.bit.GPIO11 = 0; // ����Ϊͨ��GPIO����
    GpioCtrlRegs.GPADIR.bit.GPIO11 = 1;  // ����GPIO����Ϊ���
    GpioCtrlRegs.GPAPUD.bit.GPIO11 = 0;  // ʹ��GPIO��������

    GpioDataRegs.GPASET.bit.GPIO11 = 1; // ����GPIO����ߵ�ƽ

    EDIS; // ����д����
}
