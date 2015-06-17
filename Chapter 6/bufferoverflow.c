/*
	Buffer overflow
	
	Will generate some warnings from gcc, but no biggie.

*/

#include <stdio.h>

int main(void)
{
	char *p1;
	char *p2;
	
	// Allocate memory for the char pointer variables above
	p1 = (char *)malloc(10);
	p2 = (char *)malloc(128);
	
	// Just to illustrate where the two variables are
	printf("memory address of p1 is : %d\n", p1);
	printf("memory address of p2 is : %d\n", p2);
	printf("The space in memory between p1 and p2 is: %d\n", p2-p1);
	
	
	printf("Enter 16 characters.  17th char starts your command");
	gets(p1);
	printf("\nYou entered %s\n", p1);
	system(p2);

}