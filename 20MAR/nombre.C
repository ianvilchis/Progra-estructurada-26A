#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nombre[4][10];
    for (int i=0;i<4;i++)
        {
            printf("Ingresa el nombre/apellido no.%d ",i);
     fgets(nombre[i],sizeof(nombre),stdin);
     }


     for (int j=0;j<4;j++)
        {
            printf("%s",nombre[j]);

     }


  printf("solo nombre imprime:%s",nombre);

  printf("\n La direccion de nombre [0]es:%d",&nombre[0]);
  printf("\n La direccion de nombre [1]es:%d",&nombre[1]);
  printf("\n La direccion de nombre [2]es:%d",&nombre[2]);
  printf("\n La direccion de nombre [3]es:%d",&nombre[3]);

  char arregloC[5];
  printf("\n Solo ArregloC imprime:%d",arregloC);

  printf("\n La direccion de ArregloC[0] [0]es:%d",&arregloC[0]);
  printf("\n La direccion de ArregloC[0] [1]es:%d",&arregloC[1]);
  printf("\n La direccion de ArregloC[0] [2]es:%d",&arregloC[2]);
  printf("\n La direccion de ArregloC[0] [3]es:%d",&arregloC[3]);
  printf("\n La direccion de ArregloC[0] [4]es:%d",&arregloC[4]);

  int numeros[5];
   for (int k=0;k<5;k++)
        {
            printf("\n");
            scanf("%d",&numeros[k]);

     }
     for (int l=0;l<5;l++)
        {
            printf("\n El valor no.%d es '%d' y su direccion es %d",l, numeros[l], &numeros[l]);

     }
    return 0;
}


