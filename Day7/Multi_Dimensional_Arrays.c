#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char Week[7][10]={
        {"Monday"},
        {"tuesday"},
        {"Wednesday"},
        {"Thursday"},
        {"friday"},
        {"Saturday"},
        {"Sunday"}
    };
    for(i=0; i<=6; i++){
        printf("%s\n",Week[i]);
    };
        return 0;
}