#include <stdio.h>

int main() {
    int n;
    int i;
    unsigned long long fatorial = 1;

    printf("Digite um numero inteiro positivo para calcularmos o fatorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: O fatorial nao eh definido para numeros inteiros negativos.\n");
    } 
    else {
        for (i = n; i >= 1; i--) {
            fatorial *= i;
        }
        printf("O fatorial de %d eh: %llu\n", n, fatorial);
    }

    return 0;
}