/*
 * mahendra1.c
 *
 * Created: 21-04-2022 12:12:39
 * Author : mahendrajammigumpula
 */ 

#include <avr/io.h>
#include"A1.h"
#include"A2.h"
#include"A3.h"
#include<util/delay.h>
int main(void)
{
	LCD_INITIALIZATION();
	while(1)
	{
		A1(); //Activity 1
		A2(); //Activity 2
		A3(); //Activity 3
	}
	return 0;
}



