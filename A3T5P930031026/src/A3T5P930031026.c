/*
 ============================================================================
 Name        : A3T5P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	setbuf(stdout, NULL);
	printf("Enter an integer between 1 to 99: ");
	scanf("%d", &n);//get input
	while(n!=2){//while it's not equal to 1
		if(n%2!=0){//if it is an odd number
			printf("3*%d+1=%d, ",n,3*n+1);
			n=3*n+1;
		}
		else{//if it's an even number
			printf("%d/2=%d, ",n,n/2);
			n=n/2;
		}
	}
	printf("2/2=1");
	return 0;
}
