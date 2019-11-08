/*
 *  Displays the powers of 1 through 3
 *  of the numbers 0 through 10 and displays
 *  them in an appropriately formatted
 *  table.
 */

#include <stdio.h>

int main(void) {
    puts("Number    Square    Cube");

    int i = 0;
    while (i <= 10) {
        if (i < 10 && i * i < 10)
            printf("%d         %d         %d\n", i, (i * i), (i * i * i));

        else if (i < 10 && i * i >= 10)
            printf("%d         %d        %d\n", i, (i * i), (i * i * i));

        else if (i >= 10 && i * i >= 99)
            printf("%d        %d       %d\n", i, (i * i), (i * i * i));

        i++;
    }

    puts("\n");
}
