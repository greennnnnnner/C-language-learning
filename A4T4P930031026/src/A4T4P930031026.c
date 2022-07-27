/*
 ============================================================================
 Name        : A4T4P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int data[5];
	int *p1,*p2,temp;
	setbuf(stdout,NULL);
	printf("Please input 5 integer data: ");
	for(int i=0;i<=4;i++){
		scanf("%d",&data[i]);
	}
	p1=p2=data;
	for(int i=0;i<4/2;i++){
		temp=*p1;
		*p1=*(p2+4-i);
		*(p2+4-i)=temp;
		p1++;
	}
	for(int i=0;i<=4;i++){
		printf("%d ",*p2);
		p2++;
	}

	return 0;
}
