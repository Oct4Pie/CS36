#include <stdio.h>
#include <string.h>
#define MAX_CHARS 256

int main() {
    char filename[50] = "";
    printf("Enter a file name to write to: ");
    scanf("%s", filename);
    FILE* file = fopen(filename, "w");

    char* text = NULL;
    printf("Enter content to write to file\nEnter 0 to exit\n\n");
    scanf("\n");
    size_t length = MAX_CHARS;
    while (1) {
        getline(&text, &length, stdin);
        if (strcmp(text, "0\n") == 0) {
            break;
        }
        fwrite(text, 1, strlen(text), file);
    }

    fclose(file);

    return 0;
}