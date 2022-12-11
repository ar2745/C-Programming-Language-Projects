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

    int main() {

        float baseSalary, weeklySalary, monthlySalary, grossSalary;

        printf("Please enter the hourly rate: ");
        scanf("%f", &baseSalary);

        weeklySalary = baseSalary * 40.00;
        monthlySalary = weeklySalary * 4.00;
        grossSalary = monthlySalary * 12.00;

        printf("Gross salary for the year: %.2f", grossSalary);

        return 0;
    }
