#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    /*The author of this code is Andrew Robinson
    Date:12/24/21
    This is for education
    GitHub ID */

    /*
    %s = string ""
    %d = integer
    %f = float
    */

    /*
    Arithmetic Operators
    Addition +
    Subtraction -
    Division /
    Modulus %
    Increment ++
    Dependent --
    */

    /*
    Relational Operators
    ==, !=, >, <, >=, <=
    */

    /*
    if(x < y)

        printf("x is less than y \n");

    else

        printf("x is not less than y");
    */

    /*
    Logical Operators

    And Operator &&
    Or Operator ||
    Not Operator !
    */

    char level = '4';

    switch(level)
    {
    case '1':
        printf("You are a first year student \n");
        break;
    case '2':
        printf("You are a second year student \n");
        break;
    case '3':
        printf("You are a third year student \n");
        break;
    case '4':
        printf("You are fourth year student \n");
        break;
    default:
        printf("You are not a student \n");
    }
    printf("You're level is %c00 \n", level);
    return 0;
}


