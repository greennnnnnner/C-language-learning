/*
 ============================================================================
 Name        : W7T13P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j;
	for(i=7;i>=1;i--){//first loop
		for(j=1;j<=i;j++){//nested for loop
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
