/*
	8.11 Changing Array Elements in Functions
	
	Iterate through the array and multiply the value 
	by two.
	
	Note that when you pass an entire array, you are
	actually opening the possibility of changing the
	values in the array.  This is not the case with 
	elements though.

*/

#include <stdio.h>

void multiplyBy2 (float array[], int n)
{
	int i;
	
	for ( i = 0; i < n; ++i)
		array[i] *= 2;
}

int main (void)
{
	float floatVals[4] = { 1.2f, -3.7f, 6.2f, 8.55f };
	int i;
	
	void multiplyBy2 (float array[], int n);
	
	multiplyBy2 (floatVals, 4);
	
	for ( i = 0; i < 4; ++i )
		printf ("%.2f  ", floatVals[i]);
		
	printf ("\n");
	
	return 0;
}