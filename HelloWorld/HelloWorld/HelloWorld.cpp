// HelloWorld.cpp by Martin Cooney.
  #include "stdafx.h"
  #include <iostream>
using namespace std;

int main(int argc, char ** argv) // main function standard arguments included

								 // Note char* [] is also acceptible
{
	puts("Hello, World!");

	printf("Hello, World!\n"); //another way same result

	cout << "Hello, World!\n"; // using iostream built in library
   
	return 0; // main function must return an argument 0 in this case means success
}

