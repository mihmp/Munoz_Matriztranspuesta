#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS_MAXIMAS 10
#define COLUMNAS_MAXIMAS 10

void llenarMatriz(int matriz[FILAS_MAXIMAS][COLUMNAS_MAXIMAS], int num_filas, int num_columnas) {
    srand(time(NULL));
    
    for (int i = 0; i < num_filas; i++) {
        for (int j = 0; j < num_columnas; j++) {
            matriz[i][j] = rand() % 101; 
        }
    }
}

void imprimirMatriz(int matriz[FILAS_MAXIMAS][COLUMNAS_MAXIMAS], int num_filas, int num_columnas) {
    for (int i = 0; i < num_filas; i++) {
        for (int j = 0; j < num_columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void calcularTranspuesta(int matriz[FILAS_MAXIMAS][COLUMNAS_MAXIMAS], int transpuesta[COLUMNAS_MAXIMAS][FILAS_MAXIMAS], int num_filas, int num_columnas) {
    for (int i = 0; i < num_filas; i++) {
        for (int j = 0; j < num_columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}

int main() {
    int num_filas, num_columnas;
    int matriz[FILAS_MAXIMAS][COLUMNAS_MAXIMAS];
    int transpuesta[COLUMNAS_MAXIMAS][FILAS_MAXIMAS];
    
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &num_filas);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &num_columnas);
    
    llenarMatriz(matriz, num_filas, num_columnas);
    
    printf("\nMatriz original:\n");
    imprimirMatriz(matriz, num_filas, num_columnas);
    
    calcularTranspuesta(matriz, transpuesta, num_filas, num_columnas);
    
    printf("\nMatriz transpuesta:\n");
    imprimirMatriz(transpuesta, num_columnas, num_filas);
    
    return 0;
}


