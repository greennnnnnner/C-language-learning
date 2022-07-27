/*
 ============================================================================
 Name        : A2T2P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, t=1, f=1;//number n, 3^0, and 5^0
	setbuf(stdout, NULL);
	printf("Enter a number to calculate the result of 3^n+5^n: ");
	scanf("%d",&n);//get input
	for(int i=1; i<=n; i++){//multiply 3^0 and 5^0 for n times, to compute the number of t^n and f^n
		t=t*3;
		f=f*5;
		}
	printf("the result is: %d", t+f);//print the output
	return 0;
}
