//	Prints a square with asterisks. The size of the square
//	is determined by the value received in input.

#include <stdio.h>

int main(void) {
    unsigned int side;

    printf("%s", "Please enter the length of the side of a square (between 1 and 20): ");
    scanf("%d", &side);
    puts("");
    if (side >= 1 && side <= 20) {
        int x = 0;
        while (x < side) {
            int y = 0;
            while (y < side) {
                printf("%s", "* ");
                y++;
            }
            puts("");
            x++;
        }
        puts("");
    } else {
        puts("Error: the side length entered is beyond the valid range");
    }
}
