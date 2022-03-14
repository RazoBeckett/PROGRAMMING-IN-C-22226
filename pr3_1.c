/*
Program to demonstrate implicit and explicit
practical no 3 / 1st
*/

#include <stdio.h>

void main()
{
    char ch;
    int no1, no2;
    float div;
    printf("Implicit data type conversion: ");
    scanf("%c", &ch); //implicit and explicit
    printf("Charater to integer conversion = %d", ch);
    printf("\n\nExplicit data type conversion: ");
    scanf("%d %d", &no1, &no2);
    div=(float)no1/no2;
    printf("Division = %f", div);
}
