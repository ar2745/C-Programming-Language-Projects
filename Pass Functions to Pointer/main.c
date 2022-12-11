#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

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


void timeGenerator(unsigned long *pointer) {
    *pointer = time(NULL);
    return;
    }

    int main() {

        unsigned long seconds;

        timeGenerator(&seconds);

        printf("Time generator in seconds is %ld \n", seconds);

        return 0;
    }

