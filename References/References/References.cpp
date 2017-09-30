// References.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int x = 7;
	int *ip = &x;
	int &y = x; //Ampersand before the y makes y a Reference


	printf("The value of is x %d\n", x);  
	printf("The value of is *ip %d\n", *ip);
	printf("The value of is y %d\n", y);
	
	x = 42;
	printf("The value of is x %d\n", x);
	printf("The value of is *ip %d\n", *ip);
	printf("The value of is y %d\n", y);

	x = 73;
	printf("The value of is x %d\n", x);
	printf("The value of is *ip %d\n", *ip);
	printf("The value of is y %d\n", y);
    
	int z = 149;
	ip = &z;
	printf("The value of is x %d\n", x);
	printf("The value of is *ip %d\n", *ip);
	printf("The value of is y %d\n", y);
	printf("The value of is z %d\n", z);

	return 0;
}

