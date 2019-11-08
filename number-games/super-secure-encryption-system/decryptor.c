//	Infallible decryption algorithm, devised over the course of 37 years
//	by the brightest minds in computer science from 12 countries.

#include <stdio.h>

int main() {
    printf("Please enter data to decrypt (4-digit integer): ");
    int input;
    scanf("%d", &input);

    if (input < 1000 || input > 9999)
        puts("Error! The number entered is out of range...");

    else {
        puts("Decrypting data...");
        int i = 1000, decrypt, output = 0;
        while (i >= 1) {
            /* Extracts each digit from the number received
               in input and calculates the inverse modulo
               by adding 10 and subtracting 7 from the
               digit */
            decrypt = (10 + (input / i % 10) - 7);

            /* If the result of the previous line is
               a two digit number, the modulo of 10
               is applied to correct the digit's range*/
            if (decrypt >= 10)
                decrypt %= 10;

            printf("%d ", decrypt);

            /* The following logic is used to switch the
               first digit with the third, and the second
               with the fourth, finalizing the encryption
               process. */
            if (i == 1000)
                output += decrypt * 10;

            else if (i == 100)
                output += decrypt;

            else if (i == 10)
                output += decrypt * 1000;

            else output += decrypt * 100;

            printf("%d\n", output);
            i /= 10;
        }
        printf("\n%d ", output);
    }
}
