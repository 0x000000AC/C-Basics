/*
	8.9  Finding the Minimum Value in an Array
	
	To pass an array to a function, it is only
	necessary to list the name of the array without any
	subscripts inside the call to the function.
	
*/

#include <stdio.h>

int minimum (int values[10])
{
	int minValue, i;
	
	minValue = values[0];
	
	for ( i = 1; i < 10; ++i )
		if ( values[i] < minValue )
			minValue = values[i];
	
	return minValue;
}

int main (void)
{
	int scores[10], i, minScore;
	// Prototype declaration for minimum function
	// This tells the compiler that minimum returns an int
	// and takes and array of 10 integers.  Not really necessary
	// since minimum is declared before main, but playing
	// it safe
	int minimum (int values[10]);
	
	printf ("Enter 10 scores (hit enter after each entry)\n");
	
	for ( i = 0; i < 10; ++i )
		scanf ("%i", &scores[i]);
	
	minScore = minimum (scores);
	printf ("\nMinimum score is %i\n", minScore);
	
	return 0;
}