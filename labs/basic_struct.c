#include <stdio.h>

struct Float {
    float inp0;
    float inp1;
    float inp2;
    float avg;
} floats;

int main() {
    struct Float float0;
    printf("Please enter a float: ");
    scanf("%f", &float0.inp0);
    printf("Please enter another float: ");
    scanf("%f", &float0.inp1);
    printf("Please enter another float: ");
    scanf("%f", &float0.inp2);
    float0.avg = (float0.inp0 + float0.inp1 + float0.inp2) / 3;
    printf("Average is %.2f\n", float0.avg);
    return 0;
}