#include "UART.h"
void UartInit(void)		//9600bps@11.0592MHz
{
	SCON = 0x50;		//8位数据,可变波特
	TMOD = 0x20;		//设定定时器1为16位自动重装方式
	TL1 = 0xfd;		//设定定时初值
	TH1 = 0xfd;		//设定定时初值
	PCON=0X00;
	TR1 = 1;		//启动定时器1
	EA=1;
	ES=1;
}

void sendbyte(unsigned char i)  //将值发送给电脑端
{
  SBUF=i;
  while(!TI);
  TI=0;
}



//void UART_Routine() interrupt 4    //串口中断模板	 
//{
//  if(RI==1)
//  {
//    P2=~SBUF;		   //不与发送的数据起冲突，所以接受的数据取反数
//	  sendbyte(SBUF);  //接受电脑端发送过来值并投屏 
//    RI=0;
//  }
//}