/*
 ============================================================================
 Name        : A3T3P930031026.c
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
	char str[9];
	char temp[9];
	int sum=0, m;
	setbuf(stdout, NULL);
	printf("Enter a binary number to convert it into a decimal number: ");
	scanf("%8s", str);//get only first 8 numbers
	int size=strlen(str);
	if(size<8){//if numbers are less than 8

		for (int i=0,j=0;i<8;i++){
			if (i<=7-size){
				temp[i]='0';
			}//fill it with '0';
			else{
				temp[i]=str[j];
				j++;
			}
		}
		strncpy(str, temp,8);
		str[8]='\0';
	}


	for(int i=0;i<8;i++){
		m=1;
		if(str[i]=='1'){
			for(int j=1;j<=7-i;j++){
				m*=2;
				}
			sum+=m;
			}//nested for loop to convert binary number into a decimal number
		}
	printf("the decimal number is %d", sum);//output the outcome
	return 0;
}

