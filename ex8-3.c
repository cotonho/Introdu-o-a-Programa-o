#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, h, ex, total;

    printf("Digite o sal�rio min�mo: ");
    scanf("%f", &sal);
    printf("\nDigite quantas horas foram trabalhadas: ");
    scanf("%f", &h);
    printf("\nDigite quantas horas extras foram trabalhadas: ");
    scanf("%f", &ex);

    total = (h * (sal*1/8)) + (ex * (sal * 1/4));

    printf("\nO valor desse sal�rio ser� R$%.2f", total);

    return 0;
}
