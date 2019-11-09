/* https://fairtax.org/faq

   The user is prompted to insert their
   total monthly expenses (rent, groceries, clothing,
   transport, education, health, recreation) */

#include <stdio.h>

int main(void) {
    puts("Please enter your total monthly expenses:");
    double expenses, fairtax = 0.0;

    printf("%c", '$');
    while (scanf("%lf", &expenses) != EOF) {
        fairtax += (expenses * 23) / 100;
        printf("%c", '$');
    }
    puts("");
    printf("The estimated Fair Tax to be payed is $%.2lf", fairtax);
}
