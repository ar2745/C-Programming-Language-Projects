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

    struct complexNumber {

        int real, imaginary;

    };

    int main() {

        struct complexNumber x1, y1, z1, x2, y2, z2;

        printf("Please enter first real number: ");
        scanf("%d", &x1.real);

        printf("Please enter first imaginary number: ");
        scanf("%d", &x2.imaginary);

        printf("Please enter your second real number: ");
        scanf("%d", &y1.real);

        printf("Please enter your second imaginary number: ");
        scanf("%d", &y2.imaginary);

        z1.real = x1.real + y1.real;
        z2.imaginary = x2.imaginary + y2.imaginary;

        if (z2.imaginary >= 0) {
            printf("Sum of complex number is: %d + %di \n", z1.real, z2.imaginary);
        }
        else {
            printf("Sum of complex number is: %d - %di \n", z1.real, z2.imaginary);
        }

        return 0;
    }
