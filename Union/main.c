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

    union Set{
        int x;
        float y;
        char str[10];
    };

    int main() {

        union Set type;

        type.x = 10;
        type.y = 2.5;
        strcpy(type.str, " Hello World");

        printf("type.x is %d \n", type.x);
        printf("type.y is %f \n", type.y);
        printf("type.str is %s \n", type.str);

        return 0;
    }
