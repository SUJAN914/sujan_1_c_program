#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    int n, i;
    float totalSalary = 0;
    struct Employee employees[100];
printf("Enter the number of employees: ");
    scanf("%d", &n);
printf("Enter the details of %d employees:\n", n);
    for (i = 0; i < n; i++) {
    printf("Employee %d:\n", i + 1);
 printf("Name: ");
scanf("%s", employees[i].name);
printf("ID: ");
scanf("%d", &employees[i].id);
printf("Salary: ");
scanf("%f", &employees[i].salary);
 totalSalary += employees[i].salary;
    }
 float averageSalary = totalSalary / n;
printf("\nAverage salary of employees: %.2f\n", averageSalary);
return 0;
}