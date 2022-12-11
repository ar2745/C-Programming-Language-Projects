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

        int grade;

        printf("Please enter your grade: ");
        scanf("%d", &grade);

        if(grade >= 90 && grade <= 100) {
            printf("Your grade is: A");
        }
        if(grade >= 80 && grade < 90) {
            printf("Your grade is: B");
        }
        if(grade >= 70 && grade < 80) {
            printf("Your grade is: C");
        }
        if(grade >= 60 && grade < 70) {
            printf("Your grade is: D");
        }
        if(grade < 60 && grade >= 0) {
            printf("Your grade is: F");
        }
        else if(grade < 0) {
            printf("Invalid grade");
        }

        return 0;
    }
