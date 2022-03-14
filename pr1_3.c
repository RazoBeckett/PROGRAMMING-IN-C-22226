/*
Program to interchange values of the variable 
Practical no. 1 / 3rd
*/

#include <stdio.h>

void main()
{
    int x, y, temp;
    printf("Enter Value Of the two variable: ");
    scanf("%d %d", &x, &y);
    printf("Values before interchange x=%d y=%d\n", x, y);
    temp=x;
    x=y;
    y=temp;
    printf("Value after interchange x=%d y=%d", x, y);

}