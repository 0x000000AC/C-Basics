/*
	7.5 Initializing Arrays
	
	Examples
	float sample_data[500] = { 100.0, 300.0, 500.5 };
	float sampel_data[500] = { [2] = 500.5, [1] = 300.0, [0] = 100.0 };

	There is no way to specify a repeat count, so if it were desired
	to initially set all 500 values of sample_data to 1, all 500 would have
	to be explicitly spelled out.
*/

#include <stdio.h>

int main (void)
{
	int array_values[10] = { 0, 1, 4, 9, 16 };
	int i;
	
	for ( i = 5; i < 10; ++i )
		array_values[i] = i * i;
	
	for ( i = 0; i < 10; ++i )
		printf ("array_values[%i] = %i\n", i, array_values[i]);
	
	return 0;

}