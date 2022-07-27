/*
 ============================================================================
 Name        : W5T10P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int h, w;//name variables
	setbuf(stdout, NULL);//make sure printf() shows before getting input
	printf("Enter your height(cm) and weight(kilo): ");//tell user to enter value
	scanf("%d%d",&h,&w);//get input of value
	if((h-105)>w+20){//judge if height-105 > weight+20
		printf("You are too slim");//if height-105 > weight+20,print this
		}
		else//if height-150 <=weight+20,do this
			{
			if ((w-10<(h-105)) && ((h-105)<=w+20))//check if weight-10<(height-105<=weight+20,
				printf("You are fit");//if yes, print this
			else
				printf("You are too fat");//or do this
			}
	return 0;
}
