#include <stdio.h>

int main()
{

    int tabuleiro[10][10];

    // INICIANDO
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    //NAVIOS---------------------

    //HORIZONTAL
    for (int i = 0; i < 3; i++){
        tabuleiro[0][6 + i] = 3;
    }

    //VERTICAL
    for (int j = 0; j < 3; j++){
        tabuleiro[3 + j][2] = 3;
    }

    // TABULEIRO
    printf("\n=============================\n");
    printf("   TABULEIRO BATALHA NAVAL   ");
    printf("\n=============================\n");

    // CABEÇALHO (A --> J)---------
    printf("    ");
    for (int j = 0; j < 10; j++)
    {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    // LINHAS (1 --> 10)-----------
    for (int i = 0; i < 10; i++)
    {

        // AJUSTES DO ALINHAMENTO------
        if (i < 9)
        {
            printf("%d   ", i + 1);
        }
        else
        {
            printf("%d  ", i + 1);
        }

        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}