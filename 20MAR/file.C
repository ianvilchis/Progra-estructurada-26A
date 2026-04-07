#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char tablero[5][5];
    FILE *archivo;
    char nombre[10];
    char nombre2[10];
    char linea[50]; // Buffer para leer del archivo

    archivo = fopen("tablero.txt", "w");
    printf("Ingrese su nombre \n");
    fgets(nombre, sizeof(nombre), stdin);

    // 1. Inicializar la matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tablero[i][j] = '~';
        }
    }

    tablero[1][2] = 'B';
    tablero[3][4] = 'X';
    tablero[2][1] = 'O';

    // 2. Imprimir la matriz en pantalla (escritura en archivo)
    fprintf(archivo, "\n %s", nombre);
    fprintf(archivo, "\n Ian Vilchis");
    fprintf(archivo, "\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            fprintf(archivo, "%c ", tablero[i][j]);
        }
        fprintf(archivo, "\n");
    }

    fprintf(archivo, "\n Ian Vilchis");
    fprintf(archivo, "\n %s", nombre);
    fclose(archivo);

    // --- NUEVA SECCIÓN DE LECTURA Y COMPARACIÓN ---
    archivo = fopen("tablero.txt", "r");
    
    // Limpiamos el salto de línea del nombre original para comparar correctamente
    nombre[strcspn(nombre, "\n")] = 0;

    while (fgets(linea, sizeof(linea), archivo)) {
        // Quitamos el espacio inicial o saltos de línea de la lectura
        char *token = strtok(linea, " \n");
        
        while (token != NULL) {
            if (strcmp(token, nombre) == 0) {
                printf("Nombre encontrado en el archivo: %s\n", token);
            }
            token = strtok(NULL, " \n");
        }
    }

    fclose(archivo);

    return 0;
}
