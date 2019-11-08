//	Uses a for loop and a switch construct to print the lyrics of "The Twelve Days of Christmas".

#include <stdio.h>

int main(void) {
    for (unsigned int i = 1; i <= 12; i++) {
        printf("%s", "On the ");
        switch (i) {
        case 1:
            printf("%s", "first ");
            break;
        case 2:
            printf("%s", "second ");
            break;
        case 3:
            printf("%s", "third ");
            break;
        case 4:
            printf("%s", "fourth ");
            break;
        case 5:
            printf("%s", "fifth ");
            break;
        case 6:
            printf("%s", "sixth ");
            break;
        case 7:
            printf("%s", "seventh ");
            break;
        case 8:
            printf("%s", "eighth ");
            break;
        case 9:
            printf("%s", "ninth ");
            break;
        case 10:
            printf("%s", "tenth ");
            break;
        case 11:
            printf("%s", "eleventh ");
            break;
        case 12:
            printf("%s", "twelfth ");
            break;
        }
        printf("%s", "day of Christmas\nmy true love gave to me ");
        puts("");

        for (unsigned int j = i; j >= 1; j--) {
            switch (j) {
            case 1:
                printf("%s", "a partridge in a pear tree\n");
                puts("");
                break;
            case 2:
                printf("%s", "Two turtle doves\n");
                printf("%s", "And ");
                break;
            case 3:
                printf("%s", "Three French hens\n");
                break;
            case 4:
                printf("%s", "Four calling birds\n");
                break;
            case 5:
                printf("%s", "Five gold rings\n");
                break;
            case 6:
                printf("%s", "Six geese a-laying\n");
                break;
            case 7:
                printf("%s", "Seven swans a-swimming\n");
                break;
            case 8:
                printf("%s", "Eight maids a-milking\n");
                break;
            case 9:
                printf("%s", "Nine ladies dancing\n");
                break;
            case 10:
                printf("%s", "Ten lords a-leaping\n");
                break;
            case 11:
                printf("%s", "Eleven pipers piping\n");
                break;
            case 12:
                printf("%s", "Twelve drummers drumming\n");
                break;
            }
        }
    }
}
