/*
 *	Adapting the code from factorial.c to calculate the factorials
 *  between 1 and 6 and display them in a table.
 */

#include <stdio.h>

int main(void) {
    for (unsigned int i = 1; i <= 6; i++) {
		
        //  1! = 1
        if (i == 1)
            printf("%u%c%4u\n", i, '!', i);

        else {
            //  A temporary variable is used to calculate the factorial
            unsigned int temp = i,
                         factorial = i;

            //  Multiplies the result of temp - 1 with factorial,
            //  decreasing temp until it's equal to one
            while (temp > 1) {
                factorial *= temp - 1;
                temp--;
            }

            printf("%u%c%4u\n", i, '!', factorial);
        }
    }
}
