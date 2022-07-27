/*
 ============================================================================
 Name        : AddEvents.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Day_of_Week(){
//	for(int i=1;i<=7;i++){
//		switch(i){
//		case 1: printf("Su ");
//		case 2: printf("Mo ");
//		case 3: printf("Tu ");
//		case 4: printf("We ");
//		case 5: printf("Th ");
//		case 6: printf("Fr ");
//		case 7: printf("Sa");
//		break;
//		}
//	}
	char day_week[]={"Su Mo Tu We Th Fr Sa"};
	puts(day_week);
//	printf("Su Mo Tu We Th Fr Sa");
}
void Display_month_calendar(int month){
	int month_day[12]={31,28,31,30,31,30,31,31,30,31,30,31};

	int firstday_month[12]={7,3,3,6,1,4,6,2,5,7,3,5};
//	char firstday_month[12][3]={"Sa","Tu","Tu","Fr","Su","We","Fr","Mo","Th","Sa","Tu","Th"};
	char name_month[12][30]={"      January","      February","       March","       April","        May","        June","        July","       August","     September","     October","     November","     December"};
	printf("%s\n",name_month[month-1]);//打印月份名称
	Day_of_Week();//打印星期几
	int num_day=firstday_month[month-1];
//	find_number_of_firstday(firstday_month[month-1],n);//找到星期几对应每周的第几天
	for(int i=1;i<=month_day[month-1];i++){//打印每月第一天前的空格
		if(i==1){
			for(int a=0;a<num_day-1;a++){
				printf("   ");
			}
		}
		printf("%2d",i);
		printf(" ");
		if((num_day+i-1)%7==0)
			printf("\n");//每周六就跳到下一行
	}
}
void add(){
	char month[10];
	int monthNumber;
	char temp[2];
	int eventNumber=1;
	int month_day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int date, dateSaver;
	int decide;
	char event[100],line[110],print[110];
	FILE *fp=NULL;

	setbuf(stdout,NULL);
	printf("please enter the month you want to add events in: ");
	scanf("%s",month);
	if(strcmp(month,"January")==0){
		monthNumber=1;
		fp=fopen("January.txt","r+");
	}else if(strcmp(month,"February")==0){
		monthNumber=2;
		fp=fopen("February.txt","r+");
	}else if(strcmp(month,"March")==0){
		monthNumber=3;
		fp=fopen("March.txt","r+");
	}else if(strcmp(month,"April")==0){
		monthNumber=4;
		fp=fopen("April.txt","r+");
	}else if(strcmp(month,"May")==0){
		monthNumber=5;
		fp=fopen("May.txt","r+");
	}else if(strcmp(month,"June")==0){
		monthNumber=6;
		fp=fopen("June.txt","r+");
	}else if(strcmp(month,"July")==0){
		monthNumber=7;
		fp=fopen("July.txt","r+");
	}else if(strcmp(month,"August")==0){
		monthNumber=8;
		fp=fopen("August.txt","r+");
	}else if(strcmp(month,"September")==0){
		monthNumber=9;
		fp=fopen("September.txt","r+");
	}else if(strcmp(month,"October")==0){
		monthNumber=10;
		fp=fopen("October.txt","r+");
	}else if(strcmp(month,"November")==0){
		monthNumber=11;
		fp=fopen("November.txt","r+");
	}else if(strcmp(month,"December")==0){
		monthNumber=12;
		fp=fopen("December.txt","r+");
	}else{
		printf("The month is incorrect");
		return;
	}
	Display_month_calendar(monthNumber);
	printf("\nplease enter the date you want to add events in: ");
	scanf("%d",&date);
	if(date<1&&date>month_day[monthNumber]){
		printf("The date is incorrect");
		return;

	}dateSaver=date;
	rewind(fp);
	while( !feof(fp)){
		fscanf(fp,"%d",&decide);//the first number
		fscanf(fp,"%s.2",temp);
		fgets(print,110,fp);//next line
		if(date==decide){
			eventNumber++;
			decide=0;
			printf("%s",print);
		}
		//fgets(print,110,fp);
	}

	getchar();//eat the extra \n
	printf("please enter the event you want to add on this date: ");
	gets(event);


		fprintf(fp,"%d. %d. %s\n",dateSaver ,eventNumber, event);
	}
int main(){
	add();

	return 0;
}
