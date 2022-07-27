/*
 ============================================================================
 Name        : W5T8P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y;//name variable
	setbuf(stdout, NULL);//make sure printf() shows before getting input
	printf("Enter two integers: ");//tell user to enter value
	scanf("%d%d", &x, &y);//get values of x and y

	(x>y)?printf("%d", x):printf("%d", y);//judge if x is bigger than y, if conclusion is TRUE, print the value of x, or print the value of y

	return 0;
}
