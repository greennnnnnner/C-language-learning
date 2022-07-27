/*
 ============================================================================
 Name        : W7T12P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i=1, sumO=0, sumE=0, diff;
	for(i=1;i<=100;i++){
		if(i%2==1){
			sumO=sumO+i;
		}
		else
			sumE=sumE+i;
	}
	diff = sumE-sumO;
	printf("the sum of even numbers is %d, the sum of odd numbers is %d, the difference of them is %d", sumE, sumO, diff);

	return 0;
}
