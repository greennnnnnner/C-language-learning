/*
 ============================================================================
 Name        : W11T26P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct data{
	char name[20];
	int score;
	char major[10];
};//define struct
void ascendingOrder(struct data st[50], int size);//define the function
int main() {
	int input;
	struct data stu[50];
	setbuf(stdout, NULL);
	printf("Please input the number of students (<=50): ");
	scanf("%d", &input);
	printf("Please input students'information: ");//offer information and get input
	for(int i=0; i<input; i++){
		scanf("%s %d %s",stu[i].name, &stu[i].score, stu[i].major);
	}
	printf("The student list in ascending order by name is: ");
	ascendingOrder(stu, input);//call the function to order elements
	for(int i=0; i<input; i++){
		printf("\n%s %d %s", stu[i].name, stu[i].score, stu[i].major);
	}
	return 0;
}
void ascendingOrder(struct data st[50], int size){

	struct data temp;
	for(int j=size;j>1;j--){
		int max=0;
		for(int i=1; i<j;i++){
			if(st[i].name[0]>st[max].name[0]){
				max=i;//nested for loop to find the biggest char
			}
		}temp=st[max];
		st[max]=st[j-1];
		st[j-1]=temp;//swap to the last one
	}
}
