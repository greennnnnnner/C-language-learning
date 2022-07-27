/*
 ============================================================================
 Name        : A1T3P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, i1, i2, i3;//declare variables, i is the input, i1, i2, i3, are the first,second,third digit of i
	setbuf(stdout,NULL);
	printf("Please enter a positive integer between 100 and 999: ");
	scanf("%d", &i);//get the input value
	i1=i/100;//calculate the balue of the first digit of i
	i2=(i-100*i1)/10;//calculate the second digit of i
	i3=i-100*i1-10*i2;//calculate the third digit of i
	int j = 100*i3+10*i2+i1;//calculate the inverted number of i
	printf("The invert number of %d is: %d", i, j);//print the output out
	return 0;
}
