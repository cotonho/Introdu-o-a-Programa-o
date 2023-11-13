#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[4][4], linha;


    for(linha = 0; linha < 4; linha++){
        for(int coluna = 0; coluna < 4; coluna++){
            if(coluna <= linha){
                m[linha][coluna] = (linha + 1) * (coluna + 1);
            }else{
                m[linha][coluna] = 0;
                }
            printf("%d ", m[linha][coluna]);
            }
        printf("\n");
        }


    return 0;
}
