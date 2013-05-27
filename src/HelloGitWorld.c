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

int main(void) {
	puts(MYSTRING1); /* prints !!!Hello World!!! */
	getchar();
	return EXIT_SUCCESS;
}
