/*
 ============================================================================
 Name        : ExtraLab_Q3_p930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float amount;
	setbuf(stdout, NULL);

	printf("Enter an amount: ");
	scanf("%f", &amount);
	float tax = 1.05;
	float withTax = amount*tax;
	printf("With tax added: $%.2f", withTax);

	return 0;
}
