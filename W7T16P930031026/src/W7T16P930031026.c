/*
 ============================================================================
 Name        : W7T16P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void ascending(int data[], int size);//call the prototype out before calling it

int main(){
	int a[1000];
	int j, i=0,size=0;
	setbuf(stdout, NULL);
	printf("Enter a series of integer to sort into ascending order and descending order, enter '-1' to stop\n");
	do{
		scanf("%d", &a[i]);//get input first, before decision
		i++;
		size++;
	}while(a[(i-1)]!=-1);//condition decide
	ascending(a, size);//sort array into ascending order
	printf("ascending order: ");
	for(j=0;j<=(size-2);j++){
		printf("%d ", a[j]);//print them in ascending order
	}
	printf("\ndescending order: ");
		for(j=(size-2);j>=0;j--){//
		printf("%d ", a[j]);//print them in descending order
	}
	return 0;
}


void ascending(int data[], int size){ //function to sort array in ascending order
	int temp;//for swap
	int max_index;//index of max value
	for (int rightmost=size-2; rightmost>0; rightmost--){
		max_index = 0; //points the largest element
				for ( int current=1; current<=rightmost; current++)
		 			if (data[current] > data[max_index])
		 				max_index = current;//move the largest to ethe last
				if (data[max_index] > data[rightmost]){
							temp = data[max_index];   // swap
							data[max_index] = data[rightmost];
							data[rightmost] = temp;
							}
				}
		}


