#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int somaInt(int vet[], int tam){

    if( tam == 0){
        return 0;
    }

    else if(tam >  0){
        return vet[tam - 1] + somaInt(vet, tam - 1);
    }
}

int main()
{
    srand(time(NULL));

    int vet[3];


    for(int i = 0; i < 3; i++){
        vet[i] = rand() % 10;
        printf("%d ", vet[i]);
    }

    printf("= %d", somaInt(vet, sizeof(vet)/sizeof(vet)[0]));

    return 0;
}
