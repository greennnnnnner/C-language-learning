/*
 ============================================================================
 Name        : A2T1P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	for(int i=5;i>=0;i--){//i is the number of lines, start with 5, end with0
		for(int j=0;j<=i;j++){//j is the number of columns, start with 0
			if(j%2==0){
				printf("~");//if the number is even number, print"~"
			}
			else{
				printf("*");//if it's an odd number, print"*"
			}
		}
		printf("\n");//(line feed at the end of every line
	}
	return 0;
}
