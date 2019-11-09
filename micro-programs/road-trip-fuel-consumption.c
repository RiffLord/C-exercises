//	Calculates the average ratio of kilometres travelled / litres of fuel consumed
//	on a series of imaginary road-trips.

#include <stdio.h>

int main(void) {
    float l, kmpl, tot;
    int km, trips;

    tot = 0;
    trips = 0;

    printf("%s", "Enter the amount of fuel used in litres (-1 to end): ");
    scanf("%f", &l);
    while (l != -1) {
        printf("%s", "Enter the kilometres travelled: ");
        scanf("%d", &km);
		
        kmpl = (float) km / l;
        printf("The km/l for this tank was %f\n", kmpl);
		
        trips++;
        tot += kmpl;

        printf("%s", "\nEnter the amount of fuel used in litres (-1 to end): ");
        scanf("%f", &l);
    }

    printf("\nThe overall average km/l was %f\n", ((float) tot / trips));
}
