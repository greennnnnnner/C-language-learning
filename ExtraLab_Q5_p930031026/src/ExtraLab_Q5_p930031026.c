/*
 ============================================================================
 Name        : ExtraLab_Q5_p930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float loan, rate, payment;
	setbuf(stdout, NULL);
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly paymant: ");
	scanf("%f", &payment);
	float monthRate = rate/12;
	float actualRate = 1 + monthRate/100;
	float remain_1 = loan*actualRate-payment;
	float remain_2 = remain_1*actualRate-payment;
	float remain_3 = remain_2*actualRate-payment;

	printf("\nBalance remaining after first payment: %.2f", remain_1);
	printf("\nBalance remaining after second payment: %.2f", remain_2);
	printf("\nBalance remaining after third payment: %.2f", remain_3);
	return 0;
}
