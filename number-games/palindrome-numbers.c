//  Tests a 5 digit number to see if it is a palindrome

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    printf("%s", "Please enter a 5-digit number: ");
    int num;
    scanf("%d", &num);

    if (num < 10000 || num > 99999)
        puts("Error! The number entered is out of range...");

    else {
        int i = 1;
        int j = 10000;
        bool palindrome = true;
        while (i <= 10000) {
            while (j >= 1) {
                if ((num / j % 10) != (num / i % 10)) {
                    palindrome = false;
                }
                i *= 10;
                j /= 10;
            }
        }

        if (!palindrome)
            printf("%d%s", num, " is not a palindrome\n");

        else printf("%d%s", num, " is a palindrome\n");
    }
}
