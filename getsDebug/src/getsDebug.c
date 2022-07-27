/*
 ============================================================================
 Name        : getsDebug.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{

   int date;
   char event[100];
   setbuf(stdout, NULL);
   printf("\nplease enter the date you want to add events in: ");
   scanf("%d\n",&date);
   printf("\nplease enter the event you want to add on this date: ");
   gets(event);



   printf("ÄúÊäÈëµÄ×Ö·û´®ÊÇ£º%s, date=%d", event,date);

   return(0);
}
