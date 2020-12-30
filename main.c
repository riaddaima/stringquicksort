#include <stdio.h>
#include <string.h>
#include "header.h"

int main() {
    char names[WORDS_LIMIT][CHARACTERS_LIMIT];
    char name[CHARACTERS_LIMIT];
    int num_names = 0, i;
    while (1) {
        scanf("%s", name);
        if (strcmp(name, "stop") != 0) {
            strcpy(names[num_names++], name);
        } else {
            break;
        }

    }
    stringqsort(names, 0, num_names-1);
    printf("---SORTED---\n");
    for (i = 0; i < num_names; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}