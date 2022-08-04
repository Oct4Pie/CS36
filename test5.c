#include <stdio.h>

int can_open(char* chars) {
    FILE* file = fopen(chars, "r");

    if (!file) {
        return 1;
    }
    return 0;
}

void write_int(FILE* file, int* array, int size) {
    for (int i = 0; i < size; i++) {
        fprintf(file, "%d\n", array[i]);
    }
}

int main() {
    printf("%d", can_open("pp.c"));
    int ints[10] = {0, 1, 2, 3, 8, 5, 6, 9};
    FILE* file = fopen("ints.txt", "w+");
    write_int(file, ints, sizeof(ints) / sizeof(int));
    return 0;
}
