#include <stdio.h>

int get_input(int value) {
    int guess;
    printf("Guess the number: ");
    scanf("%d", &guess);
    return guess > value ? 1 : guess == value ? 0: -1;
}

int main() {
    printf("The result is %d\n", get_input(5));
    return 0;
}

// Guess the number: 2
// The result is -1
// Guess the number: 5
// The result is 0
// Guess the number: 9
// The result is 1
