/*
 ============================================================================
 Name        : A2T3P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int primeNumber;
	setbuf(stdout, NULL);
	printf("Enter a positive number to decide if it's a prime number: ");
	scanf("%d",&primeNumber);//get input
	if (primeNumber==1){
		printf("It's not a prime number");//if it's equal to 1, it's not a prime number
		return 0;
	}
	for(int i=2;i<primeNumber;i++){
		if (primeNumber%i==0){//decide if this number can be divided with no remainder
			printf("It's not a prime number");//if yes, it's not a prime number
			return 0;//jump out of the loop and end the program
		}
	}
	printf("It's a prime number");///if it can't be divided with no remainder, it's a prime number
	return 0;
}
