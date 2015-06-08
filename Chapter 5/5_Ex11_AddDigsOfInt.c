/*
	5 Ex 11  Adding Digits of an arbitrary length int
	
	Write a program that calculates the sum of the digits
	of an integer. For example, the sum of the digits of
	the number 2155 is 2 + 1 + 5 + 5 or 13.The program 
	should accept any arbitrary integer typed in by the user.

*/

#include <stdio.h>

int main(void)
{
	int number, right_digit, digSum, origNum;
	
	printf ("Enter your number.\n");
	scanf ("%i", &number);
	
	origNum = number; // must save in diff var - after loop number is 0
	digSum = 0; // must initialize or loop adds garbage
	while ( number != 0 ) 
	{
		right_digit = number % 10;
		digSum += right_digit;
		number = number / 10;		
	}
	
	printf ("\nThe numbers of %i added: %i\n", origNum, digSum);
		
	return 0;
}