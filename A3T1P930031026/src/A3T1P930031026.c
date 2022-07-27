/*
 ============================================================================
 Name        : A3T1P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main() {
	int total;
	int array[100];
	setbuf(stdout, NULL);
	printf("Please input the total number of integers: ");
	scanf("%d", &total);//get input
	printf("Please input the integers to sort: ");

	for(int i=0;i<=total-1;i++){
		scanf("%d", &array[i]);//get the array
	}
	sort(array, total);
	for(int i=0;i<=total-1;i++){
		printf("%d ", array[i]);//print them in descending order
		}
	return 0;
}
