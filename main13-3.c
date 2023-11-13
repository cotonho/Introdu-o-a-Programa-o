#include <stdio.h>

int main() {
    int matrizOriginal[3][3];
    int matrizTransposta[3][3];

    printf("Digite os elementos da matriz 3x3: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrizOriginal[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizTransposta[j][i] = matrizOriginal[i][j];
        }
    }


    printf("\nMatriz original:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrizOriginal[i][j]);
        }
        printf("\n");
    }


    printf("\nMatriz transposta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrizTransposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}


