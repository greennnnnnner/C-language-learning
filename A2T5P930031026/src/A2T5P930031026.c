/*
 ============================================================================
 Name        : A2T5P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int A[20]={};//create an Array of Fibonacci sequence
	setbuf(stdout, NULL);
	printf("Enter two positive number to creat a Fibonacci sequence based on them: ");
	scanf("%d%d",&A[0], &A[1]);//get input
	printf("%d, %d, ", A[0], A[1]);

	for(int i=2;i<20;i++){
		A[i]=A[i-1]+A[i-2];//computing of Fibonacci sequence
		printf("%d, ", A[i]);
	}
	return 0;
}
