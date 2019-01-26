#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    if (argc == 2) {
        ifstream file(argv[1]);
        if (file.is_open()) {
            string line;
            while ( getline(file, line) ) {
                cout << line << '\n';
            }
            file.close();
            return 0;
        } else {
            cout << "file " << argv[1] << " not found" << endl;
            return 1;
        }
    } else {
        cout << "usage: " << argv[0] << " <file>" << endl;
        return 1;
    }
    
}
