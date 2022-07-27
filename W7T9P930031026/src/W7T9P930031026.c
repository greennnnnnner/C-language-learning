/*
 ============================================================================
 Name        : W7T9P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char a;
	int i=0;
	while(a != '\n'){//to judge if input is '\n'
		scanf("%c", &a);//if not, scan this input
		if (a == 'a'){
		i++;//when input equal to 'a', count one to integer 'i'
		}
	}
	printf("%d", i);//output the number of character 'a'

	return 0;
}
