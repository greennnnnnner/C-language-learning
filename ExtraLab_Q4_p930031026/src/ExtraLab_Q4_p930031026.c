/*
 ============================================================================
 Name        : ExtraLab_Q4_p930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout, NULL);
	printf("Enter a dollar amount: ");
	int dollar;
	scanf("%d", &dollar);
	int a = 20, b = 10, c = 5, d = 1;
	int bills_a = 0, bills_b = 0, bills_c = 0, bills_d = 0;
	bills_a = dollar/a;
	bills_b = (dollar%a)/b;
	bills_c = ((dollar%a)%b)/c;
	bills_d = (((dollar%a)%b)%c)/d;

    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d", bills_a, bills_b, bills_c, bills_d);
	return 0;
}
