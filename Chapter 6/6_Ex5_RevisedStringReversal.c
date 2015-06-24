/*
	6.Ex5 Revising 5.9 String Reversal Program

	5. You developed Program 5.9 to reverse the digits of an integer 
	typed in from the terminal. However, this program does not function 
	well if you type in a negative number. Find out what happens in such 
	a case and then modify the program so that negative numbers are correctly
 	handled. For example, if the number –8645 is typed in, the output of 
 	the program should be 5468–.

*/

#include <stdio.h>

int main(void)
{
	int number, right_digit;
	_Bool isNegative;
	
	printf ("Enter your number.\n");
	scanf ("%i", &number);
	
	do {
		// If it's a negative number, strip '-' so it doesn't
		// with every digit printed.  Set isNegative to true
		// so you can add the '-' later.
		if ( number < 0) // If it's a negative number, strip '-' so it 
		{
			isNegative = 1;
			number = -number;
			right_digit = number % 10;
			printf ("%i", right_digit);
			number = number / 10;
		}
		else // otherwise just reverse it
		{
			right_digit = number % 10;
			printf ("%i", right_digit);
			number = number / 10;
		}
	}
	while ( number != 0);
	
	if  (isNegative == 1)
		printf ("-\n");
	
	printf ("\n");
	
	return 0;
}