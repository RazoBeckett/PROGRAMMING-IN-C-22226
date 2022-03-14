/*
Program to demonstrate pre and post decrement operations
practical no 2 / 2nd
*/

#include <stdio.h>

void main()
{
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    --no;   // pre decrement
    printf("Value of the pre decrement = %d", no);
    no--;   // post decrement
    printf("\nValue of post-decrement = %d", no);
}