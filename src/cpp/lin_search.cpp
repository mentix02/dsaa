#include <iostream>

using namespace std;

int exists(int arr[], int num, int size) {
	
	for (int i = 0; i < size; i++) {
		if (num == arr[i]) {
			return i;
		}
	}

	return -1;

}

int main() {

	int size;
	cout << "Enter size of array : ";
	cin >> size;

	int *nums;
	nums = new int[size];

	for (int i = 0; i < size; i++) {
		cout << "Enter element " << i+1 << " : ";
		cin >> nums[i];
	}

	int to_find;
	cout << "\nEnter element to search for : ";
	cin >> to_find;

	int exist = exists(nums, to_find, size); // return iterations if successful and -1 if not

	if (exist != -1) {
		cout << "Element `" << to_find << "` found in array [ ";
		for (int i = 0; i < size; i++) cout << nums[i] << " ";
		cout << "] after " << exist << " iterations" << endl;
	} else {
		cout << "Element `" << to_find << "` not found in array [ ";
		for (int i = 0; i < size; i++) cout << nums[i] << " ";
		cout << "] even after " << exist << " iterations" << endl;
	}

	delete nums;

	return 0;

}
