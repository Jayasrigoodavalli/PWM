/*
 * GccApplication2.c
 *
 * Created: 15-May-19 11:32:49 AM
 * Author : JAYASREE
 */ 
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
	unsigned char duty;
	/*set fast PWM mode with non-inverting o/p*/
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	DDRB|=(1<<PB3);/*set OC0 pin as o/p*/
    /* Replace with your application code */
    while (1) 
    {
		for(duty=0;duty<255;duty++)`
		{
			OCR0=duty;/*increase the LED intensity*/
			_delay_ms(8);
		}
		for(duty=255;duty>1;duty--)
		{
			OCR0=duty;/*decrease the LED intensity*/
			_delay_ms(8);
		}
		
    }
}

