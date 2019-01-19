#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("You entered : %d\n\n", num);

    char *string;
    string = malloc(256);
    printf("Enter a string : ");
    scanf("%s", string);
    printf("You entered : %s\n\n", string);

    printf("Enter 4 numbers : ");
    float arr[4];
    for (int i = 0; i < 4; i++) {
        scanf("%f", &arr[i]);
    }
    printf("You entered : ");
    for (int i = 0; i < 4; i++) printf("%.2f ", arr[i]);
    printf("\n");

    return 0;
    
}