/*
 ============================================================================
 Name        : W8T18P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void isPrime(int n);//pre-processor

int main() {
	int positive;//declare the positive number variable
	setbuf(stdout, NULL);
	printf("Enter a positive number to decide if it's a prime number: ");
	scanf("%d", &positive);//get input
	isPrime(positive);// call the function

	return 0;
}

void isPrime(int n){//define the function
	int flag=1;
	for(int i=2; i<n;i++){
		if(n%i==0){
			flag=0;//decide if it can be divided by any number
			break;
		}
	}if(flag==0)
		printf("It's not a prime number");
	else
		printf("it's a prime number");
}
