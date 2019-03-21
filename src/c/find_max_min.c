#include <stdio.h>
#include <stdlib.h>

int max(int arr[], int size) {
	int largest = arr[0] ? size > 0 : 0;
	for (int i = 0; i < size; i++) {
		if (largest < arr[i]) {
			largest = arr[i];
		}
	}
	return largest;
}

int min(int arr[], int size) {
	int smallest = arr[0] ? size > 0 : 0;
	for (int i = 0; i < size; i++) {
		// smallest = arr[i];
		if (smallest > arr[i]) {
			smallest = arr[i];
		}
	}
	return smallest;
}

int main() {
	int nums;
	int *array;

	printf("Enter size of array : ");
	scanf("%d", &nums);

	// initalize array
	array = (int*) malloc(nums * sizeof(int));
	for (int i = 0; i < nums; i++) {
		printf("Enter array number %d : ", i+1);
		scanf("%d", &array[i]);
	}

	int smallest = min(array, nums), largest = max(array, nums);

	printf("%d is the smallest\n", smallest);
	printf("%d is the largest\n", largest);
	return 0;
}

