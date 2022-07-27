/*
 ============================================================================
 Name        : W7T14P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int sum=0;
	for(int i=5;i<1000;i++){
		if((i%5==0)&&(i%7!=0)){//judge if the current i meet the requirements
			sum=sum+i;//sum all numbers up into variable 'sum'
		}

	}printf("%d", sum);
	return 0;
}
