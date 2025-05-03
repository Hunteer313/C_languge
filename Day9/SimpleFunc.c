#include <stdio.h>
#include <stdlib.h>
void squar(int);

int main()
{
    squar(5);
    squar(8);
    squar(12);
    return 0;
}

void squar(int x)
{
    int r;
    r= x*x;
    printf("The squar of %d is %d\n", x,r);
    return;
}