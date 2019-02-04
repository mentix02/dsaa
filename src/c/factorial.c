#include <stdio.h>

int main() {
    int number;

    unsigned long long factorial = 1;

    printf("Enter an integer : ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Enter a number above 0.\n");
        return 1;
    }

    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    printf("%d! = %llu\n", number, factorial);
    
    return 0;    
}
