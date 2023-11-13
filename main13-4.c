#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][4], n, j;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da linha[%d], coluna[%d]",i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
                n += m[i][j];
                printf("%d ", m[i][j]);

        }
        m[i][j] = n;
        n = 0;
        printf("%d\n", m[i][j]);
    }

    return 0;
}
