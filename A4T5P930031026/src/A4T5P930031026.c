/*
 ============================================================================
 Name        : A4T5P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void findBiggest(int nums[], int n, int *big, int *small);

int main(){
	int nums[50];
	int size;
	int max, min;
	int *pmax=&max, *pmin=&min;
	setbuf(stdout, NULL);
	printf("Please enter a sequence of positive integers, use -1 to stop: ");
	for(size=0;nums[size-1]!=-1;size++){
		scanf("%d", &nums[size]);//get input
	}
	size = size-1;
	findBiggest(nums, size, pmax, pmin);
	printf("The biggest number is %d, the smallest is %d.", nums[max],nums[min]);//print the outcome
	return 0;
}

void findBiggest(int nums[], int n, int *big, int *small){
	*big=0,*small=0;
	for(int i=0;i<n;i++){
		if(nums[*big]<nums[i])
			*big=i;//find the biggest number
		if(nums[*small]>nums[i])
			*small=i;//find the smallest number
	}
}
