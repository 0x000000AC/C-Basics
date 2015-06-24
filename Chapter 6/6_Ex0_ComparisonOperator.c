/*
	6.EX0 Bigger Value with Conditional Operator.
	
	Example of Ternary Condition Operator
	
	Not in the book, but saw mention of it and 
	wanted an example.
	
	Takes in 2 numbers and spits back the bigger of the two.
	
	Conditional operator is handy when writing preprocessor
	macros in C.
*/

#include <stdio.h>

int main (void)
{
	int a, b;
	
	printf ("Enter two integers a b:\n ");
	scanf("%i %i", &a, &b);

	printf (" %i is greater\n", a > b ? a : b);
	
	return 0;
}
