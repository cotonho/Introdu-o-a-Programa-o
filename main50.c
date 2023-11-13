#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int linhas = 60;
    int colunas = 10;

    srand(time(NULL));

    int matriz[linhas][colunas + 1];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i][colunas] = 0;
        for (int j = 0; j < colunas; j++) {
            matriz[i][colunas] += matriz[i][j];
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas + 1; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    int soma_total = 0;
    for (int i = 0; i < linhas; i++) {
        soma_total += matriz[i][colunas];
    }
    double media = (double)soma_total / linhas;
    printf("Média das somas das linhas: %.2lf\n", media);

    return 0;
}
