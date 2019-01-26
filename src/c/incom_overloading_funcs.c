#include <stdio.h>

int print(const int num);
int print(const char *txt);

int main() {

    printf("number : ");
    print(3518);

    printf("string : ");
    print("hello world");
    
    return 0;
}

int print(const int num) {
    return printf("%d\n", num);
}

int print(const char *txt) {
    return printf("%s\n", txt);
}
