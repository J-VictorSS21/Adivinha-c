#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TENTATIVAS_FACIL 20
#define TENTATIVAS_MEDIO 10
#define TENTATIVAS_DIFICIL 6
#define TENTATIVAS_DEFAULT 3

int main()
{ 
    int jogar_novamente = 0;

    do {
        int nivel, totaldetentativas;
        printf("           ________\n");
        printf("          /        \\\n");
        printf("         /  RRRRRR  \\\n");
        printf("        /  RRRRRRRR  \\\n");
        printf("       /____________  \\\n");
        printf("      |      ____      |\n");
        printf("      |     /    \\     |\n");
        printf("      |    | (O)  |    |\n");
        printf("      |     \\____/     |\n");
        printf("      |       __       |\n");
        printf("      |      /  \\      |\n");
        printf("      |     |____|     |\n");
        printf("      |________________|\n");
        printf("     /                  \\\n");
        printf("    /   M M M    M M M   \\\n");
        printf("   /    M    M  M    M    \\\n");
        printf("  /     M     MM     M     \\\n");
        printf(" /      M            M      \\\n");
        printf("/____________________________\\\n");
        printf("         ||        ||\n");
        printf("         ||        ||\n");
        printf("        /  \\      /  \\\n");
        printf("       /____\\    /____\\\n");
        printf("Bem vindo ao jogo de adivinhação \n");
        printf("Escolha o nive de dificuldade:\n 1 - facil\n 2 - medio\n 3 - dificil\n");
        scanf("%d", &nivel);
        
        switch (nivel){
            case 1:
                totaldetentativas = TENTATIVAS_FACIL;
                break;
            case 2:
                totaldetentativas = TENTATIVAS_MEDIO;
                break;
            case 3:
                totaldetentativas = TENTATIVAS_DIFICIL;
                break;
            default:
                totaldetentativas = TENTATIVAS_DEFAULT;
                printf("ERRO\n");
                break;
        }
        
        int numerosecreto, chute;
        
        //pedindo ao usuario a variação de numeros
        int limiteMinimo, limiteMaximo;
        printf("Os numeros vão variar a partir de que numero?\n");
        scanf("%d", &limiteMinimo);
        printf("E qual o valor máximo?\n");
        scanf("%d", &limiteMaximo);

        float pontos = 1000;

        //função para gerar um numero aleatório
        srand((unsigned) time(NULL));
        numerosecreto = limiteMinimo + rand() % (limiteMaximo - limiteMinimo + 1);

        //Definindo as variáveis para guardar o último chute e zerando o valor de "acertou"
        int acertou = 0;
        int ultimo_chute = -1;

        for (int i = 1; i <= totaldetentativas; i++){
            printf("Qual é o seu chute?");
            scanf("%d", &chute);
            printf("Seu %do chute foi %d\n", i, chute);

            acertou = (chute == numerosecreto);

            if (ultimo_chute != -1 && chute == ultimo_chute) {
                printf("Você já jogou esse número! Essa tentativa não conta.\n");
                i--;
                continue;
            } else if (acertou) {
                    break;
                } else {

                    int maior = chute > numerosecreto;
                    if (maior) {
                        printf("Seu chute foi maior do que o numero secreto!!\n");
                    } else {
                        printf("Seu chute foi menor do que o numerosecreto!!\n");
                    }

                    ultimo_chute = chute;

                    float pontosperdidos = abs(chute - numerosecreto) / 2.0;
                    pontos = pontos - pontosperdidos;
                }
        }
        
        if (acertou) {
            printf("Parabéns!! Você acertou!\n");
        } else {
            printf("Voce perdeu!!");
        };
        
        printf("Voce fez %.2f pontos\n" , pontos);

        printf("Obrigado por jogar!\n\n");

        printf("Deseja jogar novamente? (1 - Sim, 0 - Não)");
        scanf("%d", &jogar_novamente);
        
    } while (jogar_novamente == 1);

    printf("Até a próxima!\n");
    return 0;
}