#include <stdio.h>

int main() {
    puts("My name is Mehdi Hajmollaahmad Naraghi. I am in course 60000. I have taken:");
    puts("Python programming\nc++ programming\njava programming\nand have done lots of self-learning for other languages\n\n");
    int num0;
    int num1;
    printf("Please enter an int: ");
    scanf("%d", &num0);
    printf("Please enter another int: ");
    scanf("%d", &num1);
    printf("\n\nThe sum is %d.\n", num1+num0);
    printf("The difference is %d.\n", num0-num1);
    printf("The product is %d.\n", num1*num0);
    printf("The quotient is %d.\n", num0/num1);
    return 0;
}