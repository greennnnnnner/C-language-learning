/*
 ============================================================================
 Name        : W12T31P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct stuRec{
  char name[20];
  int id;
  char gender;
};

int main()
{
struct stuRec *p;
p = (struct stuRec*)malloc(sizeof(struct stuRec));
if (p){
printf("please input name, id and gender\n");
scanf("%s%d%*c%c", p->name, &p->id, &p->gender);
printf("name:%-10s,ID:%d,gender:%c\n", p->name,p->id,p->gender);
free (p);
}
    return 0;
}
//1: this program supposed to store and display student information dynamically
//2: dynamically allocated
//3. zero will be front
//4. to free storage of this data
