#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, tamanho, contagem = 0;
    char s[101], chAtual, chNovo;

    printf("Digite uma frase: ");
    gets(s);
    printf("Digite o charactere atual: ");
    scanf("%c", &chAtual);
    fflush(stdin);
    printf("Digite o novo charactere: ");
    scanf("%c", &chNovo);

    tamanho = strlen(s);

    for(i = 0; i < tamanho; i++){
        if(s[i] == chAtual){
            s[i] = chNovo;
            contagem++;
        }
    }

    printf("%s\n", s);
    printf("Número de substituições: %d", contagem);

    return 0;
}
