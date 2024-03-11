#include <stdio.h>

// Fun��o para verificar se um n�mero est� na sequ�ncia de Fibonacci
int verificaFibonacci(int num) {
    int a = 0, b = 1, c;
    
    while (c < num) {
        c = a + b;
        if (c == num)
            return 1; // O n�mero est� na sequ�ncia
        a = b;
        b = c;
    }
    
    return 0; // O n�mero n�o est� na sequ�ncia
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

