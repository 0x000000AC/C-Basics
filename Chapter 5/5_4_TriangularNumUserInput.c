/*
	5.4 Triangular Number | User Input
	
	Calculates triangular number based on the user input
	with scanf

*/

#include <stdio.h>

int main (void)
{
	int n, number, triangularNumber;
	
	printf ("What triangular number do you want? ");
	scanf ("%i", &number);
	
	triangularNumber = 0;
	
	for ( n = 1; n <= number; ++n)
		triangularNumber += n;
		
		printf ("Triangular number %i is %i\n", number, triangularNumber);
		
		return 0;
}