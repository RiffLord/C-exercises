/*
 *  Receives two integers in input
 *  and prints their sum, product,
 *  difference, quotient and remainder.
 */

#include <stdio.h>

int main(void) {
    puts("Please enter two integers.");

    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d + %d = %d\n"
		   "%d * %d = %d\n"
		   "%d - %d = %d\n"
		   "%d / %d = %d\n"
		   "%d mod %d = %d",
           x, y, x + y, 
		   x, y, x * y, 
		   x, y, x - y, 
		   x, y, x / y, 
		   x, y, x % y);
} // End main
