#include <string>
#include <vector>
#include <iostream>

void print(const char *type, const int size) {
    // i'm using std::cout 
    // just gonna say it - i'm feeling
    // like a professional programmer
    std::cout << "size of " << type << " : " << size << std::endl;
}

int main() {

    int int_arr[] = {2, 3, 1};
    std::vector<int> vec = { 2, 3, 5, 4, 1 };

    print("int", sizeof(int));
    print("char", sizeof(char));
    print("float", sizeof(float));
    print("string", sizeof(std::string));
    print("long int", sizeof(long int));
    
    print("int array with 3 elements", sizeof(int_arr));
    print("int vector array with 5 elements", sizeof(vec));

    return 0;    
}
