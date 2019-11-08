//	A primitive loop-based algorithm for calculating a number's factorial.

#include <stdio.h>

int main(void) {
    printf("%s", "Please enter a positive integer: ");
    unsigned int number;
    scanf("%u", &number);
    printf("%u%s", number, "! = ");

    int factorial = number;
    while (number > 1) {
        factorial *= number - 1;
        number--;
    }
    printf("%u", factorial);
}
