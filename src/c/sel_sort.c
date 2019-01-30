#include <stdio.h>

// google hire me now

void swap(int *xp, int *yp);
void sel_sort(int arr[], int size);
void print_array(int arr[], const int size);
int min_position(int arr[], int size, int start);

int main() {

	int arr[5];
	printf("Enter 5 numbers seperated by a space : ");
	for (int i = 0; i < 5; i++) scanf("%d", &arr[i]);

	printf("Array before sorting : "); print_array(arr, 5);

	sel_sort(arr, 5);

	printf("Array after sorting : "); print_array(arr, 5);

}

void swap(int *xp, int *yp) {
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}

void sel_sort(int arr[], int size) {
	int min_pos;

	for (int i = 0; i < size - 1; i++) {
		min_pos = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[min_pos]) {
				min_pos = j;
			}
		}
		swap(&arr[min_pos], &arr[i]);
	}
}


void print_array(int arr[], const int size) {

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

}

// not needed
int min_position(int arr[], int size, int start) {

	int pos = 0;
	int smallest = arr[0];

	for (int i = start; i < size; i++) {
		if (smallest >= arr[i]) {
			pos = i;
			smallest = arr[i];
		}
	}

	return pos;

}
