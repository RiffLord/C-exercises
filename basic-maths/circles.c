//  Calculates the diameter, circumference and area of a circle

#include <stdio.h>

int main(void) {
    puts("Please enter the radius of a circle to calculate its diameter, circumference and area.");

    printf("Radius:        ");
    float radius;
    scanf("%f", &radius);

    printf("Diameter:      %.2f\n", (2 * radius));
    printf("Circumference: %.2f\n", (2 * 3.14159 * radius));
    printf("Area:          %.2f\n", (3.14159 * radius * radius));
}
