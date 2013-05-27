/*
 ============================================================================
 Name        : HelloGitWorld.c
 Author      : KN
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "mystring.h"
#include "func.h"

int main(void) {

	unsigned char num1 = 2;
	unsigned char num2 = 4;

	puts(MYSTRING1); /* prints !!!Hello World!!! */


	// This function was added by branch : r2_function
	printf("%u + %u Equals = %u \n\r",num1,num2, addnumbers(num1,num2) );

	// Insert this to make the result readable ;-)

	puts("THIS STRING REMOVED THE BUG\n\r");

	getchar();
	return EXIT_SUCCESS;
}
