#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define stl "This is the string variable"

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

    int age = 20;
    int month = 5;
    int year = 2001;
    int day = 12.0;
    int hello;
    hello = year - age;
    char Educate = 'A';

    printf("The value of age is %d and today is %d \n", age, day);
    printf("The result of hello is %d \n", hello);
    printf("The new variable is %s", stl);
    return 0;
}
