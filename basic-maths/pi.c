/*	
 *	Approximates the value of pi (more precisely the 
 *	higher the number received in input is); The input
 *	should be in the hundreds/thousands to get close to Pi.
 */
#include <stdio.h>

int main(void) {
    printf("Enter the number of positions of the pi series to calculate: ");
    int i;
    scanf("%d", &i);

    double pi;
    for (unsigned int j = 1; j <= i; j += 4) {
        pi += (4.0 / j) - (4.0 / (j + 2.0));
    }

    printf("%s%lf\n", "Pi = ", pi);
}
