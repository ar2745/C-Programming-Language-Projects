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

    long factorial(int number) {
        int i;
        long answer = 1;

        for(i = 1; i <= number; ++i) {
            answer = answer * i;
        }

        return answer;
    }

    int main() {

        int Number;
        long Factorial = 1;

        printf("Please enter a number to calculate its factorial: ");
        scanf("%d", &Number);

        printf("The factorial for %d: %ld", Number, factorial(Number));

        return 0;
    }
