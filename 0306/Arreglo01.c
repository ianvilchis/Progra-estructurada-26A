#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp[24];
    float temp1, temp2;
    printf("la direccion de temp1 es %d y la de temp2 es:%d",&temp1,&temp2);
    printf("\nla direccion de temp[24] es %d con & y %d sin &",&temp,temp);
    return 0;
}
