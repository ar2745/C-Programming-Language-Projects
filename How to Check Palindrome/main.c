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

        int x, y, reverse = 0;

        printf("Please enter an integer: ");
        scanf("%d", &x);

        y = x;

        while(y != 0) {
            reverse = reverse * 10;
            reverse = reverse + y % 10;
            y = y / 10;
        }

        if(x == reverse){
            printf("This number is a palindrome");
        }
        else{
            printf("This number is not a palindrome");
        }

        return 0;
    }
