#include	<STC/STC15F2K60S2.H>
#include	"timer.h"

void Timer0Init(void)		//1??@30.000MHz
{	
	AUXR |= 0x40;		//设置定时器1为12T模式
	TMOD &= 0x0F;		//???????
	TL1 = 0xD0;		//??????
	TH1 = 0x8A;		//??????
	TF1 = 0;		//??TF1??
	TR1 = 1;		//???1????
}