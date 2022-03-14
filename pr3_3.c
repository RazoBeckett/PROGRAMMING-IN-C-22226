/*
Program to convert centigrade to kelvin
Practical no 3 / 3rd
*/

#include <stdio.h>

void main()
{
    int C;
    float K;
    printf("Enter the temperature in centigrade: ");
    scanf("%d", &C);
    K=C+273.16; // convert temp. to kelvin
    printf("Temperature in Kelvin = %f", K);

}


/*
//Mera style

#include <stdio.h>

void main()
{
    int C;
    printf("Enter the temperature in centigrade: ");
    scanf("%d", &C);
    printf("Temperature in Kelvin = %f", (float)(C+273.16));

}

*/