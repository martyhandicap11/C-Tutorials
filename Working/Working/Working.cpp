/* Working.cpp : by Martin Cooney.
*/
#include "stdafx.h"

int main( int argc, char ** argv)
{
	int x;
	x = 42; // assigning value 42 to x

	printf("x is %d\n", x); /* the value 42 is printed because 
	                           x = 42 
							*/
	//Can also be done this way
	int x01;
	printf("x is %d\n", x01 = 42);
	
	//Different things can be done using this way
	int x02;
	printf("x is %d\n", x01 = 42 * 12 + 14);// will return 518

	int x03;
	printf("x is %d\n", x01 = 42 * (12 + 14));//will return 1092 order precedence
	return 0;
}

