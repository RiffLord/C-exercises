//	Prints the sides of a square with asterisks. The length of the side is determined by the input value.

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
                if (x == 0 || x == side - 1) {
                    printf("%s", "* ");
                    y++;
                }
                if (y == 0 || y == side - 1) {
                    printf("%s", "* ");
                    y++;
                } else if (y > 0 && y < side - 1 && x > 0 && x < side - 1) {
                    printf("%s", "  ");
                    y++;
                }
            }
            puts("");
            x++;
        }
        puts("");
    } else {
        puts("Error: the side length entered is beyond the valid range");
    }
}
