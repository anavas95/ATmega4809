/*
 * Atmega4809_GPIO.c
 *
 * Created: 20/04/2021 01:03:35
 * Author : Alejandro 
*/

/*
NOTA:
El siguiente programa utiliza el led a bordo de la tarjeta, 
este blinkea (parpadea) cada 500ms
*/


#define F_CPU 3333333UL   //Frecuencia del MCU DIV6.
#include <avr/io.h>       
#include <util/delay.h>



int main(void)
{
    PORTF.DIR |=  PIN5_bm;    //PIN5 como salida.
	PORTF.OUT &=~ PIN5_bm;    //PIN5 inica apagado.
	
    while (1) 
    {
		_delay_ms(1000);       //espera 1 segundo.
		PORTF.OUT ^= PIN5_bm;  //Cambia de estado (on/off).
    }
}

