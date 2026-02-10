#include <stdio.h>

int main() {

    // Criando o tabuleiro 10x10 e inicializando com 0
    int tabuleiro[10][10] = {0};

    // --------------------------------
    // Navio 1 - Horizontal (tamanho 4)
    // Linha 2, colunas 1 até 4
    // --------------------------------
    tabuleiro[2][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;

    // --------------------------------
    // Navio 2 - Vertical (tamanho 4)
    // Coluna 7, linhas 3 até 6
    // --------------------------------
    tabuleiro[3][7] = 3;
    tabuleiro[4][7] = 3;
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;

    // --------------------------------
    // Navio 3 - Diagonal principal (↘)
    // Começa em (0,0)
    // --------------------------------
    tabuleiro[0][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[3][3] = 3;

    // --------------------------------
    // Navio 4 - Diagonal secundária (↙)
    // Começa em (0,9)
    // --------------------------------
    tabuleiro[0][9] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;
    tabuleiro[3][6] = 3;

    // Exibindo o tabuleiro completo
    printf("Tabuleiro 10x10:\n\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
