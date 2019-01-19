#include <stdio.h>

void display_matrix(int matrix[5][5]) {
    printf("|--------------------------------------------------------------------------------|\n");
    for (int j = 0; j < 5; j++) {
        printf("|");
        for (int i = 0; i < 5; i++) {
            printf("|\t%d\t|", matrix[j][i]);
        }
        printf("|\n");
    }
    printf("|--------------------------------------------------------------------------------|\n");
}

void sum_matrix(int matrix1[5][5], int matrix2[5][5]) {
    printf("|--------------------------------------------------------------------------------|\n");
    for (int j = 0; j < 5; j++) {
        printf("|");
        for (int i = 0; i < 5; i++) {
            printf("|\t%d\t|", matrix1[j][i] + matrix2[j][i]);
        }
        printf("|\n");
    }
    printf("|--------------------------------------------------------------------------------|\n");
}

int main() {

    int matrix1[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    
    int matrix2[5][5] = {
        {4, 2, 1, 3, 5},
        {3, 1, 5, 3, 4},
        {7, 8, 9, 10, 3},
        {9, 3, 0, 7, 6},
        {8, 3, 1, 1, 2}
    };

    display_matrix(matrix1);
    printf("\t\t\t\t\t  +\n");
    display_matrix(matrix2);
    printf("\t\t\t\t\t  |\n");
    printf("\t\t\t\t\t  v\n");
    sum_matrix(matrix1, matrix2);

    return 0;

}
