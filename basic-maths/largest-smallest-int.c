//  Receives three integers in input and prints the largest and smallest ones to the console

#include <stdio.h>

int main(void) {
    puts("Please enter three integers:");

    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int min = x, max = x;
    if (y < min)
        min = y;

    if (y > max)
        max = y;

    if (z < min)
        min = z;

    if (z > max)
        max = z;

    if (min == max) {
        printf("The numbers entered are all equal.");
        return;
    }

    printf("The largest number is %d\nThe smallest number is %d", max, min);
}
