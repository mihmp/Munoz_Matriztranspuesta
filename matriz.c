#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Agrego las librerias necesarias*/
#define FILAS_MAXIMAS 10
#define COLUMNAS_MAXIMAS 10
/*Defino columnas y filas*/
void llenarMatriz(int matriz[FILAS_MAXIMAS][COLUMNAS_MAXIMAS], int num_filas, int num_columnas) {
    srand(time(NULL));
    
    for (int i = 0; i < num_filas; i++) {
        for (int j = 0; j < num_columnas; j++) {
            matriz[i][j] = rand() % 101; 
        }
    }
}
/*Marco cada matriz para el programa*/
void imprimirMatriz(int matriz[FILAS_MAXIMAS][COLUMNAS_MAXIMAS], int num_filas, int num_columnas) {
    for (int i = 0; i < num_filas; i++) {
        for (int j = 0; j < num_columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
/*Indico en las lineas que se genere la matriz transpuesta*/
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
    
    printf("Número de filas de la matriz: ");
    scanf("%d", &num_filas);
    printf("Número de columnas de la matriz: ");
    scanf("%d", &num_columnas);
    
    llenarMatriz(matriz, num_filas, num_columnas);
    
    printf("\nMatriz original:\n");
    imprimirMatriz(matriz, num_filas, num_columnas);
    
    calcularTranspuesta(matriz, transpuesta, num_filas, num_columnas);
    
    printf("\nMatriz transpuesta:\n");
    imprimirMatriz(transpuesta, num_columnas, num_filas);
    
    return 0;
}

