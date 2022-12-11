#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define PI 3.142

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

        float radius, volume;

        printf("Please enter the radius: ");
        scanf("%f", &radius);

        if(radius >= 1) {
            volume = (4 / 3) * PI * pow(radius, 3);
            printf("The volume of the sphere: %.2f", volume);
        }
        else {
            printf("Invalid value");
        }

        return 0;
    }
