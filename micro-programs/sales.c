#include <stdio.h>

int main(void) {
    double wage, sales;

    printf("%s", "Enter total weekly sales (-1 to end): $");
    scanf("%lf", &sales);
    while (sales != -1) {
        printf("%s%.2lf\n\n", "Salary this week is $", (double) (200 + ((9 * sales) / 100)));
        printf("%s", "Enter total weekly sales (-1 to end): $");
        scanf("%lf", &sales);
    }
}
