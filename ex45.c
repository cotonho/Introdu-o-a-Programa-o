#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[21], palavra_copia[21] = {0};
    int i;

    printf("Digte uma palavra: ");
    gets(palavra);

    i = strlen(palavra);
    for(int j = 0; j < i; j++){
        palavra_copia[j] = palavra[i - j - 1];
    }
    printf("%s", palavra_copia);

    return 0;
}
