#include <stdio.h>

typedef struct {
    int idade;
    float altura;
    char nome[50];
    int ano_nascimento;
} Usuario;

int main() {
    Usuario usuario;

    printf("Digite o nome: ");
    scanf("%[^\n]", usuario.nome);

    printf("Digite a idade: ");
    scanf("%d", &usuario.idade);

    printf("Digite a altura: ");
    scanf("%f", &usuario.altura);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &usuario.ano_nascimento);

    FILE *arquivo = fopen("dados.txt", "wb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    fwrite(&usuario, sizeof(Usuario), 1, arquivo);

    fclose(arquivo);

    printf("Estrutura gravada no arquivo com sucesso.");

    return 0;
}
