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

        float sub1, sub2, sub3, sub4, sub5, sum, percentage, gpa;

        printf("Please enter the first grade: ");
        scanf("%f", &sub1);

        printf("Please enter the second grade: ");
        scanf("%f", &sub2);

        printf("Please enter the third grade: ");
        scanf("%f", &sub3);

        printf("Please enter the fourth grade: ");
        scanf("%f", &sub4);

        printf("Please enter the fifth grade: ");
        scanf("%f", &sub5);

        sum = sub1 + sub2 + sub3 + sub4 + sub5;

        percentage = sum / 5;

        if(percentage > 10) {
            if(percentage >= 60 && percentage < 70) {
                gpa = 1.0;
            }
            if(percentage >= 70 && percentage < 80) {
                gpa = 2.0;
            }
            if(percentage >= 80 && percentage < 90) {
                gpa = 3.0;
            }
            if(percentage >= 90 && percentage <= 100) {
                gpa = 4.0;
            }
            else if(percentage < 60) {
                gpa = 0.0;
            }

            printf("The percentage of the students   grades is %.2f and their GPA is %.1f", percentage, gpa);
        }
        else {
            printf("Invalid percentage");
        }

        return 0;
    }
