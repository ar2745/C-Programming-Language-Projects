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

    int main() {

        int xyz, *pointer1, **pointer2;
        xyz = 10;

        pointer1 = &xyz;
        pointer2 = &pointer1;

        printf("The value of xyz = %d \n", xyz);
        printf("The value of pointer 1 = %d \n", *pointer1);
        printf("The value of pointer 2 = %d \n", **pointer2);

        return 0;
    }

