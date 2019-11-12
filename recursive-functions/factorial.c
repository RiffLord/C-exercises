//	Recursive function for calculating a number's factorial

#include <stdio.h>

int factorial(int);

int main() {
	int number;
	
	printf("Insert a positive number: ");
	scanf("%d", &number);
	
	if (number < 0) puts("Error: the number you have entered is negative...");
	
	else {
		printf("%d%s%d", number, "! = ", factorial(number));
		puts("");
	}
	
	return 0;
}

int factorial(int n) {
	int f;
	
	if (n == 0)
		return 1;
	
	else return n * factorial(n - 1);
}