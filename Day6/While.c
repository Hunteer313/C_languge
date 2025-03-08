#include <stdio.h>
#include <stdlib.h>

int main()
{
    int PIN, i=1;
    printf("Enter your PIN Code:\t");
    scanf("%d", &PIN);
    
    while (PIN != 1234){

        i++;
        if(i>3)
        {
            printf("Your Accunt is Locked!\n");
            break;  
        }
        printf("PIN incorrect!\n");

        printf("Enter your PIN Code:\t");
        
        scanf("%d", &PIN);
    }   

        return 0;

}