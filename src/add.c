// program could be better 
// by just adding value to 
// only one variable `sum`
// and adding printing it
// but this program is for me
// to understand `malloc()`
#include <stdio.h>
#include <stdlib.h>

void print_arr(int arr[], int size) {
    printf("[");
    for (int j = 0; j < size; j++) {
        printf("%d ", arr[j]);
    }
    printf("]");
}

int add(int nums[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += nums[i];
    }

    return sum;
}

int main() {
    // get size input
    int size;
    printf("enter number of terms to add : ");
    scanf("%d", &size);

    // intialise dynamic array
    int *nums;
    nums = (int*) malloc(size * sizeof(int));

    // check for NULL
    if (nums == NULL) {
        printf("memory error\n");
        return 1;
    }

    for (int i=0; i<size; i++) {
        printf("enter element %d : ", i+1);
        scanf("%d", &nums[i]);
    }

    printf("sum of numbers ");
    print_arr(nums, size);
    printf(" is %d\n", add(nums, size));
    
}
