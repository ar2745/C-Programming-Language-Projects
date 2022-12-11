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

        int x, y, z;

        printf("Please enter your first number: ");
        scanf("%d", &x);

        printf("Please enter your second number: ");
        scanf("%d", &y);

        printf("Please enter your third number: ");
        scanf("%d", &z);

        if(x > y && x > z) {
            printf("%d is the highest number", x);
        }
        if(y > x && y > z) {
            printf("%d is the highest number", y);
        }
        if(z > x && z > y) {
            printf("%d is the highest number", z);
        }

        return 0;
    }
