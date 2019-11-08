//  Some more basic arithmetic & number comparisons.

#include <stdio.h>

int main(void) {
    puts("Please enter three integer values:");

    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int min = x, max = x;

    if (y < min)
        min = y;

    if (z < min)
        min = z;

    if (y > max)
        max = y;

    if (z > max)
        max = z;

    printf("Sum: %d\nAverage: %d\nProduct: %d\nSmallest: %d\nLargest: %d",
           x + y + z, ((x + y + z) / 3), x * y * z, min, max);
}
