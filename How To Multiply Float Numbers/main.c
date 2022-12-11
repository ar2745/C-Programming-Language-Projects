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

        double num1, num2, result;

        printf("Enter your first number in decimal form: ");
        scanf("%lf", &num1);

        printf("Enter your second number in decimal form: ");
        scanf("%lf", &num2);

        result = num1 * num2;

        printf("The result of the two numbers: %.2lf & %.2lf is %.2lf", num1, num2, result);

        return 0;
    }
