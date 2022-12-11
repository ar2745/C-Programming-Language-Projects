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

        int remainder;
        long x = 0, y, z = 0, w;

        printf("Please enter the number you would like to print all Armstrong numbers up to: ");
        scanf("%ld", &x);

        printf("The list of Armstrong numbers up to %ld: \n", x);

        for(y = 1; y <= x; ++y){
            w = y;
            while(w != 0){
                remainder = w % 10;
                z = z + remainder * remainder * remainder;
                w = w / 10;
            }

            if(y == z)
                printf("%ld\n", y);

            z = 0;
        }

        return 0;
    }
