//	Receives 10 integers and determines the two largest values among them.

#include <stdio.h>

int main(void) {
    int counter, number,
        largest, nextLargest;

    counter = 0;
    largest = 0;
    nextLargest = largest;
    while (counter < 10) {
        printf("%s", "#");
        scanf("%d", &number);

        if (number > nextLargest && number < largest)
            nextLargest = number;

        if (number > largest)
            largest = number;

        counter++;
    }

    printf("%s%d%s%d", "\n\nThe largest numbers are ", largest, " & ", nextLargest);
}
