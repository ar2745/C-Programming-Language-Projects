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

        float size, volume, surface;

        printf("Please enter the size of the side of a cube: ");
        scanf("%f", &size);

        volume = size * size * size;
        surface = 6 * (size * size);

        printf("The volume of the cube is: %.3f \n", volume);
        printf("The surface area of the cube is: %.3f", surface);

        return 0;
    }
