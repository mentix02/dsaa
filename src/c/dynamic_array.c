#include <stdio.h>
#include <stdlib.h>

void print_arr(int arr[], int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main() {

    int nums, *arr;

    printf("Enter number of elements : ");
    scanf("%d", &nums);

    arr = (int*) malloc(sizeof(int) * nums);

    for (int i = 0; i < nums; i++) {
        printf("Enter number for element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Size of dynamic array containing %d elements : %li\n", nums, sizeof(arr));
    printf("Actual array itself : ");
    print_arr(arr, nums);

    free(arr);

    return 0;
    
}
