/* 
	4.Ex4 Temperature Conversion
	
	Write a program that converts 27° from degrees Fahrenheit (F) 
	to degrees Celsius (C) using the following formula:
	
	C = (F - 32) / 1.8

*/

#include <stdio.h>

int main(void)
{
	
	float degCelc, degFahr = 27;
	
	printf("Converting 27 degrees Fahrenheit to Celcius\n\n");
	
	degCelc = (degFahr - 32) / 1.8;
	
	printf("%2.0f degrees Fahrenheit in Celcius is %f\n", degFahr, degCelc);
	
	return 0;
}