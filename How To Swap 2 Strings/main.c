#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>

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

        char name1[100], name2[100], *output;

        printf("Please enter a name: ");
        gets(name1);

        printf("Please enter the second name: ");
        gets(name2);

        printf("Names before swapping: %s : %s \n", name1, name2);

        output = (char*)malloc(100);

        strcpy(output, name1);
        strcpy(name1, name2);
        strcpy(name2, output);

        printf("Names after swapping: %s : %s", name1, name2);

        return 0;
    }
