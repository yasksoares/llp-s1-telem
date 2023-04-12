#include <stdio.h>

int main() {

    printf("Instituto Federal de Educação, Ciência e Tecnologia do Ceará\n");
    printf("Yasmim Soares\n\n");

    
    int matriz[3][3] = {{2, 8, 32}, {3, 9, 27}, {4, 10, 14}};
    int tamanho = 3;
    
    printf("1) Diagonal principal da matriz:\n");

    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", matriz[i][i]);
    }

    
    int matriz_a[3][3] = {{1, 3, 5}, {4, 8, 6}, {7, 4, 9}};
    int matriz_b[3][3] = {{9, 8, 25}, {9, 5, 4}, {14, 2, 1}};
    int matriz_soma[3][3];
    
    printf("\n2) Matriz soma:\n");

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            matriz_soma[i][j] = matriz_a[i][j] + matriz_b[i][j];
            printf("%d ", matriz_soma[i][j]); 
        }
        printf("\n"); 
    }
    
    return 0;
}
