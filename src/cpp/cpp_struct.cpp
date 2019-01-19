#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p1 = {2, 3};
    cout << p1.x << " " << p1.y << endl;
    return 0;
}
