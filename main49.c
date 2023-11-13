#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[10][10], r, linha, coluna;

    printf("Digite os valores: \n");
    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
            scanf("%d", &m[linha][coluna]);
        }
    }

        for(coluna = 0; coluna < 10; coluna++){
                    r = m[1][coluna] ;
                    m[1][coluna] = m[7][coluna];
                    m[7][coluna] = r;
                }
        for(linha = 0; linha < 10; linha++){
                    r = m[linha][3];
                    m[linha][3] = m[linha][9];
                    m[linha][9] = r;
                }

        //print
        for(linha = 0; linha < 10; linha++){
            for(coluna = 0; coluna < 10; coluna++){
                printf("%d", m[linha][coluna]);
            }
            printf("\n");
        }
    return 0;
}
