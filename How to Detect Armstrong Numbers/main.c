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
    strrev
    */

    int main() {

        int x, y = 0, z, remainder;

        printf("Please enter some numbers without spaces: ");
        scanf("%d", &x);

        z = x;

        while(z != 0){
            remainder = z % 10;
            y = y + remainder * remainder * remainder;
            z = z / 10;
        }

        if(x == y){
            printf("This number is an Armstrong number");
        }
        else {
            printf("This is not an Armstrong number");
        }

        return 0;
    }
