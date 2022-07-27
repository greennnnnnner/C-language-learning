/*
 ============================================================================
 Name        : A4T3P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char str[255];
	char *ps=str;
	int number=1;
	setbuf(stdout, NULL);
	printf("Enter a string to calculate the number of words in it: ");
	gets(str);
	while(*ps!='\0'){
		if(*ps==' '){
			number++;//if the string is a space, count 1
		}
		ps++;//next string member
	}
	printf("the number or words are: %d", number);//output the outcome
	return 0;
}
