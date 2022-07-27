/*
 ============================================================================
 Name        : A4T1P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[50];
	char subStr[50];
	char *p1=str, *p2=subStr;
	int start, length;
	setbuf(stdout,NULL);
	printf("Please enter a string, the start position of the substring, and its length: ");
	scanf("%s %d %d", str, &start,&length );

	for(int i=1;i<start;i++){
		p1++;
		if(*(p1)=='\0'){
				printf("INPUT INVAILD");
				return 0;//detect if the start position is longer than string
			}

	}

	for(int i=0;i<length;i++){
		if(*(p1)!='\0'){
		*p2=*p1;
		p2++;
		p1++;
		}if(*(p1)=='\0'){//if the end of str is detected, break the loop
			break;
		}
	}
	printf("%s",subStr);
	return 0;
}
