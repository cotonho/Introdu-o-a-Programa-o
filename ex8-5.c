#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char n1[30], n2[30];
    int p1, p2;

    printf("Digite o nome de um time: \n");
    scanf("%s", &n1);
    printf("Digite o nome d outro time: \n");
    scanf("%s", &n2);
    printf("quantos gols o primeiro time fez: \n");
    scanf("%d", &p1);
    printf("quantos gols o segundo time fez: \n");
    scanf("%d", &p2);

    if(p1 > p2){
        printf("%s venceu!", n1);
    }
    else if(p1 == p2){
        printf("empate.");
    }
    else {
        printf("%s venceu!", n2);
    }
    return 0;
}
