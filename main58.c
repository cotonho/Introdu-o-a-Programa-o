#include <stdio.h>
#include <stdlib.h>

int ParOuImpar(int x[],int a[],int b[]){

    int cont_A = 0, cont_B = 0;

    for(int i = 0; i < 30; i++){
        if(x[i] % 2 == 0){
            a[cont_A] = x[i];
            cont_A++;
        } else {
            b[cont_B] = x[i];
            cont_B++;
        }
    }
}

int main()
{
    int v[30] = {1, 2}, a[30], b[30];

    for(int i = 0; i < 30; i++){
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
        a[i] = 0;
        b[i] = 0;
    }

    ParOuImpar(v, &a, &b);

    printf("Pares: ");
    for(int i = 0; i < (sizeof(a)/sizeof(a[0])); i++){
        printf("%d, ", a[i]);
    }

    printf("\nImpares: ");
    for(int i = 0; i < (sizeof(b)/sizeof(b[0])); i++){
        printf("%d ", b[i]);
    }


    return 0;
}
