#include <stdio.h>

#define SIZE 5

void bubbleSort(int [], int);
void printArray(int [], int);

int main() {
	int data[SIZE] = {3, 4, 12, 2, 9};
	printArray(data, SIZE);
	bubbleSort(data, SIZE);
	printArray(data, SIZE);
	
	return 0;
}

void bubbleSort(int array[], int length) {
	int temp;
	
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}	
		}
	}
}

void printArray(int array[], int length) {
	for (int i = 0; i < length; i++)
		printf("%d ", array[i]);
	
	puts("");
}
