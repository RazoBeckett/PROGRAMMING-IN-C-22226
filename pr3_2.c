/*
Program to convert temp from farenheit to centigrade
practical no 3 / 2nd
*/

#include <stdio.h>

void main()
{
    int F;
    float C;
    printf("Enter Temperature in Farenheit: ");
    scanf("%d", &F);
    C=(F-32)/1.8; //Convert temperature to centigrade 
    printf("Temperature in Centigrade = %f", C);
}