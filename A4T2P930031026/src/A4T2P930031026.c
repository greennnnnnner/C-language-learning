/*
 ============================================================================
 Name        : A4T2P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct info{
	char manufacturer[50];
	char productName[50];
	int price;
};
void sort(struct info data[], int n);

int main() {
	int number;//the number of products
	struct info product[50];
	setbuf(stdout,NULL);
	printf("Please input the manufacturer name, product name, and price of product in order, set the price as -1 to stop inputting: ");
	for(int i=0; i<50; i++){
		scanf("%s %s %d",product[i].manufacturer, product[i].productName,&product[i].price);
		if(product[i].price==-1){
			number=i;
			break;
		}
	}
	sort(product, number);
	for(int i=0; i<number; i++){
			printf("Manufacturer name: %s, Product name: %s, Price: %d\n",product[i].manufacturer, product[i].productName,product[i].price);
//print data in order
		}
	return 0;
}
void sort(struct info data[], int n){ //function to sort array in descending order
	int temp;//for swap
	int min;//index of min value
	for (int last=n-1; last>=0; last--){
		min = 0;
		for (int i=1; i<=last; i++){
		 	if (data[i].price < data[min].price){
		 		min = i;//find the smallest element
		 	}
		 			}
		temp = data[min].price;   // swap
		data[min].price = data[last].price;
		data[last].price = temp;//move the smallest to the last
		}
}
