/*
 ============================================================================
 Name        : A1T1P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
   int i=0, j = 5, k = 4;
   char ch;
   float f;
   scanf("%c", &ch);
   printf("%d is the ASCII code of '%c'\n", ch,  ch);
   printf("the value of i is %d\n", i);
   i = ch;
   printf("the value of i is %d\n", i);
   f = (float)j/k;

   printf("the value of f is %f\n", f);

   return 0;
}

/*
 * There are two errors, error one: no expected';'before 'f';
 * error two: no expected';'before'}'; The reason is because the
 * computer need to read';'as the end of one sentence, otherwise
 * the sentences will be mixed.
 */

/*
 * Yes, there are 5 warnings. The first one warning is because that the
 * program doesn't assign the function 'main' a type of return value, and
 * the return type defaults to 'int' type.
 * Warning 2 and warning 3 happen because they get the wrong I/O type, one
 * gets an integer type when the function scanf() is expecting type 'char',
 * the other one is because the output function printf() gets a 'double'
 * data when expecting integer type, because variable 'i' gets assigned a
 * type 'char'data.
 * The last two warnings are because there are two variables are
 * used uninitialized in the function, means they don't have been assigned
 * variables. The forth warning specifically is because the variable 'ch'
 * doesn't have a '&' before it to assign the input as the value of this
 * variable. Warning 5 is because variable 'i' isn't assigned a value and
 * can't get value from Scanf() function neither.
 */
