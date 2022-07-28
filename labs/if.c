#include <stdio.h>

int main() {
    int in_int;
    scanf("%d", &in_int);
    if (in_int > 10) {
        printf("Large\n");
    } else if (in_int < 0) {
        printf("Negative\n");
    } else {
        printf("Less than 11 and positive\n");
    }
}