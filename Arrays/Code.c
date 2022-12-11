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
    [] = Array Symbol
    */

    char me[7] = "Educate";
    printf("The data value is %s \n", me);

    me[4] = 'g';
    printf("The data value is %s \n", me);

    strcpy(me, "Hello World");
    printf("The new value is %s \n", me);

    return 0;
}
