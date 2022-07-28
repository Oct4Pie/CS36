#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ptr() {
    float f;
    float* fp = &f;
    printf("stored at: %p; value: %f\n", fp, f);
    *fp = 3;
    printf("stored at: %p; value: %f\n", fp, f);
    float* fp1 = (float*)0x16b3c720c;
}

void m() {
    void* mem = malloc(10);
    printf("malloc at: %p\n", mem);
    int* i_mem = (int*)mem;
    printf("malloc at: %p has value %d\n", i_mem, *i_mem);
    *i_mem = 5;
    printf("malloc at: %p has value %d\n", i_mem, *i_mem);
}
int get_array_len(int* arr) {
    int len = 0;
    while (1) {
        if (arr[len] == __INT_MAX__) {
            break;
        }
        len++;
    }

    return len;
}

void m_array() {
    int size = 10;
    int* mem = malloc(sizeof(int) * (size + 1));
    for (int i = 0; i < size; i++) {
        mem[i] = i * i;
    }
    mem[size + 1] = __INT_MAX__;
}

void user_input() {
    char name[20];
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Your name is %s and is stored at %p\n", name, &name);
    printf("%p, %p", name, &name[1]);
}

void chars() {
    char name[20] = "myname";
    printf("name ptr: %p, name[0] ptr: %p", name, &name[0]);
}

void op() {
    int x = 5;
    int y = x;
    x = 3;
    printf("x=%d, y=%d\n", x, y);
    printf("x++=%d, y++=%d\n", x++, y++);
    printf("++x=%d, ++y=%d\n", ++x, ++y);
    printf("%d", 9 / 2);
}

void looping() {
    int i = 0;
    // executes then checks condition
    do {
        printf("%d, ", i);
        ++i;
    } while (i != 10);

    i = 0;
    puts("");

    while (i != 10) {
        printf("%d, ", i);
        ++i;
    }

    int x = 1;
    switch (x) {
        case 1:
            printf("1");
        case 2:
            printf("2");
        default:
            printf("3");
    }
}

void switching() {
    char c = ' ';
    switch (c) {
        case 115:
            puts("s");
            break;
        case 83:
            printf("S\n");
            break;
        case 32:
            printf("space\n");
            break;
        default:
            printf("Unknown\n");
    }

    char* os = "win32";

    // switch (*os) {
    //     case ((const char*) "win32"):
    //         puts("win32");
    //         break;
    // }
}

void arrays() {
    int size = 5;
    int(*array)[size];
    // {{int, int, int, int, int}}

    // for (int i=0; i<size; i++) {
    //     array[i] = i;
    // }

    // for (int i=0; i<size; i++) {
    //     printf("%d,", array[i]);
    // }
}

int prompt() {
    int repeat = 0;
    char* name = NULL;
    int rate;
    int hrsWorked;
    size_t length = 0;

    do {
        printf("Enter name: ");
        getline(&name, &length, stdin);
        printf("Enter hourly rate: ");
        scanf("%d", &rate);

        printf("Enter hours worked: ");
        scanf("%d", &hrsWorked);
        repeat++;
    } while (repeat < 5);

    return 0;
}

#define area(x) (x * x)
#define msg() ("Hi")

typedef struct book {
    char title[20];
    int pages;
} Book;

int min_pages(Book (*books)[10]) {
    int min = 0;
    int length = sizeof(*books) / sizeof(**books);
    for (int i = 0; i < length; i++) {
        if (books[i]->pages < min) {
            min = books[i]->pages;
        }
    }
    return min;
}

void Example()
{
  static int x = area(4); 
  printf("%d\n", x++);
}


struct f {
    static int r;
};


/**
 * @brief it is just such a dead function
 *
 * @return int
 */
int main() {
    Book books[10];
    int min = min_pages(&books);
    int x = 0;
    Example();
    printf("x is: %d\n", x);
    // int num[10][15];
    // int(*nump)[15] = num;
    // int(*numpp)[10][15] = &num;
    // int i = ***numpp;
    // int* ip = **numpp;
    return 0;
}
