#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct company
{
    char name[30];
    char job[30];
    char car[30];
    int salary;
};
void printcompany(struct company *employee);

int main()
{
    struct company Employee;
    strcpy(Employee.name, "Korim");
    strcpy(Employee.job, "Programmer");
    strcpy(Employee.car, "Pajaro");
    Employee.salary=10000;
    printcompany(&Employee);
    return 0;

}
void printcompany(struct company *employee)
{
    printf("Employee name: %s\n",employee->name);
    printf("Employee Job: %s\n",employee->job);
    printf("Employee Car: %s\n",employee->car);
    printf("Employee Salary: %d\n",employee->salary);
}
