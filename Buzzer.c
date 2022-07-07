#include "BUZZER.h"
#include "Delay.h"
//ÑÓ³Ù·äÃùÆ÷
sbit Buzzer=P1^4;
void Buzzer_Time(unsigned int ms)
{
    unsigned int g;
  	for(g=0;g<ms;g++)
	  {
	    Buzzer=!Buzzer;
		Delay(1);
	  }
}
