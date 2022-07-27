/*
 ============================================================================
 Name        : W5T11P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char gpa;
	setbuf(stdout, NULL);//make sure printf() shows before getting input
	printf("Enter you GPA grade: ");//Tell user to input the information
	scanf("%c",&gpa);//get input and give it to variable 'gpa'
	switch(gpa){
		case'A':
		case'a':
			printf("your GPA point is 4.00\n");//if input is 'A'or'a', do this
			break;//end this switch statement
		case'B':
		case'b':
			printf("your GPA point is 3.00\n");//do this when input is 'B' or'b'
			break;//end this switch statement
		case'C':
		case'c':
			printf("your GPA point is 2.00\n");//do this when input is 'C' or'c'
			break;//end this switch statement
		case'D':
		case'd':
			printf("your GPA point is 1.00\n");//do this when input is 'D' or'd'
			break;//end this switch statement
		case'F':
		case'f':
			printf("your GPA point is 0.00\n");//do this when input is 'F' or'f'
			break;//end this switch statement
		default:
			printf("invalid input");//if no case does the value fit,do this
			break;//end this switch statement
	}
	return 0;
}
