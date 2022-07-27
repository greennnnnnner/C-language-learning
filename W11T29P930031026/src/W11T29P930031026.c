/*
 ============================================================================
 Name        : W11T29P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
char* stringCombine(char *dest, char *src);
int main()
{
    char str1[20], str2[20];
    scanf("%s%s", str1, str2);
    stringCombine(str2, str1);//call the function, change the value inside the sub-function
    printf("%s\n", str2);
    return 0;
}

char* stringCombine(char *dest, char *src){

	while(*dest!='\0'){
		dest++;//read dest and put it into cite
	}
	while(*src!='\0'){
		*dest=*src;
		dest++;
		src++;// add src at the end of cite
	}
	*dest='\0';//end of str
}

