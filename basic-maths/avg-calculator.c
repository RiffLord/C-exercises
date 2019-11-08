/*
 *	Receives an undefined number of integers using a sentinel value 
 *  to end the sequence and calculates the average.
 */

#include <stdio.h>

int main(void) {
    puts("Enter a sequence of integers (9999 to end).\n"
         "This program will calculate the average of the numbers received.");
    int sum = 0, n = 0, i = 0;

    while (i != 9999) {
        scanf("%d", &i);
        if (i != 9999) {
            sum += i;
            n++;
        }
    }

    printf("%s%.2f", "The average of the entered numbers is ", (float) sum / n);
}
