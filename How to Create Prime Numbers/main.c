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

    int primeGenerator(int a){
        int x;

        for(x = 2; x <= a - 1; ++x){
            if(a % x == 0){
                return 0;
            }
            }
        if(x == a){
            return 1;
        }
    }

    int main() {

        int x, y, output;

        printf("Please enter the number whose prime numbers you would like to print: ");
        scanf("%d", &y);

        printf("The prime numbers of %d: \n",y);

        for(x = 0; x < y; ++x){
            output = primeGenerator(x);

            if(output == 1){
                printf("%d\n", x);
            }
        }

        return 0;
    }
