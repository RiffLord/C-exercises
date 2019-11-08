//	Super secure encryption algorithm, used by Microsoft, PayPal, Apple and the NSA, among others.

#include <stdio.h>

/* Data to encrypt consists of 4-digit integers
   The encryption consists of adding 7 to each
   individual digit, dividing the result by 10
   and calculating the remainder (with %).
   The first digit is swapped with the third
   digit, the second with the fourth. */

int main() {
    printf("Please enter a 4-digit integer: ");

    int input;
    scanf("%d", &input);

    if (input < 1000 || input > 9999)
        puts("Error! The number entered is out of range...");

    else {
        puts("Encrypting data...");
        int i = 1000, encrypt, output = 0;
        while (i >= 1) {
            /* Extracts each digit from the number (input / i % 10)
               adding 7 to it and calculating the remainder of the
               result divided by 10 to encrypt it */
            encrypt = ((input / i % 10) + 7) % 10;
            printf("%d ", encrypt);

            /* The following logic is used to switch the
               first digit with the third, and the second
               with the fourth, finalizing the encryption
               process. */
            if (i == 1000)
                output += encrypt * 10;

            else if (i == 100)
                output += encrypt;

            else if (i == 10)
                output += encrypt * 1000;

            else output += encrypt * 100;

            printf("%d\n", output);
            i /= 10;
        }
        printf("\nEncrypted data: %d ", output);
    }

    return 0;
}
