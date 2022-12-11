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

        int xyz[] = {12,13,14,15,16};
        int *pointer, w;

        pointer = &xyz[5-1];

        for(w = 5; w > 0; --w) {
            printf("The address of xyz[%d] = %x \n", w, pointer);
            printf("The values of xyz[%d] = %d \n", w, *pointer);
            printf("\n");
            --pointer;
        }

        return 0;
    }

