/* 4.1 Using the basic data types.

	Display the different data types
	in the C language.
	
*/

#include <stdio.h>

int main (void)
{
	int integerVar = 100;
	float floatingVar = 331.79;
	double doubleVar = 8.44e+11;
	char charVar = 'W';
	
	_Bool boolVar = 0;
	
	// Guaranteed to be 64 bits long
	// long int's also exist, but are likely
	// the same 32 bit value
	long long int longLongInt = 100;
	
	printf ("integerVar = %i\n", integerVar);
	printf ("integerVar in Hex = %#x\n", integerVar);
	printf ("integerVar in Octal = %#o\n", integerVar);
	printf ("floatingVar = %f\n", floatingVar);
	printf ("long long int = %lli\n", longLongInt);
	printf ("doubleVar = %e\n", doubleVar);
	printf ("doubleVar = %g\n", doubleVar);
	printf ("charVar = %c\n", charVar);
	
	printf ("boolVar = %i\n", boolVar);
	
	return 0;
}