#include <stdio.h>

int main() {

    printf("Instituto Federal de Educação, Ciência e Tecnologia do Ceará\n");
    printf("Yasmim Soares\n\n");

    
    int matriz_a[3][3] = { {2, 8, 32}, {3, 9, 27}, {4, 10, 14} };
    int matriz_b[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int matriz_soma[3][3];
    int i, j;
    printf("A soma das matrizes é:");
    for (i=0; i < 3; i++){
    printf("\n");
     for (j=0; j < 3; j++){
     
     matriz_soma[i][j] = matriz_a[i][j] + matriz_b[i][j];
    printf("%d ", matriz_soma[i][j]);
     }
    
    }
    
    
    return 0;
    
    }
     
