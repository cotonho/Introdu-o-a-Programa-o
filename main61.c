#include <stdio.h>
#include <stdlib.h>

int potencia(int val, int pot){

    if(pot > 0){
        return val * potencia(val, pot - 1);
    }

    else if(pot == 0){
        return 1;
    }
    else{
        return (val * potencia(val, pot + 1));
    }
}

int main()
{
    int val, pot;

    printf("Digite um valor: \n");
    scanf("%d", &val);
    printf("Digite a que potencia ele esta: ");
    scanf("%d", &pot);

    printf("%d", potencia(val, pot));

    return 0;
}
