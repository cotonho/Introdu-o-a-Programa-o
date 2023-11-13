#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[4][4], n = 0, ni, nj;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o valor da linha[%d], coluna[%d]",i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(m[i][j] > n){
                n = m[i][j];
                ni = i;
                nj = j;
            }
        }
    }

    printf("O maior valor é %d, ele está na linha %d, coluna %d", n, ni + 1, nj + 1);

    return 0;
}
