/*
 ============================================================================
 Name        : A3T4P930031026.c
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
	char str[256], new[256];
	gets(str);//get input including spaces
	for(int i=0,j=0; i<=255; i++){
		if(str[i]!=' '){
			new[j]=str[i];
			j++;
		}//delete all the spaces
	}
	puts(new);//print the str out together
	printf("the length of new string is %d", strlen(new));//print the length of the string out
	return 0;
}
