#include "UART.h"
void UartInit(void)		//9600bps@11.0592MHz
{
	SCON = 0x50;		//8λ����,�ɱ䲨��
	TMOD = 0x20;		//�趨��ʱ��1Ϊ16λ�Զ���װ��ʽ
	TL1 = 0xfd;		//�趨��ʱ��ֵ
	TH1 = 0xfd;		//�趨��ʱ��ֵ
	PCON=0X00;
	TR1 = 1;		//������ʱ��1
	EA=1;
	ES=1;
}

void sendbyte(unsigned char i)  //��ֵ���͸����Զ�
{
  SBUF=i;
  while(!TI);
  TI=0;
}



//void UART_Routine() interrupt 4    //�����ж�ģ��	 
//{
//  if(RI==1)
//  {
//    P2=~SBUF;		   //���뷢�͵��������ͻ�����Խ��ܵ�����ȡ����
//	  sendbyte(SBUF);  //���ܵ��Զ˷��͹���ֵ��Ͷ�� 
//    RI=0;
//  }
//}