/*
 ============================================================================
 Name        : W10T19P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void exchange(float a[], int n); // function prototype
int main(){
	float value[4] = {2.5, 1, 1.2, 5.2};
	exchange(value, 4);
	printf("value[0] = %f", value[0]);
	return 0;
}
void exchange(float a[], int n){
	float temp;
	for(int i=0; i<=n; i++){
	if(a[i]>a[0]){
		temp = a[0];
		a[0] = a[i];
		a[i] = temp;
		}
	}
}


