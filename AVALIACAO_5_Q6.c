#include <stdio.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    char caractere;
    int contagem[ALPHABET_SIZE] = {0};

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (isalpha(caractere)) {
            int indice = tolower(caractere) - 'a';
            contagem[indice]++;
        }
    }

    fclose(arquivo);

    printf("Contagem das letras no arquivo:\n");
    for(int i = 0; i < ALPHABET_SIZE; i++) {
        printf("%c: %d\n", 'a' + i, contagem[i]);
    }

    return 0;
}
