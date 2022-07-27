/*
 ============================================================================
 Name        : ExtraLab_Q6_p930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int narc;
	setbuf(stdout, NULL);
	printf("Enter a number to check if it's a daffodil number: ");
	scanf("%d", &narc);
	int narc_1 = narc/100;
	int narc_2 = (narc-100*narc_1)/10;
	int narc_3 = narc-100*narc_1-10*narc_2;
	if (narc == narc_1*narc_1*narc_1+narc_2*narc_2*narc_2+narc_3*narc_3*narc_3){
		printf("This number is a daffodil number");
	}
	else {
		printf("This number is not a daffodil number.");
	}
	return 0;
}
