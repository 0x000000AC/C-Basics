/*

	7.6 Character Arrays
	
	Just to illustrate how a character array can be used.
	
*/

#import <stdio.h>

int main (void)
{
	// You can specify an array without specifying
	// the number of elements.  This works fine
	// as long as you initialize every element in the 
	// array at the point that the array is defined.
	// If this is not to be the case, you must 
	// explicitly dimension the array.
	char word[] = { 'H', 'e', 'l', 'l', 'o', '!' };
	int i;
	
	for ( i = 0; i < 6; ++i )
		printf ("%c", word[i]);
	
	printf ("\n");
	
	return 0;

}