#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    if (argc != 2) {
        cout << "usage: " << argv[0] << " <number>" << endl;
        return 1;
    } else {

        const int n = atoi(argv[1]);

        int t1 = 0, t2 = 1, nextTerm = 0;

        cout << "series : " << t1 << " " << t2 << " ";

        nextTerm = t1 + t2;

        while (nextTerm <= n) {

            cout << nextTerm << " ";
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
            
        }

        return 0;
        
    }

}
