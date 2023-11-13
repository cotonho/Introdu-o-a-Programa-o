#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, peso, i, j10, j20, j30, j40;
    float t_peso10, t_peso20, t_peso30, t_peso40, m_peso10, m_peso20, m_peso30, m_peso40;

    j10 = 0;
    j20= 0;
    j30 = 0;
    j40 = 0;

    t_peso10 = 0;
    t_peso20 = 0;
    t_peso30 = 0;
    t_peso40 = 0;

    for(i = 0; i < 20; i++){
        printf("idade: ");
        scanf("%d", &idade);

        printf("peso: ");
        scanf("%d", &peso);

        if(idade < 11){
            t_peso10 += peso;
            j10++;
        }
        else if(idade > 10 && idade < 21){
            t_peso20 += peso;
            j20++;
        }
        else if(idade > 20 && idade < 31){
            t_peso30 += peso;
            j30++;
        }
        else{
            t_peso40 += peso;
            j40++;
        }
    }

    m_peso10 = t_peso10 / j10;
    m_peso20 = t_peso20 / j20;
    m_peso30 = t_peso30 / j30;
    m_peso40 = t_peso40 / j40;

    printf("media de peso de menores de 11 anos: %f", m_peso10);
    printf("media de peso de menores de 21 anos: %f", m_peso20);
    printf("media de peso de menores de 31 anos: %f", m_peso30);
    printf("media de peso de maiores de 31 anos: %f", m_peso40);

    return 0;
}
