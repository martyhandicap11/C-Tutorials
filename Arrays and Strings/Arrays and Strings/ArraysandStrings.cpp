// ArraysandStrings.cpp : By Martin Cooney
//

#include "stdafx.h"


int main()
{
	//Defining a String
	char s[] = { 's','t','r','i','n','g', 0 };
	printf("\nString is: %s\n", s);

	//Can also be done this way
	char s01[] = "string";
	printf( "\nIs also a string: %s\n", s01);

	//Using a for loop to access individual characters in this array
	printf("\nPrint each caracter using for Loop\n");
	char s02[] = "string";
	for(int i = 0; s02[i]; i++)
	{
		//Print out each individual string
		
		printf("\tchar is: %c\n", s02[i]);
	}

    //Using a for pointer to access individual characters in this array
	printf("\nPrint each character using pointer\n");
	char s03[] = "string";
	for (char * cpointer =s03; *cpointer; ++cpointer)
	{
		//Print out each individual string
		printf("\tchar is: %c\n", *cpointer);
	}

	//Using a for Range Based Loop New Construct since C++11 to access individual characters in this array
	printf("\nPrint each character using Range Based Loop\n");
	char s04[] = "string";
	for (char cpointer01 : s03)
	{
		//Breaks out of loop to eliminate Null string
		if (cpointer01 == 0) break;
		
		//Print out each individual string
		printf("\tchar is: %c\n", cpointer01);
	}
	return 0;
}

