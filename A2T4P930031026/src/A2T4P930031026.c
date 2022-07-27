/*
 ============================================================================
 Name        : A2T4P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int matrix[3][3]={{0,1,0},{1,0,1},{0,1,0}};//input the matrix
	int sym=0;//the number of symmetric numbers
		for(int i=0;i<=2;i++){//i is the line of matrix
			for(int j=0;j<=2;j++){//j is the column of matrix
				if(matrix[i][j]==matrix[j][i]){
					sym++;
				}
			}
		}
		if(sym==9){//decide if all numbers are symmetric numbers
			printf("It is a symmetric matrix");
		}
	return 0;
}
