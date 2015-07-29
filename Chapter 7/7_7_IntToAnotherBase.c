/*
	7.7 Converting a Positive Integer to Another Base
	
	The task is to develop a program that converts a positive
	integer from its base 10 representation into its equivalent
	representation in another base up to base 16.
	
	A digit of the converted number is obtained 
	by taking the modulo of the number by the base.
*/

#include <stdio.h>

int main (void)
{
	const char baseDigits[16] = {
		'0', '1', '2', '3', '4', '5', '6', '7', 
		'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	
	// Contains a max of 64 digits, which holds the 
	// results fo converting the largest possible long
	// integer to the smalles possible base (base 2)
	int convertedNumber[64];
	
	// long so relatively large numbers can be converted
	// if desired
	long int numberToConvert;
	int nextDigit, base, index = 0;
	
	// get the number and the base
	
	printf ("Number to be converted? ");
	scanf ("%ld", &numberToConvert);
	printf ("Base? ");
	scanf ("%i", &base);
	
	// convert to the indicated base
	
	do {
		convertedNumber[index] = numberToConvert % base;
		++index;
		numberToConvert = numberToConvert / base;
	}
	while ( numberToConvert != 0);
	
	// display the results in reverse order
	
	printf ("Converted number = ");
	
	for (--index; index >= 0; --index ) {
		nextDigit = convertedNumber[index];
		printf ("%c", baseDigits[nextDigit]);
	}
	
	printf ("\n");
	return 0;

}