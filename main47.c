#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[6][6], a;

    printf("Digite um valor: ");
    scanf("%d", &a);

    for(int linha = 0; linha < 6; linha++){
        for(int i = 0; i < 6; i++){
            printf("Digite um valor para a linha %d, coluna %d: ", linha, i);
            scanf("%d", &matriz[linha][i]);
            }
        }

    for(int linha = 0; linha < 6; linha++){
        for(int i = 0; i < 6; i++){
            matriz[linha][i] *= a;
            printf("%d", matriz[linha][i]);
            if(i < 5){
                printf(", ");
            }
        }
    }

    return 0;
}
