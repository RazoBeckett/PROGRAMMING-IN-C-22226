/*
Program to find area and volume of a sphere.
Practical No 2, 2nd
*/

#include <stdio.h>

void main()
{
    float r, area, vol;
    printf("Enter radius of sphere: ");
    // r is float point variable so use %f
    scanf("%f", &r);
    area=4*3.14*r*r;
    vol=(4*3.14*r*r*r)/3;
    printf("Area of sphere = %f", area);
    printf("\nVolume of sphere = %f", vol);
}