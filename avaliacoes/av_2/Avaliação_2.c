#include <stdio.h>

void somar_matrizes(int n, int A[][n], int B[][n], int C[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int n = 3;  // Tamanho da matriz
    int A[][3] = {{13, 9, 3}, {4, 5, 25}, {7, 42, 9}};
    int B[][3] = {{18, 63, 7}, {5, 79, 34}, {3, 2, 1}};
    int C[][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    somar_matrizes(n, A, B, C);

    // Imprimir a matriz resultado C
    printf("Matriz C (Resultado da Soma):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
