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

    typedef struct company {
        char name[20];
        char job[20];
        char car[20];
        int salary;
    }

    Comp;

    int main() {

        Comp employee;
        strcpy(employee.name, "Tony Stark");
        strcpy(employee.job, "Billionaire");
        strcpy(employee.car, "Audi R8");
        employee.salary = 7000000;

        printf("Employee name: %s \n", employee.name);
        printf("Employee job: %s \n", employee.job);
        printf("Employee car: %s \n", employee.car);
        printf("Employee salary: %d \n", employee.salary);

        return 0;
    }
