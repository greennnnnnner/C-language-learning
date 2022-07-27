/*
 ============================================================================
 Name        : W10T20P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "differenceASCIICode.h"

int main() {
	char a, b;
	int diff;
	setbuf(stdout, NULL);
	printf("enter 2 characters to know the difference of their ASCIICode: ");
	scanf("%c %c", &a, &b);//get input
	diff = differenceASCIICode(a,b);//call the function
	printf("%d", diff);//print the output out
	return 0;
}

