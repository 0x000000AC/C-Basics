/*
	
	6.Ex6 Integers to Words
	
	Write a program that takes an integer keyed in from the terminal 
	and extracts and displays each digit of the integer in English. 
	So, if the user types in 932, the program should display

	nine three two

	Remember to display “zero” if the user types in just a 0. 
	(Note: This exercise is a hard one!)

	0x000000AC Comment:
	I tried to avoid string methods as well as arrays, not entirely
	unhappy with the result
*/

#include <stdio.h>
#include <stdlib.h> // for math functions used in determining string size
#include <math.h> // for floor function 

int main (void)
{
	int number, right_digit, other, numStrSize, i;
	_Bool isNegative;
	
	printf ("Please enter an integer (ex. 932): ");
	scanf ("%i", &number);
	
	// get size number of digits in "number" without
	// converting it to a string or using an array
	numStrSize = floor(log10(abs(number))) + 1;
	
	// Call reverse function which follows main()
	// reverses left-right
	number = reverse(number);
	if (number == 0)
	{
		printf ("zero ");
	}
	else
	
		for ( i = 0; i < numStrSize; ++i )
		{
			right_digit = number % 10;
		
			switch (right_digit)
			{
				case 0 :
					printf ("zero ");
					break;
				case 1 :
					printf ("one ");
					break;
				case 2 :
					printf ("two ");
					break;
				case 3 :
					printf ("three ");
					break;
				case 4 :
					printf ("four ");
					break;
				case 5 :
					printf ("five ");
					break;
				case 6 : 
					printf ("six ");
					break;
				case 7 :
					printf ("seven ");
					break;
				case 8 :
					printf ("eight ");
					break;
				case 9 :
					printf ("nine ");
					break;
				default:
					printf ("Sorry, unrecognized\n");
					break;
			}
		
			number /= 10;
	}
					
	printf ("\n");

	return 0;
}

/*
	Function to reverse the order of numbers of a digit string
	e.g., 932 becomes 239
*/
int reverse( int x )
{
	int r = 0;

	while( x ) 
	{
		r = r * 10 + ( x % 10);
		x = x / 10;
	}

    return r;
}