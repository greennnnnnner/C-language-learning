/*
 ============================================================================
 Name        : A3T2P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int findBiggest(int nums[], int n);

int main(){
	int nums[50];
	int size;
	setbuf(stdout, NULL);
	printf("Please enter a sequence of positive integers, use -1 to stop: ");
	for(size=0;nums[size-1]!=-1;size++){
		scanf("%d", &nums[size]);//get input
	}
	size = size-1;
	printf("The biggest number is %d", findBiggest(nums, size));//print the outcome
	return 0;
}

int findBiggest(int nums[], int n){
	if(n==1){
		return nums[0];
	 }//base case
	else{
		if(findBiggest(nums, n-1)>nums[n]){
			return findBiggest(nums, n-1);//compare till the very first number of the array
		}else{
			return nums[n];
		}//recursive step
	}
}
