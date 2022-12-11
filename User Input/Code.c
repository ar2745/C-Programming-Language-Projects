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

    char firstname[20];
    char lastname[20];
    int age;
    int salary;

    printf("What is your first name? \n");
    scanf("%s", firstname);

    printf("What is your last name? \n");
    scanf("%s", lastname);

    printf("How old are you? \n");
    scanf("%d", &age);

    printf("How much is your salary? \n");
    scanf("%d", &salary);

    printf("%s %s is %d years old and their salary is %d \n", firstname, lastname, age, salary);
    return 0;
}
