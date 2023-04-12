
#include <stdio.h>

int main() {

    printf("Instituto Federal de Educação, Ciência e Tecnologia do Ceará\n");
    printf("Yasmim Soares\n\n");

    
    int matriz[3][3] = {{2, 8, 32}, {3, 9, 27}, {4, 10, 14}};
    int tamanho = 3;
    int i, j;
    
    printf("1) Diagonal principal da matriz:\n");

    for (i = 0; i < tamanho; i++) {
      for (j=0; j < tamanho; j++) {
        if(i == j)
        printf("Matriz [%d][%d]: %d\n", i, j, matriz[i][j]);
        
        }
      }
    return 0;
  }
