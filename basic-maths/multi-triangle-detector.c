/*
 *	Uses brute force to calculate which combinations of
 *	numbers between 1 and 500 can represent the sides of
 *	a right triangle.
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    for (unsigned int a = 1; a <= 500; a++) {
        for (unsigned int b = 1; b <= 500; b++) {
            for (unsigned int c = 1; c <= 500; c++) {
                if ((a * a) + (b * b) == (c * c)) {
                    printf("%s%d %d %d\n", "Right triangle: ", a, b, c);
                }
            }
        }
    }
}
