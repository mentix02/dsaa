#include <stdio.h>

void print_array(int m[5][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int matrix[5][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};

	int second[5][5] = {
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0,},
		{0, 0, 0, 0, 0,},
		{0, 0, 0, 0, 0,},
		{0, 0, 0, 0, 0,}
	};

	printf("before transpose - \n");
	print_array(matrix);

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			second[i][j] = matrix[j][i];
		}
	}

	printf("after transpose - \n");
	print_array(second);

	return 0;

}
