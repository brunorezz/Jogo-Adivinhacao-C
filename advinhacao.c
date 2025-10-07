#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int chute;
    int numerosecreto = 42;
    int tentativas = 1;
    double pontos = 1000;

    printf("========================================\n");
    printf("= Seja bem vindo ao jogo de advinhação =\n");
    printf("========================================\n");

    while (1)
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
            int acertou = (chute == numerosecreto);
            int maior = chute > numerosecreto;

            if (acertou)
            {
                printf("Parabéns! Você acertou!\n");
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
    printf("Você acertou em %d tentativas \n", tentativas);
    printf("Total de pontos: %.2f \n", pontos);
    printf("============================================\n");

    return 0;
}