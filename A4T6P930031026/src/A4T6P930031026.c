/*
 ============================================================================
 Name        : A4T6P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct info{
		char ID[20];
		char name[10];
		float score;
		char email[30];
	};
int merge(char str1[20], char str2[20], char str3[20] );
int main()
{
      if (!merge ("1001.txt", "1002.txt", "class.txt"))
        printf("Failed to merge");
      else
        printf("Merge successfully");
    return 0;
}

int merge(char str1[20], char str2[20], char str3[20] ){
	struct info info1[50];
	struct info info2[50];//struct used to save data

	FILE *fp1=fopen(str1,"r");
	FILE *fp2=fopen(str2,"r");
	FILE *fp3=fopen(str3,"r+");//open 3 files
	if(fp1==NULL||fp2==NULL||fp3==NULL){
		return 0;//if some file is NULL, return to 0
	}
	int i1=0,i2=0;
	while(fscanf(fp1,"%s",info1[i1].ID)!=EOF){
		fscanf(fp1,"%s",info1[i1].name);
		fscanf(fp1,"%f",&info1[i1].score);
		fgets(info1[i1].email,30,fp1);
		i1++;//get all information from 1001
	}while(fscanf(fp2,"%s",info2[i2].ID)!=EOF){
		fscanf(fp2,"%s",info2[i2].name);
		fscanf(fp2,"%f",&info2[i2].score);
		fgets(info1[i2].email,30,fp2);
		i2++;//get information from 1002
	}for(int i=0; i<i1;i++){
		fprintf(fp3,"%s %s %.2f 1001\n", info1[i].ID,info1[i].name, info1[i].score);
	}for(int i=0; i<i2;i++){//put 1001 in class
		fprintf(fp3,"%s %s %.2f 1002\n", info2[i].ID,info2[i].name, info2[i].score);//put 1002 in class
	}fclose(fp1);
	fclose(fp2);
	fclose(fp3);//close files
	return 1;//merge successfully
}
