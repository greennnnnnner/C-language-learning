/*
 ============================================================================
 Name        : W10T22P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int PowerRec(int m, int n);
void PowerLoop(int m, int n);

int main() {
	int m, n;
	scanf("%d%d", &m, &n);//get input
	PowerLoop(m,n);
	printf("%d", PowerRec(m,n));

	return 0;
}


int PowerRec(int m, int n){//recursive function
	if(n==0){
		return 1;//base case
	}
	else{
		n--;
		m=m*PowerRec(m, n);
		return m;//recursive step
	}
}

void PowerLoop(int m, int n){
	int sum = 1;
	if(n==0){
		sum=1;//if n==0
		}
	else
	{
		for(int i=1; i<=n; i++){
			sum=sum*m;
			}
		}
	printf("%d\n", sum);
}



