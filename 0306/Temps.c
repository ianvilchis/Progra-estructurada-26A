#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=4;
    float temp[N];

    for (int j=0;j<N;j++)
    {
        printf("\n Ingrese el valor de la temp %d \n",j);
        scanf("%f",&temp[j]);
    }
    for (int j=0;j<4;j++)
    {
        printf("\n La temp %d es %f",j,temp[j]);

    }
    return 0;
}
