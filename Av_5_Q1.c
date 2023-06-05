#include <stdio.h>

int main(){

    FILE *arquivo;
    char caractere;

arquivo = fopen("arq.txt", "w");

if (arquivo == NULL){
    printf("Erro");

    return 1; }
printf("Digite os caracteres: \n");

while (1){
    scanf("%c", &caractere);

    if (caractere == '0'){
        break; }

fputc(caractere, arquivo); }

fclose(arquivo);

// ler arquivo

arquivo = fopen ("arq.txt", "r");
if (arquivo == NULL){
    printf("Erro ao abrir o arquivo selecionado.");
    return 1;
}

printf("\n Conteúdo do arquivo: \n");

while ((caractere == fgetc(arquivo)) != EOF){
    printf("%c", caractere); 
    break; }
    printf("\n");

    fclose(arquivo);

return 0;
}
