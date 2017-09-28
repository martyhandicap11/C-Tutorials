// DefiningVariables.cpp : by Martin Cooney.
//

#include "stdafx.h"


int main()
{
	int i = 7;//Define variable

	/*Important to assign a value as soon as possible
	  CLEANER METHOD
	*/
	//i = 7;//Assign value
	printf("The value is %d\n", i); // use the value

	//C++ also uses qulaifiers
	const int qualIdent = 71;/* const qualifier does not allow the assigned
							   value of 7 to be changed once defined*/
	//qualIdent = 56;	      //IF CHANGED READ ONLY VARIABLE ERROR
							
	printf("The value is %d\n", qualIdent); // use the value
	
	return 0;
}

