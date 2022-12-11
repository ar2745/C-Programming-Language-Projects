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

        int num1, num2, remainder, result;

        printf("Enter your first number: ");
        scanf("%d", &num1);

        printf("Enter your second number: ");
        scanf("%d", &num2);

        result = num1 / num2;
        remainder = num1 % num2;

        printf("The quotient of the two numbers is %d \nThe remainder of the two numbers is %d", result, remainder);

        return 0;
    }
