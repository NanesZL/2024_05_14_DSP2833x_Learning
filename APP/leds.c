/*
 * LED.c
 *
 *  Created on: 2024年5月14日
 *      Author: 31904
 */

#include "LEDS.h"

/*******************************************************************************
 * 函 数 名         : LED_Init
 * 函数功能         : LED初始化函数
 * 输    入         : 无
 * 输    出         : 无
 *******************************************************************************/
void LEDS_Init()
{
    EALLOW;                                  // 关闭写保护
    SysCtrlRegs.PCLKCR3.bit.GPIOINENCLK = 1; // 开启GPIO时钟

    // LED1端口配置
    GpioCtrlRegs.GPCMUX1.bit.GPIO68 = 0; // 设置为通用GPIO功能
    GpioCtrlRegs.GPCDIR.bit.GPIO68 = 1;  // 设置GPIO方向为输出
    GpioCtrlRegs.GPCPUD.bit.GPIO68 = 0;  // 使能GPIO上拉电阻

    GpioDataRegs.GPCSET.bit.GPIO68 = 1; // 设置GPIO输出高电平

    EDIS; // 开启写保护
}

void LEDS_ON()
{
    GpioDataRegs.GPCCLEAR.bit.GPIO68 = 1; // 设置GPIO输出低电平
}

void LEDS_OFF()
{
    GpioDataRegs.GPCSET.bit.GPIO68 = 1; // 设置GPIO输出高电平
}

void LEDS_Toggle()
{
    GpioDataRegs.GPCTOGGLE.bit.GPIO68 = 1; // 设置GPIO输出翻转信号
}

/**
 * @description: 初始化LED1 对应的GPIO为68
 * @return {*}
 */
void LED1_Init()
{
    EALLOW;                                  // 关闭写保护
    SysCtrlRegs.PCLKCR3.bit.GPIOINENCLK = 1; // 开启GPIO时钟

    // LED1端口配置
    GpioCtrlRegs.GPCMUX1.bit.GPIO68 = 0; // 设置为通用GPIO功能
    GpioCtrlRegs.GPCDIR.bit.GPIO68 = 1;  // 设置GPIO方向为输出
    GpioCtrlRegs.GPCPUD.bit.GPIO68 = 0;  // 使能GPIO上拉电阻

    GpioDataRegs.GPCSET.bit.GPIO68 = 1; // 设置GPIO输出高电平

    EDIS; // 开启写保护
}

void LED1_ON()
{
    GpioDataRegs.GPCCLEAR.bit.GPIO68=1;
}

void LED1_OFF()
{
    GpioDataRegs.GPCSET.bit.GPIO68 = 1; // 设置GPIO输出高电平
}

void LED1_Toggle()
{
    GpioDataRegs.GPCTOGGLE.bit.GPIO68 = 1; // 设置GPIO输出翻转信号
}


/**
 * @description: 初始化LED2 对应的GPIO为67
 * @return {*}
 */
void LED2_Init()
{
    EALLOW;                                  // 关闭写保护
    SysCtrlRegs.PCLKCR3.bit.GPIOINENCLK = 1; // 开启GPIO时钟

    // LED1端口配置
    GpioCtrlRegs.GPCMUX1.bit.GPIO67 = 0; // 设置为通用GPIO功能
    GpioCtrlRegs.GPCDIR.bit.GPIO67 = 1;  // 设置GPIO方向为输出
    GpioCtrlRegs.GPCPUD.bit.GPIO67 = 0;  // 使能GPIO上拉电阻

    GpioDataRegs.GPCSET.bit.GPIO67 = 1; // 设置GPIO输出高电平

    EDIS; // 开启写保护
}

void LED2_ON()
{
    GpioDataRegs.GPCCLEAR.bit.GPIO67=1;
}

void LED2_OFF()
{
    GpioDataRegs.GPCSET.bit.GPIO67 = 1; // 设置GPIO输出高电平
}

void LED2_Toggle()
{
    GpioDataRegs.GPCTOGGLE.bit.GPIO67 = 1; // 设置GPIO输出翻转信号
}

void LED6_Init()
{
    EALLOW;                                  // 关闭写保护
    SysCtrlRegs.PCLKCR3.bit.GPIOINENCLK = 1; // 开启GPIO时钟

    // LED6端口配置
    GpioCtrlRegs.GPAMUX1.bit.GPIO10 = 0; // 设置为通用GPIO功能
    GpioCtrlRegs.GPADIR.bit.GPIO10 = 1;  // 设置GPIO方向为输出
    GpioCtrlRegs.GPAPUD.bit.GPIO10 = 0;  // 使能GPIO上拉电阻

    GpioDataRegs.GPASET.bit.GPIO10 = 1; // 设置GPIO输出高电平

    EDIS; // 开启写保护
}

void LED7_Init()
{
    EALLOW;                                  // 关闭写保护
    SysCtrlRegs.PCLKCR3.bit.GPIOINENCLK = 1; // 开启GPIO时钟

    // LED1端口配置
    GpioCtrlRegs.GPAMUX1.bit.GPIO11 = 0; // 设置为通用GPIO功能
    GpioCtrlRegs.GPADIR.bit.GPIO11 = 1;  // 设置GPIO方向为输出
    GpioCtrlRegs.GPAPUD.bit.GPIO11 = 0;  // 使能GPIO上拉电阻

    GpioDataRegs.GPASET.bit.GPIO11 = 1; // 设置GPIO输出高电平

    EDIS; // 开启写保护
}
