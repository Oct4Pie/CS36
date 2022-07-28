#include <stdio.h>

int main() {
    int *r;
    int s = 2;
    r = &s;
    int *p = (int *)0x16d86306c;
    *r = 3;
    printf("%d",*r);
    // printf("%d",*p);
    int i = 0x16d86306c;
    printf("%d", i);
    return 0;
}