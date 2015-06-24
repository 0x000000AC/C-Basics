/*
	6.10 Generating Prime Numbers
	
	Creates a small table of primes up to
	50.  
	
*/

#include <stdio.h>

int main (void)
{
	int p, d;
	_Bool isPrime;
	
	// Value p represents the number you're testing
	for ( p = 2; p <= 50; ++p ) 
	{
		isPrime = 1;
		
		// Set up to divide p by 2 through p-1
		for ( d = 2; d < p; ++d)
			if ( p % d == 0 )
				isPrime = 0;
				
				if (isPrime != 0 )
					printf ("%i ", p);
	}
	
	return 0;
}