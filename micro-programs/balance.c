//	Calculates the balance of a number of imaginary bank accounts; the user inputs all data.

#include <stdio.h>

int main(void) {
    int account;
    double balance, currentBalance,
           expenses, credit, maxCredit;

    printf("%s", "Enter account number (-1 to end): ");
    scanf("%d", &account);
    while (account != -1) {
        printf("%s", "Enter initial balance: $");
        scanf("%lf", &balance);
        printf("%s", "Enter total charges: $");
        scanf("%lf", &expenses);
        printf("%s", "Enter total credits: $");
        scanf("%lf", &credit);
        printf("%s", "Enter credit limit: $");
        scanf("%lf", &maxCredit);
		
        currentBalance = balance + expenses - credit;
		
        printf("\n%s%d", "Account:      ", account);
        printf("\n%s%.2lf", "Credit limit: $", maxCredit);
        printf("\n%s%.2lf", "Balance:      $", currentBalance);
		
        if (currentBalance > maxCredit)
            printf("\n%s%.2lf\n", "Credit limit exceeded by $", (currentBalance - maxCredit));
        else
			printf("\n");

        printf("%s", "\nEnter account number (-1 to end): ");
        scanf("%d", &account);
    }
}
