/*
	8.8 

	There exist many methods for approximating 
	square roots.  One approximation good for the
	computer is the Newton-Raphson Iteration Technique.
	
	You begin by selecting a "guess" at the square root 
	of the number.  THe closer that this guess is
	to the actual square root, the fewer the number of calc
	ulations that have to be performed to arrive at the square
	root.
	
	The number whose square root you want to guess is divided
	by the initial guess and is then divided by 2.  The result
	of this division becomes the new guess for another go-around
	
	You don't want this to go on forever, so you need to know
	when to stop.  Because the successive guesses
	that are derived by repeated evaluation of the formula to get
	closer and closer to the true value, you can set a limit that
	you can use for deciding when to terminate the process.
		
*/

#include <stdio.h>

float absoluteValue (float x)
{
	if ( x < 0 )
		x = -x;
	return (x);
}

// Function to compute the square root of a number
float squareRoot (float x)
{
	const float epsilon = .00001;
	float guess = 1.0;
	
	while (absoluteValue (guess * guess - x) >= epsilon )
		guess = ( x / guess + guess ) / 2.0;
	
	return guess;
}

int main (void)
{
	printf ("squareRoot (2.0) = %f\n", squareRoot (2.0));
	printf ("squareRoot (144.0) = %f\n", squareRoot (144.0));
	printf ("squareRoot (17.5) = %f\n", squareRoot (17.5));
	
	return 0;
}