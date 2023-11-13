#include <stdio.h>
#include <stdlib.h>

// Respostas ex 59 = 9, 23, 15

int somaPos(int x[], int tamanho){

    int j = tamanho;

    int soma = x[j-1];
    if(j == 0){
        return 0;
    }

        if(soma > 0){
            return soma + somaPos(x, j - 1);
        }
        else{
            return somaPos(x, j - 1);
        }
    }


int main()
{
    int v[3], soma = 0;

    for(int i = 0; i < 3; i++){
    scanf("%d", &v[i]);
    }

    int tamanho = sizeof(v)/sizeof(v)[0];

    printf("%d", somaPos(v, tamanho));
    return 0;
}
