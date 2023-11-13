#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int repete(int vetor[], int num){
    int num_repete = 0;

    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
        if(num == vetor[i]){
            num_repete++;
        }
    }
    return num_repete;

}

int main()
{
    srand(time(NULL));

    int v[10], n;

    printf("valor \n");
    scanf("%d", &n);

    for(int i = 0; i < 10; i++){
        v[i] = rand() % 10;

    }

    printf("\nO valor %d repete: %d vezes", n, repete(v, n));

    return 0;
}
