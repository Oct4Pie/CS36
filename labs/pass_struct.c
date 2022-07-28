#include <stdio.h>

typedef struct {
    int integer;
    float f;
    double d;
    long l;
    long long ll;
} Numbers;

void set_nums(Numbers* numbers) {
    numbers->d = 1.2;
    numbers->f = 1.2;
    numbers->integer = 1;
    numbers->l = 1;
    numbers->ll = 1;
}

int main() {
    Numbers* numbersp;
    Numbers numbers;
    numbersp = &numbers;
    set_nums(numbersp);
    printf("%.2lf %.2f %d %ld %lld\n", numbers.d, numbers.f, numbers.integer, numbers.l, numbers.ll);
    return 0;
}