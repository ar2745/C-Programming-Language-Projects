#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*The author of this code is Andrew Robinson
    Date:12/24/21
    This is for education
    GitHub ID

    %s = string ""
    %d = integer
    %f = float

    Arithmetic Operators

    Addition +
    Subtraction -
    Division /
    Modulus %
    Increment ++
    Dependent --

    Relational Operators

    ==, !=, >, <, >=, <=


    if(x < y)

        printf("x is less than y \n");

    else

        printf("x is not less than y");


    Logical Operators

    And Operator &&
    Or Operator ||
    Not Operator !

    String Functions

    strcpy
    strcat
    strlen
    strcmp
    strchr
    strstr
    */


    struct company {

        char name[30];
        char job[30];
        char car[30];
        int salary;
    };

    void printcompanies(struct company *employee);

    int main() {

        struct company Employee;

        strcpy(Employee.name, "Andrew Robinson");
        strcpy(Employee.job, "Programmer");
        strcpy(Employee.car, "Ferrari");
        Employee.salary = 120000;

        printcompanies(&Employee);

        return 0;
    }

    void printcompanies(struct company * employee) {

        printf("Employee name: %s \n", employee->name);
        printf("Employee job: %s \n", employee->job);
        printf("Employee car: %s \n", employee->car);
        printf("Employee salary: %d \n", employee->salary);
    }
