#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PIN a number brtween 1000 to 9999 
    int PIN;

    printf("Enter the PIN code ");
    scanf("%d", &PIN);

    if(PIN < 1000 || PIN > 9999) 
        {printf("The PIN code must be between 1000 and 9999.\n");}
    else if(PIN == 1234)
        {printf("Unlockes!\n");}
    else
        {printf("Plese, verify your PIN code.\n");}

        return 0;

}