#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp[4];
    float temp1, temp2;
    temp[0]=20.5;
    temp[1]=18.2;
    temp[2]=16.1;
    temp[3]=14.0;
    int dummy;
    printf("la direccion de temp1 es %d \n y la de temp2 es:%d",&temp1,&temp2);
    printf("\nla direccion de temp es %d con & y la de &temp[24] %d",temp,&temp[4]);
    printf("\nla direccion de temp[0] es:%.2f y la de &temp[1] %.2f",temp[0],temp[1]);
    printf("\n la direccion de &dummy es: %d",  &dummy);
    for ()
    return 0;
}
