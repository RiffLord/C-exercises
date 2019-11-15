/*
 * word-reverser.c
 *
 *	Prompts the user to enter a sequence of characters
 *	and prints them in reverse order using a recursive function.
 *	
 *  Created on: 19/nov/2014
 *      Author: Bruno
 */

#include <stdio.h>
#include <stdlib.h>

void word_reverser(char c);

int main() {
	char cInput;

	printf("Enter a sequence of characters ending with \".\"\n");
	scanf("%c", &cInput);
	word_reverser(cInput);
	puts("");

	system("PAUSE");
	return 0;
}

void word_reverser(char c) {
	char chr;

	if (c != '.') {
		scanf("%c", &chr);		//	I'm sorry, I don't really understand why this works
		word_reverser(chr);
		printf("%c", c);
	} else if (c == '.')
		return;
}
