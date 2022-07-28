#include <stdio.h>

int main() {
    int a, b;
    printf("Please enter an int: ");
    scanf("%d", &a);
    do {
        printf("Please enter another int: ");
        scanf("%d", &b);
    } while (a < b);
    return 0;
}