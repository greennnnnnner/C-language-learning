/*
 ============================================================================
 Name        : W10T21P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorsDetective(int m, int n);
int main() {
	int m, n, f;
	scanf("%d%d", &m, &n);//get input
	f = factorsDetective(m, n);//call the function
	printf("%d", f);

	return 0;
}

int factorsDetective(int m, int n){
	if(n<m&&n%m!=0){
		return 0;
	}
	else if(n==m){
		return 1;
	}//base cases
	else{
		n=n/m;
		return (factorsDetective(n,m)+1);//recursive step
	}
	}

