/*
 ============================================================================
 Name        : W4T7P930031026.c
 Author      : DUAN Weitian
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 50, y = 25;
	int temp1, temp2;

	temp1 = x/++y;
	printf("temp1 = %-7d\ty = %d\n", temp1, y);

	y=25;
	temp2 = x/y++;
	printf("temp2 = %7d\ty = %d\n", temp2, y);

	return 0;
}
/*
 * the first output has temp1's value equal to a integer"1"
 * with 7 space after it y equal to 26; the second output
 * has temp2's value as 7space with a integer"2",
 * y equal to 26 too; integer between"%" and "d"means the
 * space of the output, if the digit number of
 * output itself is not enough, space will be filled instead
 * %-7d means filling space before the integer. also, because
 * in temp1's expression, ++y means y plus 1 immediately,so
 * temp1 equal to integer50 divide integer 26 equal to one;
 * temp2's expression uses y++, means y will increment after assignment
 * so temp2 equal to 50/25, but both two y equal to 26.
 */
