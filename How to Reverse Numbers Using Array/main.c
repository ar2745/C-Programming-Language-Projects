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

        int x, y, z[100];

        printf("Please enter an integer to be the total number of digits in the array: ");
        scanf("%d", &x);

        printf("Please enter the numbers you would like to reverse with spaces: ");

        for(y = 0; y < x; ++y){
            scanf("%d", &z[y]);
        }

        printf("The reversed numbers are:\n");

        for(y = x - 1; y >= 0; --y){
            printf("%d\n", z[y]);
        }

        return 0;
    }
