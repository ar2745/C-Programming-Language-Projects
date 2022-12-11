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
    */

    double myAvg(int numbers[], int len) {
        int x;
        double average, total;

        for(x = 0; x < len; ++x) {
            total += numbers[x];
        }
        average = total / len;
        return average;
    }

    int main() {

        int numbers[] = {45,67,12,8,9,3};
        double result;

        result = myAvg(numbers, 6);

        printf("The average of the array is %.2f \n", result);
        return 0;
    }

