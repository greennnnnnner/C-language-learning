/*
 ============================================================================
 Name        : W7T17P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[100][20];
	int sum=0;
	int i=0;
	char end[20]="End";
	setbuf(stdout,NULL);
	printf("Enter a sentence to know the number of words in it, use End as the end of the input: ");
	do{
		scanf("%s", &str[i][20]);
		i++;

	}while(strcmp(str[i],end)!=0);


	printf("\nThe number of words in this sentence is: %d", sum);
	return 0;
}
//cannot done by using scanf("%s", ), the requirement seems impossible to achieve
