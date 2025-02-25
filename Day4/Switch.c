#include <stdio.h>
#include <stdlib.h>

int main()
{
    int color;
    printf("choose a color:\n1:Red\n2:Green\n3:Blue\n");
    scanf("%d", &color);

    switch (color)
    {
    case 1:
        printf("You have chosen the Res color\n");
        break;
    case 2:
        printf("You have chosen the green color\n");
        break;
    case 3:
        printf("You have chosen the blue color\n");
        break;
    
    default:
        printf("please, choose a color from 1 to 3\n");
        break;
    }
        return 0;

}