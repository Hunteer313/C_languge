#include <stdio.h>
#include <stdlib.h>
void division(int a, int b);
int verify(int b) ;

int main()
{
    division(55,7);
    division(12,5);
    division(33,61);
    division(6,2);
    
    return 0;
}
void division(int a, int b){

    if (verify (b)==0)
    {
        printf("Attention Division on 0 ! ");
    }else{
        printf("The division de %d by %d = %.2f\n", a,b,(float)a/b);
    }
    
    return;
}

int verify(int b) 
{
    if (b==0)
    {
        return 0;
    }else{
        return 1;
    }
    
}