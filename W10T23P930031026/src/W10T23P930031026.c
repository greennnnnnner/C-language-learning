/*
 ============================================================================
 Name        : W10T23P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str1[50], str2[50], str3[50], temp[50];
	setbuf(stdout, NULL);
	printf("Enter three strings, str1: ");
	scanf("%s",str1);
	printf("str2: %s", str2);
	scanf("%s",str2);
	printf("str3: %s", str3);
	scanf("%s",str3);//get input of str1 str2 str3
	int len1 = strlen(str1);//length of str1
	int len2 = strlen(str2);//length of str2
	int j=0;//count on the same characters between str1 and str2
	for(int i=0; i<len2; i++){
		if(str1[i]==str2[i]){
			j++;
		}else
			break;
	}
	if(j==len2){//if in case 1, str2 appears at the beginning of str1
		for(int i=len2,t=0; i<len1;i++){
			temp[t]=str1[i];
			t++;//delete str2 from str1
		}
		strcpy(str1, temp);
		strcat(str3, str1);
		printf("Output: ");
		puts(str3);//print string out in one time
	}else{//or
		strcat(str1, strcat(str2, str3));
		printf("Output: ");
		puts(str1);//print string out in one time
	}

	return 0;
}
