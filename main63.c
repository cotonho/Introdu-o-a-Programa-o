#include <stdio.h>
#include <stdlib.h>

void inverte(int vet[], int tam, int i){
    int a;
    if(i < tam){
        a = vet[tam];
        vet[tam] = vet[i];
        vet[i] = a;
        inverte(vet, tam -1, i + 1);
    }
}

int main()
{
    int vet[3] = {1, 2, 3};
    int tam = sizeof(vet)/sizeof(vet)[0] -1;

    inverte(vet, tam, 0);

    for(int i = 0; i< 3; i++){
        printf("%d", vet[i]);
    }

    return 0;
}
