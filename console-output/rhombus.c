//	Modifies the code from for-shapes.c to print a rhombus on-screen.

#include <stdio.h>

int main(void) {
    //  Part 1
    unsigned int transpose;

    for (unsigned int i = 1; i <= 9; i++) {
        transpose = i;
        while (transpose < 9) {
            printf("%c", ' ');
            transpose++;
        }
        for (unsigned int j = 1; j <= i; j++) {
            printf("%c", '*');
        }
        for (unsigned int k = 1; k <= i; k++) {
            printf("%c", '*');
        }
        puts("");
    }

    //  Part 2
    for (unsigned int i = 1; i <= 9; i++) {
            //  Find a different transpose algorhithm
            switch (i) {
                case 2:
                    printf("%s", " ");
                    break;
                case 3:
                    printf("%s", "  ");
                    break;
                case 4:
                    printf("%s", "   ");
                    break;
                case 5:
                    printf("%s", "    ");
                    break;
                case 6:
                    printf("%s", "     ");
                    break;
                case 7:
                    printf("%s", "      ");
                    break;
                case 8:
                    printf("%s", "       ");
                    break;
                case 9:
                    printf("%s", "        ");
                    break;
                case 10:
                    printf("%s", "         ");
                    break;
            }
        for (unsigned int j = i; j <= 9; j++) {
            printf("%c", '*');
        }
        for (unsigned int k = i; k <= 9; k++) {
            printf("%c", '*');
        }
        puts("");
    }
}
