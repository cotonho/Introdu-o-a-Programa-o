#include <stdio.h>
#include <locale.h>

int Maior(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int n1, n2;
    setlocale(LC_ALL, "portuguese");

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);


    int maior = Maior(n1, n2);
    printf("O maior número é: %d\n", maior);



    return 0;
}
