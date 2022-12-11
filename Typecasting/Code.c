#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    /*The author of this code is Andrew Robinson
    Date:12/22/21
    This is for education
    GitHub ID */

    /*
    %s = string ""
    %d = integer
    %f = float
    */

    int x = 12;
    int y = 10;
    int z = 25;
    float result;

    result = ((float)x * (float)y) / (float)z;
    printf("The result of the equation is %.1f", result);
    return 0;
}

