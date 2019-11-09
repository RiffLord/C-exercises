//	Calculates the interest rate of an imaginary loan.

#include <stdio.h>

int main(void) {
    double loan, rate;
    int days;

    printf("%s", "Enter loan principal (-1 to end): $");
    scanf("%lf", &loan);
    while (loan != -1) {
        printf("%s", "Enter interest rate: $");
        scanf("%lf", &rate);
        printf("%s", "Enter term of the loan in days: ");
        scanf("%d", &days);
        printf("%s%.2lf\n\n", "The total interest charge is $", (double) (loan * rate * days) / 365);
        printf("%s", "Enter loan principal (-1 to end): $");
        scanf("%lf", &loan);
    }
}
