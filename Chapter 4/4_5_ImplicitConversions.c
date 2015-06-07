/*
	4.5 Implicit Conversions
	
	Illustrates some of the consequences of 
	converting between types in C.

	Output: 123.125000 assigned to an int produces 123
	-150 assigned to a float produces -150.000000
	-150 divided by 100 produces -1.000000
	-150 divided by 100.0 produces -1.500000
	(float) -150 divided by 100 produces -1.500000
*/

#include <stdio.h>

int main (void)
{
	float f1 = 123.125, f2;
	
	int i1, i2 = -150;
	
	i1 = f1;	// Floating to integer conversion.  Decimal portion truncated
	printf ("%f assigned to an int produces %i\n", f1, i1);
	
	f1 = i2;	// integer to floating conversion
	printf ("%i assigned to a float produces %f\n", i2, f1);
	
	f1 = i2 / 100;	// integer divided by integer
	printf ("%i divided by 100 produces %f\n", i2, f1);
	
	f2 = i2 / 100.0; // integer divided by float
	printf ("%i divided by 100.0 produces %f\n", i2, f2);
	
	f2 = (float) i2 / 100;	// type cast operator // typcast operator is unary - doesn't affect actual value
	printf ("(float) %i divided by 100 produces %f\n", i2, f2);
	
	return 0;
}