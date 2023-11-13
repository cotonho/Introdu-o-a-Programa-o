#include <stdio.h>
#include <stdlib.h>

int Epositivo(int n1){
    if(n1 >= 0){
        return 1;
    }
    else{
        return 0;
    }
}

int fatorial(int n1){
    int n = n1;
    for(int i = 1; i < n1; i++){
        n *= i;
    }
    return n;
}

int main()
{
    float n1;

    printf("Digite um n�mero: ");
    scanf("%f", &n1);


    if(Epositivo(n1)){
        printf("%d", fatorial(n1));
    }
    else{
        printf("O valor � negativo e n�o pode ser fatorado");
    }

    return 0;
}
