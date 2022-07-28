#include <stdio.h>

int main() {
    float pos_num;
    float neg_num;

    printf("Please enter a positive number: ");
    scanf("%f", &pos_num);

    while (pos_num <= 0) {
        printf("Please enter a positive number: ");
        scanf("%f", &pos_num);
    }

    printf("\n");

    printf("Please enter a negative number: ");
    scanf("%f", &neg_num);

    while (neg_num >= 0) {
        printf("Please enter a negative number: ");
        scanf("%f", &neg_num);
    }

    for (int i = neg_num; i <= pos_num; i++) {
        if (i != 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}