/*
 *	Receives a sequence of integers and calculates their sum.
 */

#include <stdio.h>

int main(void) {
    unsigned int seq;
    int n, sum = 0;
    puts("Please enter a sequence of integers starting with the number of integers to add: ");
    scanf("%u", &seq);

    for (unsigned int i = 1; i <= seq; i++) {
        scanf("%d", &n);
        sum += n;
    }

    printf("%s%d%s%d", "The sum of the ", seq, " numbers entered is ", sum);
    puts("");
}
