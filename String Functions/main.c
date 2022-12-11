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

        char str1[] = " First Name ";
        char str2[] = " Last Name ";
        char str3[] = " ";
        int len;

        strcpy(str1, str2);
        printf("The result of strcpy is %s \n", str2);

        strcat(str1, str2);
        printf("The rsult of strcat is %s \n", str1);

        len = strlen(str1);
        printf("The length of str is %d \n", len);

        return 0;
    }
