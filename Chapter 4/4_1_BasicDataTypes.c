/* 4.1 Using the basic data types.

	Display the different data types
	in the C language.
	
	Output:
	integerVar = 100
	integerVar in Hex = 0x64
	integerVar in Octal = 0144
	floatingVar = 331.790009
	long long int = 100
	doubleVar = 8.440000e+11
	doubleVar = 8.44e+11
	charVar = W
	boolVar = 0
	
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
	// Can also do %Lf e g etc for long floats
	// short int also exists on some machines, to
	// use must put %hi for short and it doesn't
	// have a 'short int = ' instantiation
	// unsigned int is for only positive numbers
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