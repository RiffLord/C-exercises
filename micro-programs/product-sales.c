//	Uses the switch construct to determine the total earnings from the sales of a series of different products.

#include <stdio.h>

int main(void) {
    unsigned int product, units = 0;
    double total = 0.0;

    puts("Enter the product number");
    while (scanf("%u", &product) != EOF) {
        printf("%s", "Units sold: ");
        scanf("%u", &units);

        switch (product) {
        case 1:
            total += (double) units * 2.98;
            break;
        case 2:
            total += (double) units * 4.50;
            break;
        case 3:
            total += (double) units * 9.98;
            break;
        case 4:
            total += (double) units * 4.49;
            break;
        case 5:
            total += (double) units * 6.87;
            break;
        default:
            printf("Error! No such product in database. Enter the product number: ");
            break;
        }

        printf("%s", "Product #");
    }

    printf("%s%.2lf", "Total sales for this week amount to $", total);
}
