/*
 ============================================================================
 Name        : A1T2P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float eu, toHK=8.1, toRMB=7.2, HK, RMB;
	int choose;//declare variables
	setbuf(stdout, NULL);//show user the message before getting input
	printf("Please input amount in Euro: ");
	scanf("%f", &eu);
	printf("Please choose the currency converting to (1: HK dollar, 2: RMB): ");
	scanf("%d",&choose);
	HK = eu*toHK;
	RMB = eu*toRMB;//calculate the value of HK dollar and RMB
	if (choose == 1){
		printf("%.2f euro=%.2f HK dollar", eu, HK);//if user choose to convert to HK dollar, show this message
	}
	else
		if(choose==2){
			printf("%.2f euro=%.2f RMB", eu, RMB);//else if user choose to convert to HK dollar, show this message
		}//only show two digits after zero
	return 0;
}
