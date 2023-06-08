#include <stdio.h>
#include <ctype.h>

int main() {
    char file_name[100];
    FILE *archive;
    char caracter;
    int vowel_count = 0;

    printf("Type the name of the .txt file: ");
    scanf("%s", file_name);

    archive = fopen(file_name, "r");
    if (archive == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((caracter = fgetc(archive)) != EOF) {
        caracter = tolower(caracter);  
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            vowel_count++;
        }
    }

    fclose(archive);

    printf("The file countains %d vowels.\n", vowel_count);

    return 0;
}
