#include <stdio.h>

void q20() {
    /* 1. Print your name.
     2. Declare an int.
     3. Ask the user for a number.
     4. Load that number into your int.
     5. Print that int. */

    printf("Mehdi Hajmollaahmad Naraghi\n");
    int integer;
    printf("Please enter a number: ");
    scanf("%d", &integer);
    printf("You entered: %d\n", integer);
}

void q21() {
    /* 1. Declare a float.
    2. Ask the user for their favorite number.
    3. Load that number into the float.
    4. If that number is negative, print out a message about that.
    5. If the number is 0 through 100, print a different message.
    6. Otherwise, print out that it is a big number.
    } */
    float num;
    printf("Please enter your favorite number: ");
    scanf("%f", &num);

    if (num < 0) {
        printf("A negative favorite number is an interesting one\n");
    }

    else if (num <= 100 && num >= 0) {
        printf("Your favorite number is in range 0-100\n");
    }

    else {
        printf("That seems to be a big number\n");
    }
}

int main() {
    q20();
    int var1 = 2;
int var2 = 4;
var1 = var1 > var2 ? 0 : 7;
    return 0;
}
