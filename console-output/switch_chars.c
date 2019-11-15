/*
 * switch_chars.c
 *
 *	A function which uses pointers to switch the locations
 *	storing a series of characters.
 *
 *  Created on: 19/set/2014
 *      Author: Bruno
 */

#include <stdio.h>

void switch_chars(char *c1, char *c2, char *c3, char *c4);

int main() {
	char a, b, c, d;
	a = 'p';
	b = 'd';
	c = 'D';
	d = 'C';

	printf("Characters:\na: %c\nb: %c\nc: %c\nd: %c\n", a, b, c, d);

	switch_chars(&a, &b, &c, &d);
	printf("Characters switched with pointers:\na: %c\nb: %c\nc: %c\nd: %c\n", a, b, c, d);

	return 0;
}

void switch_chars(char *c1, char *c2, char *c3, char *c4) {
	int t1, t2;	//	Temporary variables hold two of the characters

	t1 = *c1;
	t2 = *c2;
	*c1 = *c4;
	*c2 = *c3;
	*c4 = t1;
	*c3 = t2;
}
