#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int chute;
    int numerosecreto = 42;
    int ganhou = 0;
    int tentativas = 1;

    printf("========================================\n");
    printf("= Seja bem vindo ao jogo de advinhação =\n");
    printf("========================================\n");

    while (ganhou == 0)
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
                ganhou = 1;
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
        }
    }

    return 0;
}