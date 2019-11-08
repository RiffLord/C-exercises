//	Examines the digits of a number (up to 5 digits) and counts
//	the occurrences of the digit 7.

#include <stdio.h>

int main(void) {
    printf("%s", "Please enter a number of up to 5 digits: ");
    unsigned int num, sevens = 0;
    scanf("%d", &num);

    if (num > 99999)
        puts("Error! The number you have entered has more than 5 digits.");

    else {
        if (num <= 9) {
            if (num == 7)
                sevens++;
        } else {
            int i;
            if (num <= 99) {
                i = 10;
            } else if (num <= 999) {
                i = 100;
            } else if (num <= 9999) {
                i = 1000;
            } else if (num <= 99999) {
                i = 10000;
            }

            while (i >= 1) {
                if (num / i % 10 == 7)
                    sevens++;

                i /= 10;
            }
        }

        printf("%d%s%d%s", num, " has ", sevens, " digits equal to 7\n");
    }
}
