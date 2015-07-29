/*
	7.2 An Array of Counters
	
	Small case sample like you were taking
	in 20 responses for people who rate something
	1 to 10.
	
	
*/

#include <stdio.h>

int main (void)
{
	// ratingCounters is initialized as eleven elements
	// because ratings are 1 - 10, since you won't be entering
	// '0' for the first element, you make 11
	int ratingCounters[11], i, response;
	
	for ( i = 1; i <= 10; ++i )
		ratingCounters[i] = 0;
		
	printf ("Enter your responses\n");
	
	for ( i = 1; i <= 20; ++i )
	{
		scanf ("%i", &response);
		
		if ( response < 1 || response > 10 )
			printf ("Bad response: %i\n", response);
		else
			++ratingCounters[response];
	}
	
	printf ("\n\nRating  Number of Responses\n");
	printf ("------ -------------------\n");
	
	for ( i = 1; i <= 10; ++i )
		printf ("%4i%14i\n", i, ratingCounters[i]);
	
	return 0;
}