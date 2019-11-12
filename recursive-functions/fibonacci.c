#include <stdio.h>

int fibonacci(int);

int main() {	
	printf("Enter the position of the Fibonacci sequence to calculate: ");
	
	int position;
	scanf("%d", &position);
	printf("%s%d%s%d", "The ", position, "th position of the Fibonacci sequence is: ", fibonacci(position));
	puts("");
	
	return 0;		
}

int fibonacci(int n) {
	if (n == 1 || n == 2)
		return 1;
	
	else return fibonacci(n - 1) + fibonacci(n - 2);
}
