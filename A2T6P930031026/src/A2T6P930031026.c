/*
 ============================================================================
 Name        : A2T6P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copylast   : Your copylast notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void decending(int data[], int total);
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
	decending(array, total);
	for(int i=0;i<=total-1;i++){
		printf("%d ", array[i]);//print them in ascending order
		}
	return 0;
}

void decending(int data[], int total){ //function to sort array in ascending order
	int temp;//for swap
	int min;//index of minimal value
	for (int last=total-1; last>=0; last--){
		min = 0;
		for (int i=1; i<=last; i++){
		 	if (data[i] < data[min]){
		 		min = i;//find the smallest element
		 	}
		 			}
		temp = data[min];   // swap
		data[min] = data[last];
		data[last] = temp;//move the smallest to the last
		}
}
