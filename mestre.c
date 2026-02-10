#include <stdio.h>

int main() {

    // ================================
    // MATRIZES DAS HABILIDADES (5x5)
    // ================================
    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    // ================================
    // HABILIDADE 1 - CONE
    // Formato:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    // ================================
    for (int i = 0; i < 3; i++) {                 // controla as linhas
        for (int j = 2 - i; j <= 2 + i; j++) {    // controla as colunas
            cone[i][j] = 1;
        }
    }

    // ================================
    // HABILIDADE 2 - CRUZ
    // Formato:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    // ================================
    for (int i = 0; i < 5; i++) {
        cruz[2][i] = 1;   // linha central
        cruz[i][2] = 1;   // coluna central
    }

    // ================================
    // HABILIDADE 3 - OCTAEDRO
    // Formato:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0
    // ================================
    octaedro[0][2] = 1;

    for (int j = 1; j <= 3; j++) {
        octaedro[1][j] = 1;
    }

    octaedro[2][2] = 1;

    // ================================
    // EXIBIÇÃO DAS MATRIZES
    // ================================

    // Exibindo o Cone
    printf("Habilidade CONE:\n\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Exibindo a Cruz
    printf("Habilidade CRUZ:\n\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Exibindo o Octaedro
    printf("Habilidade OCTAEDRO:\n\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
