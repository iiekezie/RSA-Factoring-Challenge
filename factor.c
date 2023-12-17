#include "factorize.h"
#include <stdio.h>
#include <stdlib.h>

void factorizeFromFile(const char *file_path) {
    FILE *file = fopen(file_path, "r");
    if (!file) {
        fprintf(stderr, "Error: Unable to open file %s\n", file_path);
        exit(EXIT_FAILURE);
    }

    int number;
    while (fscanf(file, "%d", &number) == 1) {
        int factor1, factor2;
        factorize(number, &factor1, &factor2);
        printf("%d=%d*%d\n", number, factor1, factor2);
    }

    fclose(file);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    factorizeFromFile(argv[1]);

    return EXIT_SUCCESS;
}
