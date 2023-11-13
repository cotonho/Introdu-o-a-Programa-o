#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[151];
    int num, tamanho_frase;

    printf("Digite uma frase: ");
    gets(c);

    tamanho_frase = strlen(c);

    for(int i = 0; i < tamanho_frase; i++){
        //esse if faz com que as letras x, y e z sejam trocados pelas primeiras letras do alfabeto
        if(c[i] >= 'x' && c[i] <= 'z' || c[i] >= 'X' && c[i] <= 'Z'){
            c[i] = c[i] - 26;
        }
        else if(c[i] == 32){
            continue;
        }
        else{
            c[i] = c[i] + 3;
        }
    }

    printf("%s", c);
    return 0;
}
