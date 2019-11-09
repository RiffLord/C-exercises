//	Calculates the users maximum and average heart rate based on their age.

#include <stdio.h>
#include <time.h>

int main(void) {
    /*
     *  A tm struct is used to access the
     *  year values used to calculate the user's
     *  age.
     */
    struct tm dateOfBirth, currentDate;
    //  Obtains the current system time.
    time_t t = time(NULL);
    currentDate = *localtime(&t);

    /*
     *  The user's date of birth is
     *  stored in separate integers
     *  which are then assigned to
     *  the dateOfBirth tm struct.
     */
    int yyyy, mm, dd;
    printf("Please enter your date of birth (yyyy/mm/dd): ");
    scanf("%d/%d/%d", &yyyy, &mm, &dd);
    dateOfBirth.tm_year = yyyy;
	
	//	The following assignments are useless within the scope of this program.
    dateOfBirth.tm_mon = mm;
    dateOfBirth.tm_mday = dd;

    //  The maximum heart rate is equal to 220 - the individual's age.
    unsigned int maxHeartRate = 220 - ((currentDate.tm_year + 1900) - dateOfBirth.tm_year);
    //  The average heart rate is equal to 50-80% (65% on average) of the person's maximum heart rate.
    printf("%s%u\n%s%.2f\n", "Maximum heart rate: ", maxHeartRate, "Average heart rate: ", (float) ((maxHeartRate * 65) / 100));
}
