/*
	5.7 Finding the Greatest Common Divisor
		
*/

#include <stdio.h>

int main (void)
{
	int u, v, temp;
	
	printf ("Please type in two nonnegative integers.\n");
	// double %i indicate two int vals are entered
	// the values can be separated from each other by one or more
	// blank spaces or a carriage return.
	scanf ("%i%i", &u, &v);
	
	while ( v != 0 ) 
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	
	printf ("Their greatest common divisor is %i\n", u);
	
	return 0;
}