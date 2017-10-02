// ConditionalStatements.cpp : Defines the entry point for the console application.
/*
   C++  Has two basic forms of conditional statements
   if else and the ternary conditional operator
*/

#include "stdafx.h"


int main()
{
	int x = 42;
	int y = 73;

	//Create if condition
	/*if (x < y)
	{
		puts("condition is true");
	}
	else
	{
		puts("condition is false");
	}*/
	
	
	//Create else if condition
	/*if (x < y)
	{
		puts("x > y");
	}
	else if (x > y)
    {
		puts("x > y");
	}
	else
	{
		puts("They must be equal");
	}*/
	
	//Create a ternary expression
	/*
	    Three parts
		 (1) the condition x > y
		 (2) the expression returmed if true x
		 (3) the expression returned if false y

	*/
	printf("The greater is : %d\n", x > y ? x : y);
	return 0;
}

