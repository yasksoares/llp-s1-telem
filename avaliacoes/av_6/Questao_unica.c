#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas;
    
    printf("Digite o número de linhas das matrizes: ");
    scanf("%d", &linhas);
    
    printf("Digite o número de colunas das matrizes: ");
    scanf("%d", &colunas);
    
    int **A = (int **)malloc(linhas * sizeof(int *));
    int **B = (int **)malloc(linhas * sizeof(int *));
    int **C = (int **)malloc(linhas * sizeof(int *));
    
    for (int i = 0; i < linhas; i++) {
        A[i] = (int *)malloc(colunas * sizeof(int));
        B[i] = (int *)malloc(colunas * sizeof(int));
        C[i] = (int *)malloc(colunas * sizeof(int));
    }
    
    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    printf("Digite os elementos da matriz C:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &C[i][j]);
        }
    }
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            A[i][j] = B[i][j] + C[i][j];
        }
    }
    
    printf("Matriz A:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    printf("Matriz B:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    
    printf("Matriz C:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
  
    for (int i = 0; i < linhas; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }
    
    free(A);
    free(B);
    free(C);
    
    return 0;
}
