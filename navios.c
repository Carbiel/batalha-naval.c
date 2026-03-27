#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LINHA 10
#define COLUNA 10
#define QTD_NAVIOS 4
#define CRUZ 3
#define CONE 3
#define OCTAEDRO 3

int main()
{
    srand(time(NULL));

    int tamanhos[QTD_NAVIOS] = {3, 2, 4, 5};
    int tabuleiro[LINHA][COLUNA];

    // INICIANDO
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    //VARIAVEIS BOMBAS
    int cruz[CRUZ][CRUZ];
    int cone[CONE][CONE];
    int octaedro[OCTAEDRO][OCTAEDRO];

    //TIPOS DE BOMBAS--------------------

    //CRUZ
    for (int i = 0; i < CRUZ; i++) {
        for (int j = 0; j < CRUZ; j++) {

            if ( i == 1 || j == 1) {
                cruz[i][j] = 1;

            } else {
                cruz[i][j] = 0;
            }
        }
    }

    //CONE
    for (int i = 0; i < CONE; i++){
        for (int j = 0; j < CONE; j++){
            
            if (j >= (CONE/2 - i) && j <= (CONE/2 + i)){
                cone[i][j] = 1;

            } else {
                cone[i][j] = 0;
            }
        }
    }

    //OCTAEDRO
    for (int i = 0; i < OCTAEDRO; i++) {
        for (int j = 0; j < OCTAEDRO; j++) {

            if (abs (i - 1) + abs (j - 1) <= 1) {
                octaedro[i][j] = 1;

            } else {
                octaedro[i][j] = 0;
            }
        }
    }

    // NAVIOS---------------------
    /*for (int n = 0; n < QTD_NAVIOS; n++)
    {
        int tamanho = tamanhos[n];
        int valido = 0;

        while (!valido)
        {

            int linha = rand() % LINHA;
            int coluna = rand() % COLUNA;
            int direcao = rand() % 2; // 0 = HORIZONTAL, 1 = VERTICAL

            valido = 1;

            // HORIZONTAL
            if (direcao == 0)
            {

                if (coluna + tamanho > COLUNA)
                {
                    valido = 0;
                }
                else
                {
                    for (int i = 0; i < tamanho; i++)
                    {
                        if (tabuleiro[linha][coluna + i] != 0)
                        {
                            valido = 0;
                            break;
                        }
                    }
                }

                if (valido)
                {
                    for (int i = 0; i < tamanho; i++)
                    {
                        tabuleiro[linha][coluna + i] = 3;
                    }
                }
            }

            // VERTICAL
            else
            {
                if (linha + tamanho > LINHA)
                {
                    valido = 0;
                }
                else
                {
                    for (int i = 0; i < tamanho; i++)
                    {
                        if (tabuleiro[linha + i][coluna] != 0)
                        {
                            valido = 0;
                            break;
                        }
                    }
                }

                if (valido)
                {
                    for (int i = 0; i < tamanho; i++)
                    {
                        tabuleiro[linha + i][coluna] = 3;
                    }
                }
            }
        }
            
    }
    */

    //APLICAÇÃO------------------------------------
    int origemLinha;
    int origemColuna;

    //CRUZ
    origemLinha = rand() % (LINHA - 2) + 1;
    origemColuna = rand() % (COLUNA - 2) + 1;

    for (int i = 0; i < CRUZ; i++) {
        for (int j = 0; j < CRUZ; j++) {
            
            if (cruz[i][j] == 1) {
                int l = origemLinha - 1 + i;
                int c = origemColuna - 1 + j;
                tabuleiro[l][c] = 5;
                
            }
        }
    }

    //CONE
    origemLinha = rand() % (LINHA - 2) + 1;
    origemColuna = rand() % (COLUNA - 2) + 1;

    for (int i = 0; i < CONE; i++) {
        for (int j = 0; j < CONE; j++) {

            if (cone[i][j] == 1) {
                int l = origemLinha - 1 + i;
                int c = origemColuna - 1 + j;
                tabuleiro[l][c] = 6;
            }
        }
    }

    //OCTAEDRO
    origemLinha = rand() % (LINHA - 2) + 1;
    origemColuna = rand() % (COLUNA - 2) + 1;

    for (int i = 0; i < OCTAEDRO; i++) {
        for (int j = 0; j < OCTAEDRO; j++) {

            if (octaedro[i][j] == 1) {
                int l = origemLinha - 1 + i;
                int c = origemColuna - 1 + j;
                tabuleiro[l][c] = 8;
            }
        }
    }

    // TABULEIRO
    printf("\n=============================\n");
    printf("   TABULEIRO BATALHA NAVAL   ");
    printf("\n=============================\n");

    // CABEÇALHO (A --> J)---------
    printf("    ");
    for (int j = 0; j < COLUNA; j++)
    {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    // LINHAS (1 --> 10)-----------
    for (int i = 0; i < LINHA; i++)
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

        for (int j = 0; j < COLUNA; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
