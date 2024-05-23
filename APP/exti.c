#include "exti.h"

void EXTI1_Init(void)
{
	EALLOW;
	SysCtrlRegs.PCLKCR3.bit.GPIOINENCLK = 1; // GPIO input clock

	// KEY�˿�����
	GpioCtrlRegs.GPAMUX1.bit.GPIO12 = 0;
	GpioCtrlRegs.GPADIR.bit.GPIO12 = 0;
	GpioCtrlRegs.GPAPUD.bit.GPIO12 = 0;
	GpioCtrlRegs.GPAQSEL1.bit.GPIO12 = 0; // �ⲿ�ж�1��XINT1����ϵͳʱ��SYSCLKOUTͬ��

	GpioCtrlRegs.GPBMUX2.bit.GPIO48 = 0;
	GpioCtrlRegs.GPBDIR.bit.GPIO48 = 1;
	GpioCtrlRegs.GPBPUD.bit.GPIO48 = 0;
	GpioDataRegs.GPBCLEAR.bit.GPIO48 = 1;

	GpioIntRegs.GPIOXINT1SEL.bit.GPIOSEL = 12; // XINT1��GPIO12

	PieVectTable.XINT1 = &EXTI1_IRQn;

	PieCtrlRegs.PIEIER1.bit.INTx4 = 1; // ʹ��PIE��1��INT4

	XIntruptRegs.XINT1CR.bit.POLARITY = 0; // �½��ش����ж�
	XIntruptRegs.XINT1CR.bit.ENABLE = 1;   // ʹ��XINT1

	EDIS; // EDIS����˼�ǲ������޸ı������ļĴ���

	IER |= M_INT1; // ʹ��CPU�ж�1��INT1��
	EINT;		   // ��ȫ���ж�
	ERTM;
}

interrupt void EXTI1_IRQn(void)
{
	DELAY_US(15000); // ����������
	if (!KEY_H1)
	{
		LED1_Toggle();
	}
	// while (!KEY_H1)
	// {
	// 	LED1_Toggle();
	// };
	PieCtrlRegs.PIEACK.bit.ACK1 = 1;
}

void EXTI2_Init(void)
{
	EALLOW;
	SysCtrlRegs.PCLKCR3.bit.GPIOINENCLK = 1; // GPIO input clock

	// KEY�˿�����
	GpioCtrlRegs.GPAMUX1.bit.GPIO13 = 0;
	GpioCtrlRegs.GPADIR.bit.GPIO13 = 0;
	GpioCtrlRegs.GPAPUD.bit.GPIO13 = 0;
	GpioCtrlRegs.GPAQSEL1.bit.GPIO13 = 2;	  // �ⲿ�ж�2��XINT2�������޶�6����������
	GpioCtrlRegs.GPACTRL.bit.QUALPRD1 = 0xFF; // ÿ���������ڵ�����Ϊ510*SYSCLKOUT

	GpioCtrlRegs.GPBMUX2.bit.GPIO48 = 0;
	GpioCtrlRegs.GPBDIR.bit.GPIO48 = 1;
	GpioCtrlRegs.GPBPUD.bit.GPIO48 = 0;
	GpioDataRegs.GPBCLEAR.bit.GPIO48 = 1;

	GpioIntRegs.GPIOXINT2SEL.bit.GPIOSEL = 13; // XINT2��GPIO13

	PieVectTable.XINT2 = &EXTI2_IRQn;
	EDIS; // EDIS����˼�ǲ������޸ı������ļĴ���

	PieCtrlRegs.PIEIER1.bit.INTx5 = 1; // ʹ��PIE��1��INT5

	XIntruptRegs.XINT2CR.bit.POLARITY = 0; // �½��ش����ж�
	XIntruptRegs.XINT2CR.bit.ENABLE = 1;   // ʹ��XINT2

	IER |= M_INT1; // ʹ��CPU�ж�1��INT1��
	EINT;		   // ��ȫ���ж�
	ERTM;
}

interrupt void EXTI2_IRQn(void)
{
	DELAY_US(15000); // ����������
	if (!KEY_H2)
	{
		LED2_Toggle();
	}
	// while (!KEY_H2)
	// {
	// 	LED2_Toggle();
	// };
	PieCtrlRegs.PIEACK.bit.ACK1 = 1;
}
