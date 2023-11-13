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


int main()
{
    float n1, n2;

    printf("Digite um número: ");
    scanf("%f", &n1);


    if(Epositivo(n1)){
        printf("O valor é Positivo");
    }
    else{
        printf("O valor é Negativo");
    }

    return 0;
}
