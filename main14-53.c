#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Maior(int num1, int num2, int num3) {
    if (num1 > num2 && num1 > num3) {
        return num1;
    } else if (num2 > num1 && num2 > num3){
        return num2;
    } else {
        return num3;
    }
}

int main() {
    int n1, n2, n3;
    setlocale(LC_ALL, "portuguese");

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro n�mero: ");
    scanf("%d", &n3);


    int maior = Maior(n1, n2, n3);
    printf("O maior n�mero �: %d\n", maior);



    return 0;
}
