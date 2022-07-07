#include "Timer0.h"

void Timer0Init(void)
{
  TMOD &= 0xf0;
  TMOD |= 0x01;
  TL0 = 0x9C;		//���ö�ʱ��ֵ
  TH0 = 0xFF;		//���ö�ʱ��ֵ
  TF0 = 0;
  TR0 = 1;
  ET0 = 1;
  EA = 1;
  PT0 = 0;
}


//��ʱ���жϺ���ģ��
//void Timer0_Routine() interrupt 1
//{
//  static unsigned int T0Count;
//  TL0 = 0x18;		//�趨��ʱ��ֵ
//  TH0 = 0xfc;		//�趨��ʱ��ֵ
//  T0Count++;
//  if(T0Count>=1000)
//  {
//    T0Count=0;
//  }
//}