/*
 ============================================================================
 Name        : W12T30P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int fileCombine(char *destFileName, char *resFileName);
	char fileName1[20], fileName2[20];
	int flag;
	scanf("%s", fileName1);
	scanf("%s", fileName2);
	flag = fileCombine(fileName2, fileName1);
	if (flag == 1)
	  printf("Success");
	else
	  printf ("Failure");
	return 0;

}
int fileCombine(char *destFileName, char *resFileName){
	FILE *fp1, *fp2;
	char c1,c2;
	fp2 = fopen(destFileName, "a+");
	fp1 = fopen(resFileName, "r");
	if((fp2==NULL)||(fp1==NULL)){
		fclose(fp1);
		fclose(fp2);
		return 0;
}
	else
		while((c1=fgetc(fp1))!=EOF){
		fprintf(fp2,"%c",c1 );
	}
	while((c2=fgetc(fp2))!=EOF)
		printf("%c",c2);
	fclose(fp1);
	fclose(fp2);
	return 1;

}
