#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, p, tamanho;

    printf("Digite o tamanho da lista: ");
    scanf("%d", &tamanho);

    int valores[tamanho];

    //cria um array com 5 valores
    for(i=0; i<tamanho; i++) {
        printf("Digite um número: ");
        scanf("%d", &n);
        valores[i] = n;
    }

    //pede um valr pra verificar se ele está presente
    printf("Agora digite um número: ");
    scanf("%d", &n);

    p = 0;

    for(i=0; i<5; i++){
        if(valores[i] == p){
            p = 1;
            break;
        }
    }

    if(p == 1){
        printf("O valor %d está presente na lista.", n);
    }
    else {
        printf("O valor não está presente na lista.");
    }

    return 0;
}
