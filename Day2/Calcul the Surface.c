#include <stdio.h>
#include <stdlib.h>
#define pi 3.14 

int main ()
{
    float radius, surface;
    radius = 4;

    surface = radius*radius*pi;
    printf("the surface is %.2f.\n", surface);
    return 0;

}