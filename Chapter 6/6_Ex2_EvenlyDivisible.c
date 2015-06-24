/*
	6.Ex2 Evenly Divisible Numbers
	
	"Write a program that asks the user to type in two integer 
	values at the terminal. Test these two numbers to determine 
	if the first is evenly divisible by the second, and then
	 display an appropriate message at the terminal."

*/

#include <stdio.h>

int main (void)
{
	int a, b;
	
	_Bool divisible;
	
	printf ("Enter two numbers.  This will test if the first is evenly divisible by the second: ");
	scanf ("%i %i", &a, &b);
	
	divisible = ( a % b == 0 ) ? 1 : 0;
	
	if ( divisible == 1)
		printf ("The first number is evenly divisible by the second.\n");
	else
		printf ("The first number is not evenly divisible by the second.\n");
		
	
	return 0;
}