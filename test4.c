#include <math.h>
#include <stdio.h>
#include <time.h>

typedef struct person {
    int age;
    int month_of_birth;
    int day_of_birth;
    int year_of_birth;
    char fname[15];
} Person;

Person set_birthday() {
    Person person0;
    printf("Please enter birthday in day/year/month format: ");
    scanf("%d/%d/%d", &person0.day_of_birth, &person0.year_of_birth, &person0.month_of_birth);
    return person0;
}

void setAge(Person* p) {
    long t = time(0);
    struct tm* lt = localtime(&t);
    char ft[20];
    char month[5], year[5], day[5];
    int m, y, d;
    char date[30] = "";

    strftime(month, sizeof(month), "%m", lt);
    strftime(year, sizeof(year), "%Y", lt);
    strftime(day, sizeof(day), "%d", lt);
    sprintf(date, "%s/%s/%s", month, day, year);
    sscanf(date, "%d/%d/%d", &m, &d, &y);
    int age = roundf(((y * 365 + m * 30 + d) - (p->day_of_birth + (p->month_of_birth * 30) + (p->year_of_birth * 365))) / 365);
    p->age = age;
}

Person find_oldest(Person* p, int n) {
    Person oldest = p[0];
    for (int i = 1; i < n; i++) {
        if (p[i].age > oldest.age) {
            oldest = p[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (p[i].age == oldest.age) {
            if ((p[i].year_of_birth * 365 + p[i].month_of_birth * 30 + p[i].day_of_birth) < (oldest.year_of_birth * 365 + oldest.month_of_birth * 30 + oldest.day_of_birth)) {
                oldest = p[i];
            }
        }
    }
    return oldest;
}

int main() {
    Person p = set_birthday();
    printf("%d/%d/%d\n", p.day_of_birth, p.year_of_birth, p.month_of_birth);
    setAge(&p);
    printf("%d", p.age);

    Person people[10];
    for (int i = 0; i < 10; i++) {
        people[i] = set_birthday();
        setAge(&people[i]);
    }
    return 0;
}