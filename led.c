/*
	2진수 연산과 쉬프트 연산자 사용
 */ 
#define F_CPU 20000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
	int i;
	DDRD = 0xff;
	
    while (1) 
    {
		
		PORTD = 1;
		PORTD = 2;
		PORTD = 3;
		PORTD = 4;
		// 2진수로 각 비트 1로 만들기
		PORTD = 0b00000001;		// bit0, 0x01
		PORTD = 0b00000010;		// bit1, 0x02
		PORTD = 0b00000100;		// bit2, 0x04
		PORTD = 0b00001000;		// bit3, 0x08
		PORTD = 0b00010000;		// bit4, 0x10
		PORTD = 0b00100000;		// bit5, 0x20
		PORTD = 0b01000000;		// bit6, 0x40
		PORTD = 0b10000000;		// bit7, 0x80
		
		// 쉬프트 연산을 사용해 1로 만들 비트 지정하기 
		PORTD = 1<<0;
		PORTD = 1<<1;
		PORTD = 1<<2;
		PORTD = 1<<3;
		PORTD = 1<<4;
		PORTD = 1<<5;
		PORTD = 1<<6;
		PORTD = 1<<7;
		
		// 쉬프트 연산과 반복문을 이용한 비트 지정
		for(i = 0; i < 8; i++)
		{
			PORTD = 1<<i;
			//_delay_ms(500);
		}
    }
}

