#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int acertou = 0;
    int vidas;
    int chute;
    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;
    int tentativas = 1;
    double pontos = 1000;
    int nivel;

    printf("========================================\n");
    printf("= Seja bem vindo ao jogo de advinhação =\n");
    printf("=                                      =\n");
    printf("=     Qual nível você quer jogar?      =\n");
    printf("========================================\n");
    printf("[ 1 - Fácil ][ 2 - Médio ][ 3 - Difícil ]\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    if (nivel == 1)
    {
        vidas = 20;
    }
    else if (nivel == 2)
    {
        vidas = 15;
    }
    else
    {
        vidas = 6;
    }

    for (int i = 1; i <= vidas; i++)
    {
        printf("== Tentativa %d ==\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0)
        {
            printf("Números negativos não são permitidos!\n");
            continue;
        }
        else
        {
            acertou = (chute == numerosecreto);
            int maior = chute > numerosecreto;

            if (acertou)
            {
                break;
            }
            else if (maior)
            {
                printf("Seu número é maior que o número secreto\n");
            }
            else
            {
                printf("Seu número é menor que o número secreto\n");
            }
            tentativas++;
            double pontosperdidos = (double)(chute - numerosecreto) / 2.0;
            pontos -= abs(pontosperdidos);
        }
    }
    printf("============================================\n");
    if (acertou)
    {
        printf("[ VOCÊ GANHOU! ] [ Total de pontos: %.2f ]\n", pontos);
        printf("[ Você acertou em %d tentativas ]\n", tentativas);
    }
    else
    {
        printf("Você perdeu, tente novamente!\n");
    }
    printf("============================================\n");

    return 0;
}