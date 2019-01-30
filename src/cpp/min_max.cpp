#include <iostream>

using namespace std;

int min(int arr[], int size) {

	int smallest = arr[0];

	for (int i = 0; i < size; i++) {
		if (smallest >= arr[i]) {
			smallest = arr[i];
		}
	}

	return smallest;

}

int maximum(int arr[], int size) {

	int largest = arr[0];

	for (int i = 0; i < size; i++) { // for some reason, I can't use the range for loop here
		if (largest <= arr[i]) {     // I don't know why. Tried to run it inside the main() 
			largest = arr[i];        // function and it works. Need to look into it more
		}
	}

	return largest;

}

int main() {

	int arr[] = {4, 3, 4, 10, 2, 1, 6, -1};

	cout << "minium of array is " << min(arr, 8) << endl;

	cout << "maximum of array is " << maximum(arr, 8) << endl;

	return 0;

}
