// Pointers.cpp : by Martin Cooney.
//

#include "stdafx.h"


int main()
{
	int x = 7;
	int y = 42;
	int *ip = &x;

	printf("The value of is x %d\n", x); // Print value of x
	printf("The value of is y %d\n", y); // Print value of y
	printf("The value of is *ip %d\n", *ip);// Prints the value of variable x wich is 7

	x = 73;
	printf("The value of is x %d\n", x); // Print value of x
	printf("The value of is y %d\n", y); // Print value of y
	printf("The value of is *ip %d\n", *ip);// Prints the value of variable x wich is 7

	ip  = &y;
	printf("The value of is x %d\n", x); // Print value of x
	printf("The value of is y %d\n", y); // Print value of y
	printf("The value of is *ip %d\n", *ip);// Prints the value of variable y wich is 42
	
	
	return 0;
}

