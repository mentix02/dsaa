#include <iostream>

using namespace std;

void print_array(int arr[], int size) {
	cout << "[ ";
	for (int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << "]";
}

int main() {

	int nums[5];

	for (int i = 0; i < 5; i++) {
		cout << "Enter number for element " << i+1 << " : ";
		cin >> nums[i];
	}

	print_array(nums, 5);
	cout << endl;

	return 0;

}
