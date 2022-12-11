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
    */

    int max(num1, num2) {
        int output;
        if(num1 > num2)
            output = num1;
        else
            output = num2;

        return output;
    }

    int main() {

        int x = 50;
        int y = 70;
        int out;

        out = max(x, y);

        printf("The maximum number is %d \n", out);

        return 0;

    }

