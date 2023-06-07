#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivo;
    char Nome_Arquivo[200] = "";
    char caractere;
    int contador_linhas = 0;

    printf("Digite o nome do arquivo .txt: ");
    scanf("%s", Nome_Arquivo);

    arquivo = fopen(Nome_Arquivo, "r");

    while ((caractere = fgetc(arquivo)) != EOF) {
    if (caractere == '\n'){
        contador_linhas++;
    }
}

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("O arquivo possui %d linha(s).\n", contador_linhas);

    fclose(arquivo);

    return 0;
}
