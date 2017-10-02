// WhiledoWhile.cpp : by Martin Cooney
//

#include "stdafx.h"


int main()
{
	printf("\nPrint using for while loop\n");
	
	int arr[] = { 1, 2, 3, 4, 5};
	int i = 0;

	while (i < 5)
	{
		printf("element %d is %d\n", i, arr[i]);
		++i;
	}

	printf("\nPrint using for dowhile loop\n");


	int arr01[] = { 1, 2, 3, 4, 5};
	
	int ix = 0;
	do {
		printf("element %d is %d\n", ix, arr01[ix]);
		++ix;
	} 
	while (ix < 5);
	return 0;
}

