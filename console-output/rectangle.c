//	Prints a rectangle to the screen with '@' characters using for loops.
//	The size of the rectangle is determined by the user input.

#include <stdio.h>

int main(void) {
    unsigned int x, y;

    printf("%s", "Enter two positive integers in the range 1-20: ");
    scanf("%u %u", &x, &y);

    if (x < 1 || x > 20 || y < 1 || y > 20)
        printf("Error! The value(s) entered are out of range.\n");

    else {
        for (unsigned int i = 1; i <= y; ++i) {
            for (unsigned int j = 1; j <= x; ++j)
                printf("%c", '@');

            puts("");
        }
    }
}
