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

    int main() {

        int a, b = 0, c = 1, d, e;

        printf("Please enter an integer for the range of numbers you want for the Fibonacci sequence: ");
        scanf("%d", &a);

        for(d = 0; d < a; ++d) {
            if(d <= 1) {
                e = d;
            }
            else {
                e = b + c;
                b = c;
                c = e;
            }
            printf("%d\n", e);
        }

        return 0;
    }
