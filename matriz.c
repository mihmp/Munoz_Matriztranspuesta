#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS_MAX 10
#define COLUMNAS_MAX 10

void llenarMatriz(int matriz[FILAS_MAX][COLUMNAS_MAX], int filas, int columnas) {
    srand(time(NULL));
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101; // Generar números aleatorios entre 0 y 100
        }
    }
}

void imprimirMatriz(int matriz[FILAS_MAX][COLUMNAS_MAX], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void calcularTranspuesta(int matriz[FILAS_MAX][COLUMNAS_MAX], int transpuesta[COLUMNAS_MAX][FILAS_MAX], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}

int main() {
    int filas, columnas;
    int matriz[FILAS_MAX][COLUMNAS_MAX];
    int transpuesta[COLUMNAS_MAX][FILAS_MAX];
    
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);
    
    llenarMatriz(matriz, filas, columnas);
    
    printf("\nMatriz original:\n");
    imprimirMatriz(matriz, filas, columnas);
    
    calcularTranspuesta(matriz, transpuesta, filas, columnas);
    
    printf("\nMatriz transpuesta:\n");
    imprimirMatriz(transpuesta, columnas, filas);
    
    return 0;
}

