#include <stdio.h>

int main() {
    char c;
    printf("Please enter an English character: ");
    scanf("%c", &c);
    switch (c) {
        case 'a': case 'e':
        case 'o': case 'i':
        case 'u':
            printf("Vowel\n");
            break;
        case 'y':
            printf("Sometimes\n");
            break;

        default:
            printf("Consonant\n");
    }
}