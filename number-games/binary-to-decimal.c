//  Converts a binary number of up to 5 digits to the equivalent decimal-base value.

#include <stdio.h>

int main(void) {
    puts("Enter a binary number of up to 5 digits");
    unsigned int bin;
    scanf("%u", &bin);

    if (bin > 11111)
        puts("Error! The number you have entered is out of range");

    else {
        if (bin <= 1) {
            if (bin == 1)
                printf("%s%u: %u", "The decimal value of ", bin, 1);
            else
                printf("%s%u: %u", "The decimal value of ", bin, 0);
        } else {
            int i, exp;

            /*
             * The initial values of i and exp
             * depend on the number of digits
             * in the binary number to convert.
             */
            if (bin <= 11) {
                i = 10;
                exp = 2;
            } else if (bin <= 111) {
                i = 100;
                exp = 2 * 2;
            } else if (bin <= 1111) {
                i = 1000;
                exp = 2 * 2 * 2;
            } else if (bin <= 11111) {
                i = 10000;
                exp = 2 * 2 * 2 * 2;
            }

            /*
             * The decimal value of
             * the converted number
             * is stored in and added
             * to decValue as the
             * program iterates through
             * the loop
             */
            int decValue = 0;
            while (i >= 1) {
                /*
                 * Each digit of the number is
                 * extracted by dividing it by
                 * i % 10
                 */
                unsigned int digit = bin / i % 10;
                if (digit > 1) {
                    puts("Error! The number you have entered is not a binary number.");
                    printf("%u ", digit);
                    break;
                } else {
                    if (digit == 1) {
                        /*
                         * The power of 2 corresponding
                         * to the digit's position is
                         * added to decValue
                         */
                        decValue += exp;
                    }
                    /* exp is reduced
                     * by a factor of
                     * 2 for the next
                     * iteration of the
                     * loop
                     */
                    exp /= 2;
                }
                /*
                 * i is reduced by
                 * a factor of 10
                 * for the next iteration
                 * of the loop
                 */
                i /= 10;
            }

            printf("%s%u: %d\n", "The decimal value of ", bin, decValue);
        }
    }
}
