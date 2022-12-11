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

    int randomGenerator() {
        static int random[5];
        int x;

        srand((unsigned) time(NULL));

        for(x = 0; x < 5; ++x) {
            random[x] = rand();
            printf("The value of the number is %d \n", random[x]);
        }
        return random;
    }
    int main() {

        int x;
        int *pointer;

        pointer = randomGenerator();

        for(x = 0; x < 5; ++x) {
            printf("The returned values of the array is [%d] is %d \n", x, *(pointer + x));
        }
        return 0;
    }

