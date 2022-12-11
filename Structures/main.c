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
    char name[100];
    char occupation[100];
    char company_name[100];
    int age;
    int salary;
};

    int main() {

        struct company employee;

        strcpy(employee.name, "Peter");
        strcpy(employee.occupation, "Programmer");
        strcpy(employee.company_name, "LPI");
        employee.age = 31;
        employee.salary = 2000;

        printf("The name of the employee is %s \n", employee.name);
        printf("The occupation of the employee is %s \n", employee.occupation);
        printf("The name of the employees company is %s \n", employee.company_name);
        printf("The age of the employee is %d \n", employee.age);
        printf("The salary of the employee is %d \n", employee.salary);

        return 0;
    }
