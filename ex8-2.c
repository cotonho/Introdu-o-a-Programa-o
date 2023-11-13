#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Digite um valor de 1 a 10: ");
    scanf("%d", &n);

    printf("***Tabuada de %d***\n", n);
    for(i=0; i<11; i++){
        printf("%d X %d = %d \n", n, i, n * i);
    }


    return 0;
}
