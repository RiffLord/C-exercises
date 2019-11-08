//	Receives three integers and determines whether they can represent the sides of a triangle.

#include <stdio.h>

int main(void) {
    puts("Enter three integers");
    unsigned int a, b, c;
    puts("Can the following numbers represent the sides of a triangle?");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0 || b == 0 || c == 0)
        puts("These numbers cannot represent the sides of a triangle\nNo triangle can have a 0-length side.");

    else {
        if (a + b > c && a + c > b && b + c > a) {
            printf("%s%d, %d, %d%s", "The numbers ", a, b, c, " represent the sides of a triangle.\n");
            if (a * a + b * b == c * c)
                puts("Furthermore, they represent a right triangle.");

        } else
            printf("%s%d, %d, %d%s", "The numbers ", a, b, c, " do not represent the sides of a triangle.");
    }
}
