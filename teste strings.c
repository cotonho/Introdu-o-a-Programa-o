// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//     char n[10];

//     for(int i = 0; i < 5; i++){
//         printf("Digite alguma coisa: ");
//         gets(n);
//     }


// }

#include <stdio.h>
#include <string.h>

void main (){

    int matriz[2][3];

    for (int linha = 0; linha < 2; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    
    for (int linha = 0; linha < 2; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}