#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    int tamanho = strlen(str);
    int i, j;

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char string[100]; // Define o tamanho máximo da string
    printf("Digite uma string: ");
    fgets(string, 100, stdin); // Lê a string do usuário

    
    if (string[strlen(string) - 1] == '\n')
        string[strlen(string) - 1] = '\0';

    inverterString(string); // Inverte a string

    printf("String invertida: %s\n", string);

    return 0;
}

