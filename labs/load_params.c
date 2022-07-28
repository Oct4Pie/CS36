#include <stdio.h>


char load_params(int *num1, int *num2) {
    char char0;
    printf("Please enter a number: ");
    scanf("%d", num1);
    printf("Please enter another number: ");
    scanf("%d", num2);
    printf("Please enter a char: ");
    scanf(" %c", &char0);
    return char0;
}

int main() {
    int num1, num2;
    char character = load_params(&num1, &num2);
    printf("num1: %d, num2: %d, char: %c\n", num1, num2, character);
    return 0;
}