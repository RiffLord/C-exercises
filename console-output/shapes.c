//	Using for loops to print some shapes to the screen.

#include <stdio.h>

int main(void) {
    for (unsigned int i = 1; i <= 10; i++) {
        for (unsigned int j = 1; j <= i; j++) {
            printf("%c", '*');
        }
        puts("");
    }
    for (unsigned int i = 1; i <= 10; i++) {
        for (unsigned int j = i; j <= 10; j++) {
            printf("%c", '*');
        }
        puts("");
    }
    for (unsigned int i = 1; i <= 10; i++) {
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
        for (unsigned int j = i; j <= 10; j++) {

            printf("%c", '*');
        }
        puts("");
    }
    unsigned int transpose;
    for (unsigned int i = 1; i <= 10; i++) {
        transpose = i;
        while (transpose < 10) {
            printf("%c", ' ');
            transpose++;
        }
        for (unsigned int j = 1; j <= i; j++) {
            printf("%c", '*');
        }
        puts("");
    }

    return 0;
}
