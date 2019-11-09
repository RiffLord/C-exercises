/* 
 *	Calculates the wages of a series of imaginary employees
 *	based on the number of hours worked and hourly rate.
 */

#include <stdio.h>

int main(void) {
    int hours;
    float rate, salary;

    printf("%s", "Enter # of hours worked (-1 to end): ");
    scanf("%d", &hours);
    while (hours != -1) {
        printf("%s", "Enter hourly rate of the employee: $");
        scanf("%f", &rate);
		
        if (hours <= 40)
            salary = (float) hours * rate;
        else {
			//	Overtime
            salary = (float) (40 * rate) + ((hours - 40) * 1.5 * rate);
        }

        printf("%s%.2f\n\n", "The employee's wage is $", salary);

        printf("%s", "Enter # of hours worked (-1 to end): ");
        scanf("%d", &hours);
    }
}
