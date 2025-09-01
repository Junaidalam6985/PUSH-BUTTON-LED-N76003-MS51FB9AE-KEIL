/*
		BY JUNAID ALAM
		LEANING NUVOTON FROM BASIC 
		8051 ARCHITECHTURE
*/
// INCLUDING LIBRARY

#include "N76E003.h"
#include "SFR_Macro.h"
#include "Function_define.h"
#include "Common.h"
#include "Delay.h"
#include <N76E003.H>
#define delay_ms(x) Timer2_Delay500us(x*2)// USING TIMER2 FOR DELAY 



void main(void)
{
  P10_PushPull_Mode;// DEFINE P10 OUTPUT
	P04_Input_Mode;   // DEFINE P01 INPUT
	
	while(1)// infinite loop
	{
		if(P01==1)// BUTTON PRESSED
		{
			P10=1; // LED ON 
		}
		else // BUTTON IS NOR PRESSED
		{
			P10=0;// LED OFF
		}
		delay_ms(50);// ADDING SMALL DELAY FOR AVOIDING WRONG ACTION
	}                 
}
/*
		HARDWARE DISCRIPTION
    CONNECT PIN NO 7 TO GROUNG
    CONNECT PIN NO 9 TO 5V POSITIVE 
    CONNECT LED ANODE TO PIN NO 15
		CONNECT LED CATHODE TO GROUND

    BUTTON CONNECTION;
    5V----------BUTTON-----------PIN NO 1
                           |
                           |
                          10K RES
                           |
                           |
                          GND
   PULL DOWN RESISTANCE IS VERY IMPROTANT
*/