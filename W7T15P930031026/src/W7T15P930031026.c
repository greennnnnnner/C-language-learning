/*
 ============================================================================
 Name        : W7T15P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[100];
	int numOfa = 0;

	setbuf(stdout,NULL);
	printf("Enter strings to know the number of 'a' in it: ");
	scanf("%s", str);//get input

	for(int i=0; str[i]!='\0'; i++){//find the end of the str
		if (str[i]=='a'){
			numOfa=numOfa+1;//calculate the number of'a'inside the string
		}
	}
	printf("The number of character 'a' is: %d", numOfa);//print the output out
	return 0;
}
