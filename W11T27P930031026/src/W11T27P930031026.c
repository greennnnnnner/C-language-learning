/*
 ============================================================================
 Name        : W11T27P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>

void exchange(int *x, int *y);

int main() {
	int a = 10, b = 20;
	printf("before exchange: a = %d, b = %d\n", a, b);
	exchange(&a, &b);
	printf("after exchange: a = %d, b = %d\n", a, b);
	return 0;
}

void exchange(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

