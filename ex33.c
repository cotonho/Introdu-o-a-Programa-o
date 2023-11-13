#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main()
{
    int lista[] = {10, 9, 7, 12, 14, 16, 18, 20, 4, 27};
    int n = sizeof(lista) / sizeof(lista[0]), i;

    bubbleSort(lista, n);

    for (i=0; i<n; i++){
        printf("%d", lista[i]);
        if (i < 9){
            printf(" ,");
        }
    }

    return 0;
}
