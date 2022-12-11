#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    /*The author of this code is Andrew Robinson
    Date:12/23/21
    This is for education
    GitHub ID */

    /*
    %s = string ""
    %d = integer
    %f = float
    */

    float x;
    float y;
    float z;

    printf("Insert first number \n");
    scanf("%f", &x);

    printf("Insert second number \n");
    scanf("%f", &y);

    z = x + y;
    z = (x + y) / 2;

    printf("The results of your numbers are %.1f \n", z);
    return 0;
}

