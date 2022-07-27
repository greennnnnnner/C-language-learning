/*
 ============================================================================
 Name        : A1T4P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char ch1, ch2, ch3, ch4;//declare vairables, ch1 and ch2 are the input, ch3 and ch4 used for compare ch1 and ch2 without case-sensative
	setbuf(stdout,NULL);
	printf("Input: ");
	scanf("%c %c",&ch1, &ch2);//get input from user
	if((ch1<'A')||((ch1<'a')&&(ch1>'Z'))||(ch1>'z')){//judge if ch1 is an English letter
		printf( "Output: %c is not an English letter", ch1);
		return 0;//if not, print the message to user and end this program early
	}
	if((ch2<'A')||((ch2<'a')&&(ch2>'Z'))||(ch2>'z')){//judge if ch2 is an English letter
		printf( "Output: %c is not an English letter", ch2);
		return 0;//if not, print the message to user and end this program early
	}
	if(('A'<=ch1)&&(ch1<='Z'))
		ch3=ch1+32;//if ch1 is a capital character, convert it into a lowercase character.
	else
		ch3=ch1;//else ch3 will be the same as ch1
	if(('A'<=ch2)&&(ch2<='Z'))
		ch4=ch2+32;//if ch2 is a capital character, convert it into a lowercase character.
	else
		ch4=ch2;//else ch4 will be the same as ch2
	if(ch3<=ch4)//compare ch3 and ch4, judge if the ASCII code of ch3 is less than the ASCIIcode of ch4
		printf("Output: %c %c", ch1, ch2);//if ch3's is less, mean that ch1 should be on the front, if they are the same, show them as same as input
	else
		printf("Output: %c %c", ch2, ch1);//else, ch4's is larger than ch3's, mean ch1 should be on the behind.
	return 0;//end of the program
}
