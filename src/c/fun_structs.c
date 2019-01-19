#include <stdio.h>
#include <stdlib.h>

struct Pair {
    char *key;
    char *value;
};

int main() {

    char *key, *value;

    int num;
    printf("Enter number of pairs to create : ");
    scanf("%d", &num);

    struct Pair *pairs = NULL;
    pairs = (struct Pair*) malloc(num * sizeof(struct Pair));

    for (int i = 0; i < num; i++) {
        key = malloc(256);
        value = malloc(256);
        printf("Enter key and value for pair %d : ", i+1);
        scanf("%s %s", key, value);
        pairs[i].key = key;
        pairs[i].value = value;
    }

    printf("Pairs entered are - \n");
    for (int i = 0; i < num; i++) {
        printf("%d. %s : %s\n", i+1, pairs[i].key, pairs[i].value);
    }

    free(pairs);
    return 0;
}
