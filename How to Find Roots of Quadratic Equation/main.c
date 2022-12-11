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

        double r1, r2, r3, determinant, root1, root2, realPart, imaginaryPart;

        printf("Please enter the first coefficient of the equation: ");
        scanf("%lf", &r1);

        printf("Please enter the second coefficient of the equation: ");
        scanf("%lf", &r2);

        printf("Please enter the third coefficient of the equation: ");
        scanf("%lf", &r3);

        determinant = r2 * r2 - 4 * r1 * r3;

        if(determinant > 0) {
            root1 = (-r2 + sqrt(determinant)) / (2 * r1);
            root2 = (-r2 - sqrt(determinant)) / (2 * r1);

            printf("Root1 = %.2lf and Root2 = %.2lf", root1, root2);
        }
        else if(determinant == 0) {
            root1 = root2 = -r2 / (2 * r1);

            printf("Root1 = Root2 and that is equal to .2lf", root1);
        }
        else {
            realPart = -r2 / (2 * r1);
            imaginaryPart = sqrt(-determinant / (2 * r1));

            printf("Root1 = %.2lfi and Root2 = %.2lf - %.2lfi", realPart, imaginaryPart, realPart, imaginaryPart);
        }

        return 0;
    }
