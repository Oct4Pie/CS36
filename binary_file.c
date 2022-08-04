#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *bf = fopen("bin.txt", "wb");
    int num = 1234567;
    printf("%llu", 18446744073709551615);
    fwrite(&num, sizeof(int), 1, bf);
    fclose(bf);
    // fprintf(bf, "%d", num);
    return 0;
}
