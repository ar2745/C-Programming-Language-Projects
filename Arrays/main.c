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

        int x;
        int y;
        int z[5];

        for(x = 0; x <= 5; ++x) {
            z[x] = x + 10;
        }

        for(y = 0; y <= 5; ++y) {
            printf("Index [%d] = %d \n", y, z[y]);
        }

        return 0;

    }

