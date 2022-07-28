#include <stdio.h>

void calc(float hourly_rate, float hours_worked, float* tax, float* net, float* gross, float* over_work) {
    float gross_pay = hourly_rate * hours_worked;
    if (hours_worked > 40) {
        *over_work = hourly_rate * 1.5 * (hours_worked - 40);
        gross_pay += *over_work;
        gross_pay -= (hours_worked - 40) * hourly_rate;  // do not count regular rate 40+ hours
    }
    *gross = gross_pay;
    *tax = gross_pay * 0.2;
    *net = gross_pay - *tax;
}

int main() {
    int num_employees = 5;
    int num_entered = 0;
    char names[num_employees][15];
    float hourly_rates[num_employees];
    float hours_worked[num_employees];
    float taxes[num_employees];
    float nets[num_employees];
    float gross[num_employees];
    float over_works[num_employees];

    for (int i = 0; i < num_employees; i++) {
        printf("Please enter employee %d's name: ", i + 1);
        scanf("%s", names[i]);
        if (names[i][0] == '-' && names[i][1] == '1' && names[i][2] == 0) {
            break;
        }
        printf("Please enter employee %d's hourly rate: ", i + 1);
        scanf("%f", hourly_rates + i);
        if (hourly_rates[i] == -1.0) {
            break;
        }
        printf("Please enter employee %d's hours worked: ", i + 1);
        scanf("%f", hours_worked + i);
        if (hours_worked[i] == -1.0) {
            break;
        }
        calc(hourly_rates[i], hours_worked[i], taxes + i, nets + i, gross + i, over_works + i);
        num_entered++;
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < num_entered; i++) {
        printf("Pay to %s:\n", names[i]);
        printf("Hours worked: %.2f\n", hours_worked[i]);
        printf("Hourly rate: %.2f $/hr\n", hourly_rates[i]);
        printf("Gross pay: $%.2f\n", gross[i]);
        printf("Base pay: $%.2f\n", gross[i] - over_works[i]);
        printf("Overtime pay: $%.2f\n", over_works[i]);
        printf("Taxes paid: $%.2f\n", taxes[i]);
        printf("Net pay: $%.2f\n", nets[i]);
        printf("\n");
    }

    return 0;
}

/*
Please enter employee 1's name: Glenn
Please enter employee 1's hourly rate: 2.00
Please enter employee 1's hours worked: 50

Please enter employee 2's name: Stephanie
Please enter employee 2's hourly rate: 25.0
Please enter employee 2's hours worked: 50

Please enter employee 3's name: -1

Pay to Glenn:
Hours worked: 50.00
Hourly rate: 2.00 $/hr
Gross pay: $110.00
Base pay: $80.00
Overtime pay: $30.00
Taxes paid: $22.00
Net pay: $88.00

Pay to Stephanie:
Hours worked: 50.00
Hourly rate: 25.00 $/hr
Gross pay: $1375.00
Base pay: $1000.00
Overtime pay: $375.00
Taxes paid: $275.00
Net pay: $1100.00

*/