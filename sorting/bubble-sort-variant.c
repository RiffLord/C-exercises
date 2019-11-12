//	Slightly more efficient bubble sort algorithm

#include <stdio.h>

#define SIZE 5

void printArray(int [], int);
void bubbleSort(int [], int);

int main() {
	int numbers[SIZE] = {3, 4, 12, 2, 9};
	
	printArray(numbers, SIZE);
	bubbleSort(numbers, SIZE);
	printArray(numbers, SIZE);
	
	return 0;
}

void printArray(int array[], int length) {
	for (int i = 0; i < SIZE; i++)
		printf("%d%c", array[i], ' ');
	
	puts("");
}

void bubbleSort(int array[], int length) {
	int p = 0, flag = 0;
	
	while ((p < length - 1) && (flag != 1)) {
		flag = 1;
		
		for (int i = length; i > p; i--) {
			if (array[i] < array[i - 1]) {
				int temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				
				flag = 0;
			}
		}
		
		p++;
	}
}
