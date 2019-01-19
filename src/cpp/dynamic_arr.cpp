#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int input(const string prompt) {
    int input;
    cout << prompt;
    cin >> input;
    return input;
}

void print_arr(const int arr[], int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << "]";
}

int main() {

    int size = input("Enter size for array : ");

    int *nums;
    nums = new int[size]; // allocate `size` * 4

    for (int i = 0; i < size; i++) {
        ostringstream prompt;
        prompt << "Enter element " << i+1 << " : ";
        nums[i] = input(prompt.str());
    }

    cout << "You entered : ";
    print_arr(nums, size);
    cout << endl;

    delete nums; // deallocate memory
    
}
