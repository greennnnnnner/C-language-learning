/*
 ============================================================================
 Name        : W10T24P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int stringLength(char s[]);//define the function

int main() {
	char str[50];
	setbuf(stdout,NULL);
	printf("Enter string to get the length of it: ");
	scanf("%s",str);//get input
	printf("The length of it is: %d",stringLength(str));//call the function and print the result out
	return 0;
}

int stringLength(char s[]){
	for(int i=0; i<50; i++){

		if(s[i]=='\0'){
			return i;//return the length of this string at the end of it
		}
	}
	return 0;
}
