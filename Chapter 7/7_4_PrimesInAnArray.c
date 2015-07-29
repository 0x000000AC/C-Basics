/*
	7.4 Primes in an Array
	
	Criteria for a prime is to divide the prime
	candidate by all successive integers from
	2 up to the number -1.
	
	That is inefficient.  A number is prime if it is
	not evenly divisibly by any other prime number.
	
	You can test if a given integer is prime by determining
	if it is evenly divisible by any other previously
	generated prime.
	
	Ultimately, it is only necessary to determine if a given
	integer is prime by testing it for even divisibility against
	all prime factors up to the square root of the integer.

*/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int p, i, primes[50], primeIndex = 2;
	bool isPrime;
	
	primes[0] = 2;
	primes[1] = 3;
	
	for ( p = 5; p <= 50; p = p + 2 ) 
	{
		isPrime = true;
		
		// p / primes[i] is the test for ensuring that the value
		// of p does not exceed the square root of primes[i]
		for ( i = 1; isPrime && p / primes[i] >= primes[i]; ++i )
			if ( p % primes[i] == 0 )
				isPrime = false;
		
		if ( isPrime == true ) 
		{
			primes[primeIndex] = p;
			++primeIndex;
		}
	}
	
	for ( i = 0; i < primeIndex; ++i )
		printf ("%i ", primes[i]);
	
	printf ("\n");		
	
	return 0;
}