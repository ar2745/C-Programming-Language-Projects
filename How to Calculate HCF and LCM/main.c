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

    long HCFLCM(long a, long b){
        if(a == 0){
            return b;
        }

        while(b != 0){
            if(a > b){
                a = a - b;
            }
            else{
                b = b - a;
            }
        }
        return a;
    }

    int main() {

        long a, b, hcf, lcm;

        printf("Please enter an integer: ");
        scanf("%ld", &a);

        printf("Please enter another integer: ");
        scanf("%ld", &b);

        hcf = HCFLCM(a, b);
        lcm = (a * b) / hcf;

        printf("Highest Common Factor: %ld\nLeast Common Multiple: %d", hcf, lcm);

        return 0;
    }
