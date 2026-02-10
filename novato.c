#include <stdio.h>

int main() {

    // Criando um tabuleiro 5x5 inicializado com 0 (sem navios)
    int tabuleiro[5][5] = {0};

    // -------------------------------
    // Navio 1 - Horizontal
    // Começa na linha 1, coluna 1 e ocupa 3 posições
    // -------------------------------
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;

    // -------------------------------
    // Navio 2 - Vertical
    // Começa na linha 0, coluna 4 e ocupa 3 posições
    // -------------------------------
    tabuleiro[0][4] = 3;
    tabuleiro[1][4] = 3;
    tabuleiro[2][4] = 3;

    // Exibindo as coordenadas ocupadas pelos navios
    printf("Coordenadas dos navios:\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 3) {
                printf("Navio na coordenada: (%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}
