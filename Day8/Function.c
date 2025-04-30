#include <stdio.h>
#include <stdlib.h>

void modelCar(int, char*, float);
int main()
{
    modelCar(1,"Mercedes", 90.3);
    modelCar(2,"BMW", 43.7);
    modelCar(3, "AUDI", 39.0);
    modelCar(4,"VW",35.6);
    modelCar(5, "Skoda", 25.4);
    return 0;
    
}


void modelCar(int rank, char name[], float price)
{
    printf("%d\t",rank);
    printf("%s\t", name);
    printf("%.1f K$\n", price);
    return;

}