//	Implements a few recursive functions which operate on an array of integers

#include <stdio.h>

#define SIZE 10


void recursivePrint(int array[], int length);
void bubbleSort(int array[], int length);
void search(int array[], int length);
int add(int array[], int length);


int main() {
	int numbers[SIZE] = {13, 5, 8, 4, 9, 11, 7, 9, 0, 7};
	
	printf("Initial array state: ");
	recursivePrint(numbers, SIZE);
	puts("");
	
	bubbleSort(numbers, SIZE);
	printf("Array state after passing it to bubbleSort: ");
	recursivePrint(numbers, SIZE);
	puts("");
	
	int n = add(numbers, SIZE);
	printf("Sum of array contents: %d", n);

	return 0;
}

void recursivePrint(int array[], int length) {	
	if (length == 0)
		return;
	else {
		printf("%2d  ", array[length - 1]);
		recursivePrint(array, length - 1);
	}
}

void bubbleSort(int array[], int length) {	
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1; j++) {
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

int add(int array[], int length) {
	int sum = 0;
	
	if (length == 0)
		return sum;
	
	else sum = array[length - 1] + add(array, length - 1);
	
	return sum;
}
