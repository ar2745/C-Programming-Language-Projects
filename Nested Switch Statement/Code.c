#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
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

    int x = 5;
    int y = 4;

    switch (x)
    {
    case 5:
            printf("This is case x \n");
            switch(y)
            {
                case 4:
                printf("This is case y \n");
            }
    }
    return 0;
}


