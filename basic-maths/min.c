//	Receives a number of integers and determines the smallest one.

#include <stdio.h>

int main(void) {
    unsigned int i = 0;
    int num, min;
    puts("Please enter a sequence of integers.\n"
         "The first number entered will indicate"
         " the number of integers to compare.");
    scanf("%u", &i);

    unsigned int j = 1;
    num = min;
    while (j <= i) {
        scanf("%d", &num);

        if (num < min)
            min = num;

        j++;
    }

    printf("%s%d", "The smallest number entered was ", min);
}
