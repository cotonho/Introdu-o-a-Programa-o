#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o valor da linha[%d], coluna[%d]",i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(m[i][j] > 10){
                printf("%d\n", m[i][j]);
            }
        }
    }
    return 0;
}
