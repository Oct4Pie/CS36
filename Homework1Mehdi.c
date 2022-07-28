#include <stdio.h>

int main() {
    float hourly_rate;
    float hours_worked;
    float gross_pay;
    float tax;
    float net;
    int num_people = 5;
    char name[30];

    for (int i = 0; i < num_people; i++) {
        printf("Please enter employee %d name: ", i + 1);
        scanf("%s", name);

        printf("Please enter employee %d hourly rate: ", i + 1);
        scanf("%f", &hourly_rate);

        printf("Please enter employee %d hours worked: ", i + 1);
        scanf("%f", &hours_worked);

        gross_pay = hourly_rate * hours_worked;
        if (hours_worked > 40) {
            gross_pay += hourly_rate * 1.5 * (hours_worked - 40);
            gross_pay -= (hours_worked - 40) * hourly_rate; // do not count regular rate 40+ hours
        }

        tax = gross_pay * 0.2;
        net = gross_pay - tax;

        printf("\nEmployee name: %s\n", name);
        printf("Hourly rate: $%.2f\n", hourly_rate);
        printf("Hours worked: $%.2f\n", hours_worked);
        printf("Gross paid: $%.2f\n", gross_pay);
        printf("Taxed: $%.2f\n", tax);
        printf("Take home: $%.2f\n", net);
        printf("\n");
    }

    return 0;
}

// Please enter employee 1 name: Jack
// Please enter employee 1 hourly rate: 4.58
// Please enter employee 1 hours worked: 23.5

// Employee name: Jack
// Hourly rate: $4.58
// Hours worked: $23.50
// Gross paid: $107.63
// Taxed: $21.53
// Take home: $86.10

// Please enter employee 2 name: Ruth
// Please enter employee 2 hourly rate: 42.5
// Please enter employee 2 hours worked: 54  

// Employee name: Ruth
// Hourly rate: $42.50
// Hours worked: $54.00
// Gross paid: $2592.50
// Taxed: $518.50
// Take home: $2074.00