#include "Timer0.h"

void Timer0Init(void)
{
  TMOD &= 0xf0;
  TMOD |= 0x01;
  TL0 = 0x9C;		//设置定时初值
  TH0 = 0xFF;		//设置定时初值
  TF0 = 0;
  TR0 = 1;
  ET0 = 1;
  EA = 1;
  PT0 = 0;
}


//定时器中断函数模板
//void Timer0_Routine() interrupt 1
//{
//  static unsigned int T0Count;
//  TL0 = 0x18;		//设定定时初值
//  TH0 = 0xfc;		//设定定时初值
//  T0Count++;
//  if(T0Count>=1000)
//  {
//    T0Count=0;
//  }
//}