#include <stdio.h>
#include <stdlib.h>

int min(int arr[], const int size) {

	int pos = 0;
	int smallest = arr[0];

	for (int i = 0; i < size; i++) {
		if (smallest >= arr[i]) {
			pos = i;
			smallest = arr[i];
		}
	}

	return pos;

}

int max(int arr[], const int size) {
	int largest = arr[0];

	for (int i = 0; i < size; i++) {
		if (largest <= arr[i]) {
			largest = arr[i];
		}
	}

	return largest;
}

void print_array(int arr[], const int size) {

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

}

void copy_sort(int arr[], const int size) {

	int *temp;
	int smallest, smallest_pos;
	temp = malloc(size * sizeof(int));

	for (int i = 0; i < size; i++) {
		smallest_pos = min(arr, size);
		smallest = arr[smallest_pos];

		temp[i] = smallest;
		arr[smallest_pos] = max(arr, size) + 1;
	}

	for (int i = 0; i < size; i++) {
		arr[i] = temp[i];
	}

	free(temp);

}

int main() {

	// man, I'm getting good at C but this is
	// probably the worst implementation of this type
	// of sort... I don't even remember the name of it.

	int arr[] = {4, 3, 10, 6, 3};

	printf("array before sorting : ");
	print_array(arr, 5);

	copy_sort(arr, 5);

	printf("array after sorting : ");
	print_array(arr, 5);

	return 0;
}
