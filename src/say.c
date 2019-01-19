#include <stdio.h>

int main(int argc, char *argv[]) {

    if (argc < 2) {
        printf("usage : %s <words>\n", argv[0]);
        return 1;
    }

    for (int index = 1; index < argc; index++) {
        printf("%s ", argv[index]);
    }

    printf("\n");

    return 0;

}