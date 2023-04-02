#include <stdio.h>
#define MAX_EMPLOYEES 50
struct Employee {
    int eno;
    char ename[50];
    float salary;
};
int main() {
    int n, i;
    struct Employee employees[MAX_EMPLOYEES], max_salary_employee;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i+1);
        printf("Employee number: ");
        scanf("%d", &employees[i].eno);
        printf("Employee name: ");
        scanf("%s", employees[i].ename);
        printf("Employee salary: ");
        scanf("%f", &employees[i].salary);
    }
    max_salary_employee = employees[0];
    for(i = 1; i < n; i++) {
        if(employees[i].salary > max_salary_employee.salary) {
            max_salary_employee = employees[i];
        }
    }
    printf("\nEmployee with highest salary:\n");
    printf("Employee number: %d\n", max_salary_employee.eno);
    printf("Employee name: %s\n", max_salary_employee.ename);
    printf("Employee salary: %0.2f\n", max_salary_employee.salary);

    return 0;
}

