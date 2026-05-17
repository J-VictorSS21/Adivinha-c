#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
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
            totaldetentativas = 20;
            break;
        case 2:
            totaldetentativas = 10;
            break;
        case 3:
            totaldetentativas = 6;
            break;
        default:
            totaldetentativas = 3;
            printf("ERRO\n");
            break;
    }
    
    int numerosecreto;
    int chute;
    float pontos = 1000;
    srand(time(NULL));
    numerosecreto = rand() % 101;
    int acertou = chute == numerosecreto;
    
    for (int i = 1; i <= totaldetentativas; i++){
        printf("Qual é o seu chute?");
        scanf("%d", &chute);
        
        /*if(chute < 0) {
            printf("Você não pode chutar numeros negativos\n");
            i--;
            continue;
        }*/
        
        printf("Seu %do chute foi %d\n", i, chute);
        
        if(acertou) {
            break;
        } else {
            int maior =chute> numerosecreto;
            if(maior){
                printf("Seu chute foi maior do que o numero secreto!!\n");
            } else {
                printf("Se chute foi menor do que o numerosecreto!!\n");
            }
        }
        float pontosperdidos  = abs(chute - numerosecreto)/2.0;
        pontos = pontos - pontosperdidos;
    };
    
    if (acertou) {
        printf("Parabéns!! Você acertou!\n");
    } else {
        printf("Voce perdeu!!");
    };
    
    printf("Voce fez %.2f pontos\n" , pontos);

    printf("Obrigado por jogar!\n");
    

    return 0;
}