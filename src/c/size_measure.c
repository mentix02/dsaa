#include <stdio.h>

struct Person {
    int age;
    char *name;
    char *gender;
};

int main() {
    struct Person p1 = {17, "manana", "male"};
    printf("struct size : %lu\n", sizeof(struct Person));
    printf("struct variable size : %lu\n", sizeof(p1));
    return 0;
}
