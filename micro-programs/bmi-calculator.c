/*
 *  Calculates a person's body/mass index
 *  BMI = kg / m * m
 */

#include <stdio.h>

int main(void) {
    printf("The US Department of Health and Human Services/National Institutes of Health\n"
           "define the following Body/Mass Index values:\n\n");
    puts("Underweight: less than 18.5");
    puts("Normal:      18.5 - 24.9");
    puts("Overweight:  25   - 29.9");
    puts("Obese:       30 and above\n");
    printf("Please enter your weight (in kg) and your height (in m): ");

    double height, weight;
    scanf("%lf %lf", &weight, &height);
    printf("Your current BMI is: %f\n", (double) (weight / (height * height)));

}
