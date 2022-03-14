/*
Program to demonstrate pre and post increment operations
practical no 2 / 1st
*/

#include <stdio.h>

void main()
{
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    ++no;   // pre increment
    printf("Value of the pre increment = %d", no);
    no++;   // post increment
    printf("\nValue of post-increment = %d", no);
}