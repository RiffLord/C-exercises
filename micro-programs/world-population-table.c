/*
 *  This program receives the current world population
 *  and growth estimate in input, calculating the
 *  estimated world population over the following 75 years
 *	and displaying the results in a table.
 *	The maths and data behind this program is probably wrong.
 */

#include <stdio.h>
#include <stdbool.h>

int main (void) {
    double currentPop = 7.567;			//	in billions
    double estimatedPop = currentPop;
    double increaseRate = 1.10f;		//	percent

    printf("%s%.2lf%s", "The current estimate of the world's population is ", currentPop, " billion people.\n");
    printf("%s%.2lf%s", "According to our data, the world's population will increase by ", increaseRate, "% next year.\n");
    printf("%s", "Assuming the yearly growth rate remains constant, the following estimates\ncan be extrapolated from the available data (Population and Pop. Increase in billions):\n\n");
    printf("%s\t%s\t%s", "Year", "Population", "Pop. Increase\n");

    unsigned int year = 2019;
	unsigned int threshold;		//	Stores the year in which the world population will double its current amount.
    bool flag = false;			//	Used to ensure the threshold value isn't overwritten once it has been determined.
	
    for (unsigned int i = 1; i <= 75; i++) {
        double popIncrease = (estimatedPop * increaseRate) / 100;
        estimatedPop += popIncrease;

        if (!flag && (estimatedPop >= currentPop * 2)) {
            flag = true;
            threshold = year + i;
        }

        printf("%u\t%10.2lf\t%13.2lf\n", year + i, estimatedPop, popIncrease);
    }
    puts("");
    printf("%s%u\n", "Assuming a constant growth rate, the world's population will become double the current value in the year ", threshold);
}
