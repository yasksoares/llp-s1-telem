#include <stdio.h>
#include <ctype.h>

int main() {
    char nome_arquivo[100];
    FILE *arquivo;
    char caractere;
    int contador_vogais = 0;
    int contador_consoantes = 0;

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nome_arquivo);

    arquivo = fopen(nome_arquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        caractere = tolower(caractere);
        if (isalpha(caractere)) {
            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
                contador_vogais++;
            } else {
                contador_consoantes++;
            }
        }
    }

    fclose(arquivo);

    printf("Quantidade de vogais: %d\n", contador_vogais);
    printf("Quantidade de consoantes: %d\n", contador_consoantes);

    return 0;
}
