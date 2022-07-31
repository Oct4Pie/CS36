#define MAX_EMPLOYEES 5
#include <stdio.h>

typedef struct {
    char name[20];
    float hourly_rate;
    float hours_worked;
    float tax;
    float net;
    float gross;
    float over_work;
} Employee;

int menu() {
    int choice;
    puts("\nMain Menu");
    puts("1. Add Employee");
    puts("2. Edit Employee");
    puts("3. Print Employee");
    puts("4. Print All Employes");
    puts("5. Quit");
    scanf("%d", &choice);

    return choice;
}

void calc_all(Employee* employee) {
    float gross_pay = employee->hourly_rate * employee->hours_worked;
    if (employee->hours_worked > 40) {
        employee->over_work = employee->hourly_rate * 1.5 * (employee->hours_worked - 40);
        gross_pay += employee->over_work;
        gross_pay -= (employee->hours_worked - 40) * employee->hourly_rate;  // do not count regular rate 40+ hours
    }
    if (employee->over_work > 0 && employee->hours_worked < 40) {
        employee->over_work = 0;
    }
    employee->gross = gross_pay;
    employee->tax = employee->gross * 0.2;
    employee->net = employee->gross - employee->tax;
}

void add_employee(int* index_p, Employee* employees) {
    if (*index_p == MAX_EMPLOYEES) {
        printf("Cannot create more than %d employees\n", MAX_EMPLOYEES);
        return;
    }
    printf("Name: ");
    scanf("%s", employees[*index_p].name);
    printf("Hours worked: ");
    scanf("%f", &employees[*index_p].hours_worked);
    printf("Hourly rate: ");
    scanf("%f", &employees[*index_p].hourly_rate);
    calc_all(employees + *index_p);
    (*index_p)++;
}

int get_index(int index, Employee* employees) {
    int choice;
    do {
        puts("Choose an employee:");
        for (int i = 0; i < index; i++) {
            printf("%d. %s\n", (i + 1), employees[i].name);
        }
        scanf("%d", &choice);
    } while (choice > (index + 1) || choice < 1);

    choice--;
    return choice;
}

void edit_employee(int index, Employee* employees) {
    int choice = get_index(index, employees);
    add_employee(&choice, employees);
}

void print_an_employee(int index, Employee* employees) {
    Employee employee = employees[index];
    printf(
        "Employee name (number %d): %s\n\tRate: %.2f $/hr\n\tHours: %.2f\n", index + 1,
        employee.name, employee.hourly_rate, employee.hours_worked);
    printf(
        "\tTax: $%.2f\n\tNet: $%.2f\n\tGross: $%.2f\n\tOverwork: $%.2f\n",
        employee.tax, employee.net, employee.gross, employee.over_work);
}

void print_employee(int index, Employee* employees) {
    int choice = get_index(index, employees);
    print_an_employee(choice, employees);
}

void print_employees(int index, Employee* employees) {
    for (int i = 0; i < index; i++) {
        print_an_employee(i, employees);
        printf("\n");
    }
}

int main() {
    Employee employees[MAX_EMPLOYEES];
    int index = 0;
    while (1) {
        int choice = menu();
        switch (choice) {
            case 1:
                add_employee(&index, employees);
                break;
            case 2:
                if (index != 0)
                    edit_employee(index, employees);
                break;
            case 3:
                print_employee(index, employees);
                break;
            case 4:
                print_employees(index, employees);
                break;
            case 5:
                return -1;
            default:
                break;
        }
    }
    return 0;
}
