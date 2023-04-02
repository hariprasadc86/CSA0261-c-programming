#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct student {
    char name[50];
    int roll_number;
    int birthday_day;
    int birthday_month;
    int birthday_year;
    int admission_day;
    int admission_month;
    int admission_year;
};

int calculate_age(int birth_year, int birth_month, int birth_day, int adm_year, int adm_month, int adm_day) {
    int age = adm_year - birth_year;
    if (adm_month < birth_month || (adm_month == birth_month && adm_day < birth_day)) {
        age--;
    }
    return age;
}

int main() {
    struct student s;
    int age;
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter student roll number: ");
    scanf("%d", &s.roll_number);
    printf("Enter student birthday (day month year): ");
    scanf("%d %d %d", &s.birthday_day, &s.birthday_month, &s.birthday_year);
    printf("Enter student admission date (day month year): ");
    scanf("%d %d %d", &s.admission_day, &s.admission_month, &s.admission_year);
    age = calculate_age(s.birthday_year, s.birthday_month, s.birthday_day, s.admission_year, s.admission_month, s.admission_day);
    printf("\nStudent information:\n");
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll_number);
    printf("Birthday: %d-%d-%d\n", s.birthday_day, s.birthday_month, s.birthday_year);
    printf("Admission date: %d-%d-%d\n", s.admission_day, s.admission_month, s.admission_year);
    printf("Age at the time of admission: %d\n", age);
    
    return 0;
}

