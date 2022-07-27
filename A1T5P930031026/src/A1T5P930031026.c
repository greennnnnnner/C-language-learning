/*
 ============================================================================
 Name        : A1T5P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j;//variable of the input,and the variable to record the change of the input
	char c;//variable of the output character
	setbuf(stdout, NULL);
	printf("Input: ");//tell the user to input character
	scanf("%d", &i);
	j=(i-5)/7;
	c=(char)j;
	if(7*c+5==i)
		printf("Output: %c",c);//if i is a number can be decode into an English letter, print it out
	else
		printf("Output: input invalid");//if i cannot be decoded into an English letter, warn user
	return 0;//end of the program
}
