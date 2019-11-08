/*
 *  Prints the digits of an integer
 *  provided by the user seperated
 *  by a space
 */

#include <stdio.h>

int main(void) {
    printf("Please enter a 5-digit integer: ");

    int i;
    scanf("%d", &i);

    if (i < 10000 || i > 99999)
        puts("Error! The number entered is out of range...");

    else {
        int j = 10000;
        while (j >= 1) {
            printf("%d ", (i / j % 10));
            j /= 10;
        }
    }
}
