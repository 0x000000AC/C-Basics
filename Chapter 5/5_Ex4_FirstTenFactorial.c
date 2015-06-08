/*
	5 Ex 4 Factorial
	
	The factorial of an integer n, written n!, is the product of the 
	consecutive integers 1 through n. For example, 5 factorial is 
	calculated as
	
		5! = 5x4x3x2x1 = 120

	Write a program to generate and print a table of the first 10 factorials.
	
*/

#include <stdio.h>

int main(void)
{
	int i, temp;
	
	printf ("First 10 factorials: \n");
	
	
	for ( i= 1; i <= 10; ++i)
	{
		if ( i == 1 || i == 0)
		{
			printf ("%i\n", i);
		}
		else
		{
			temp = i * ( i - 1 );
			printf ("%i\n", temp);
		}
	}

	return 0;
}