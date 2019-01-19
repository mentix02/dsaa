#include <iostream>
using namespace std;

int main() {

    int nums[3];
    int *a1 = &nums[0];
    int *a2 = &nums[1];
    int *a3 = &nums[2];

    cout << "a1 is at " << a1 << endl;
    cout << "a2 is at " << a2 << endl;
    cout << "a3 is at " << a3 << endl;

    a1 += 2;

    cout << "a1 is now at " << a1 << endl;

    return 0;
    
}
