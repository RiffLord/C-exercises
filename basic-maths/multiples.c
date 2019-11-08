/*
 *  Determines whether the first of two integers
 *  taken in input is a multiple of the second one
 */

#include <stdio.h>

int main(void) {
    printf("Please enter two integers: ");

    int x, y;
    scanf("%d %d", &x, &y);

    if (x % y == 0)
        printf("%d is a multiple of %d", x, y);
    else
        printf("%d is not a multiple of %d", x, y);
}
