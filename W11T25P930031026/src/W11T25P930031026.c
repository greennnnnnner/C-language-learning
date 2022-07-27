/*
 ============================================================================
 Name        : w10T25P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point{
double x, y;
};
struct line{
struct point p1, p2;
};
struct triangle{
struct point p1, p2, p3;
};
struct point p;
struct line l;
struct triangle t;

double length(struct point p1, struct point p2);
double circumference(struct point p1, struct point p2, struct point p3);
//define function
int main(){
	p.x=4;
	p.y=11;
	printf("The point is at %.2f, %.2f",p.x,p.y);
	l.p1.x=2, l.p1.y=7;
	l.p2.x=10, l.p2.y=9;
	printf("\nThe length of l is %.2f", length(l.p1, l.p2));
	t.p1.x=2, t.p1.y=0;
	t.p2.x=6, t.p2.y=5;
	t.p3.x=8, t.p3.y=3;
	printf("\nThe circumference of the triangle t is %.2f", circumference(t.p1, t.p2, t.p3));
	return 0;//assign structure variable
}

double length(struct point p1, struct point p2){
	return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}
double circumference(struct point p1, struct point p2, struct point p3){
	return length(p1,p2)+length(p1,p3)+length(p2,p3);
}
