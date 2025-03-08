#include <stdio.h>
#include <stdlib.h>

int main()
{
    // char Name[] = "Zakaria";
    char Name[8]= "Zakarya";
    printf("My Name is %s\n", Name);
    printf("Element five is %c\n", Name[5]);
    
    Name [5]= 'i';
    printf("Element five is %c\n", Name[5]);
    printf("My Name is %s\n", Name);

    return 0;
}