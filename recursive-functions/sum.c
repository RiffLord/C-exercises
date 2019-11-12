//	Recursive addition, because why not?

#include <stdio.h>

int add(void);

int main() {
	int sum;
	sum = add();
	
	printf("Sum = %d\n", sum);
	
	return 0;	
}
 
int add(void) {
	int currentValue, summedValue;
	
	printf("Number to add: ");
	scanf("%d", &currentValue);
	
	//	The function calls itself and continues
	//	adding the results to summedValue until
	//	it receives 0
	if (currentValue) {
		summedValue = currentValue + add();
		
		return summedValue;
	}
	
	else return 0;
}
