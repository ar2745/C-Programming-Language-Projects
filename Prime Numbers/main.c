#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*The author of this code is Andrew Robinson
    Date:12/24/21
    This is for education
    GitHub ID */

    /*
    %s = string ""
    %d = integer
    %f = float
    */

    /*
    Arithmetic Operators

    Addition +
    Subtraction -
    Division /
    Modulus %
    Increment ++
    Dependent --
    */

    /*
    Relational Operators

    ==, !=, >, <, >=, <=
    */

    /*
    if(x < y)

        printf("x is less than y \n");

    else

        printf("x is not less than y");
    */

    /*
    Logical Operators

    And Operator &&
    Or Operator ||
    Not Operator !
    */

    int main() {

        int x, y;

        for(x = 2; x < 50; ++x) {

            for(y = 2; y <= (x / y); ++y) {
                    if(! (x % y))
                        break;
            }

            if(y > (x / y)) {

                printf("%d is a prime number \n", x);

            }
        }

        return 0;

    }
