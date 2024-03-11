#include <stdio.h>

// Função para verificar se um número está na sequência de Fibonacci
int verificaFibonacci(int num) {
    int a = 0, b = 1, c;
    
    while (c < num) {
        c = a + b;
        if (c == num)
            return 1; // O número está na sequência
        a = b;
        b = c;
    }
    
    return 0; // O número não está na sequência
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (verificaFibonacci(numero))
        printf("%d pertence a sequencia de Fibonacci.\n", numero);
    else
        printf("%d nao pertence a sequencia de Fibonacci.\n", numero);

    return 0;
}

