#include <stdio.h>

int sum(int arr[], int size) {

    int total = 0;
    
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }

    return total;
}

void print_arr(int arr[], int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) 
        printf("%d ", arr[i]);
    printf("]");
}

int main() {
    int matrix[3][3] = {
        {3, 1, 4},
        {4, 7, 3},
        {5, 5, 5}
    };

    int sum_arrs[5];

    for (int i=0; i<3; i++) {
        print_arr(matrix[i], 3);
        sum_arrs[i] = sum(matrix[i], 3);
        printf(" : ");
        printf("%d\n", sum_arrs[i]);
    }

    printf("\nfinal array : ");
    print_arr(sum_arrs, 3);
    printf("\n");

    return 0;    
}
