#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x, y, r;


    // First set of operations
    x = 10, y = 5;
    r = (x > y && x < 10) ? 1 : 0;
    printf("%d\n", r);


    // Second set of operations
    x = 100, y = 50;
    r = (x < y || x <= 100) ? 1 : 0;
    printf("%d\n", r);


    // Third set of operations
    x = 100, y = 50;
    r = !(x > y || x < 100) ? 1 : 0;
    printf("%d\n", r);



    return 0;
}
