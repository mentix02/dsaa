#include <stdio.h>
#include <stdlib.h>

int input(const char *prompt) {
    int num; // number to return

    printf("%s", prompt); // display prompt
    scanf("%d", &num); // get number

    return num;
}

void print_arr(int arr[], int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main() {

    int nums, *arr;
    char *prompt = "";

    printf("Enter number of elementes : ");
    scanf("%d", &nums);

    arr = (int*) malloc(sizeof(int) * nums);

    for (int i = 0; i < nums; i++) {
        sprintf(prompt, "Enter number for element %d : ", i);
        arr[i] = input(prompt);
    }

    printf("Size of dynamic array containing %d elements : %li\n", nums, sizeof(arr));
    printf("Actual array itself : ");
    print_arr(arr, nums);

    free(arr);

    return 0;
    
}
