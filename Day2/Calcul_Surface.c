#include <stdio.h>
#include <stdlib.h>
#define pi 3.14 

//For the const value we can meke #define ... or const .... for ex : const float_Pi = 3.14;


int main ()
{
    float radius, surface;
    radius = 4;

    surface = radius*radius*pi;
    printf("the surface is %.2f.\n", surface);
    return 0;

}