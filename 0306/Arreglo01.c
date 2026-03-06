#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp[24];
    float temp1, temp2;
    printf("la direccion de temp1 es %d \n y la de temp2 es:%d",&temp1,&temp2);
    printf("\nla direccion de temp es %d con & y la de &temp[24] %d",temp,&temp[23]);
    return 0;
}
