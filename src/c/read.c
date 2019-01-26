#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc == 2) {
        FILE *fptr;
        char ch;

        fptr = fopen(argv[1], "r");
        if (fptr == NULL) {
            printf("file %s not found\n", argv[1]);
            return 1;
        }
        ch = fgetc(fptr);
        while (ch != EOF) {
            printf("%c", ch);
            ch = fgetc(fptr);
        }
        fclose(fptr);
        printf("\n");
        return 0;
    } else {
        printf("usage: %s <file>\n", argv[0]);
        return 1;
    }
}
