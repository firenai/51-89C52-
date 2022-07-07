#include "time50ms.h"

void time50ms(unsigned char a)
{
  unsigned char k;
  for(k=0;k<a;k++){
    TH1=(65536-50000)/256;
	TL1=(65536-50000)/256;
	TR1=1;
	while(!TF1);
	TF1=0;
  }
}