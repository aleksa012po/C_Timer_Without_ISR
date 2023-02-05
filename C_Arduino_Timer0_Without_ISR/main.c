/*
 * C_Arduino_Interrupt_Without_ISR.c
 *
 * Created: 24.11.2022. 12:29:09
 * Author : Aleksandar Bogdanovic
 */ 

#define F_CPU 16000000							// 16MHz

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "timerSetup.h"
#include "init.h"

int extraTime = 0;

int main(void)
{
    	init();
	timerSetup();
    while (1) 
    {
		extraTime++;
		if(extraTime > 255) {
			PORTB ^= (1 << PORTB0);
			_delay_ms(500);
		}	
    }
}

