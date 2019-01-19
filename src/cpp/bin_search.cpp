#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void print_arr(int arr[], int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << "]" << endl;
}

// return -1 if not found
// return location if found
int binary_search(int arr[], int num, int size);

int main() {

    int *arr;
    int num, size;

    cout << "Enter number of numbers to enter in dataset : ";
    cin >> size;

    arr = new int[size];

    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << "Enter item " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "\nBefore sorting : ";
    print_arr(arr, size);

    sort(arr, arr+size);

    cout << "After sorting  : ";
    print_arr(arr, size);

    cout << endl << "Enter a number to search in dataset : ";
    cin >> num;

    cout << endl;

    int found = binary_search(arr, num, size);

    if ( found != -1 ) {
        cout << "Number " << num << " found at ar[" << found << "]" << endl;
    } else {
        cout << "Number " << num << " not found" << endl;
    }

    delete arr;

    return 0;

}

int binary_search(int arr[], int num, int size) {

    // honestly these first two 
    // lines messed me up so bad  
    // for about an entire hour
    int lower = 0;
    int range = size-1;

    while (lower <= range) {

        int mid = lower + (range - lower) / 2; // mid of the array

        // if by luck we get our number in the middle
        if (arr[mid] == num) {
            return mid;
        }

        if (arr[mid] < num) { 
            lower = mid + 1; // if mid is less than num then the number must be on the higher end (right side)
        } else {
            range = mid - 1; // if mid is more than num then the number must be on the lower end (left side)
        }

    }

    return -1;

}
