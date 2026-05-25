#include <stdio.h>

int main() {
    float a, b;
    int operacao;

    printf("Digite o primeiro numero (a): ");
    scanf("%f", &a);
    
    printf("Digite o segundo numero (b): ");
    scanf("%f", &b);

    printf("\nEscolha a operacao desejada:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Operacao: ");
    scanf("%d", &operacao);

    printf("\n--- Resultado ---\n");
    switch (operacao) {
        case 1:
            printf("Soma: %.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case 2:
            printf("Subtracao: %.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case 3:
            printf("Multiplicacao: %.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case 4:

            if (b != 0) {
                printf("Divisao: %.2f / %.2f = %.2f\n", a, b, a / b);
            } else {
                printf("Erro: Divisao por zero nao e permitida na matematica.\n");
            }
            break;
        default:
            printf("Erro: Operacao invalida. Por favor, escolha um numero entre 1 e 4.\n");
            break;
    }

    return 0;
}