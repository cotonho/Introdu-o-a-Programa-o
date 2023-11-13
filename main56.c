#include <stdio.h>
#include <stdlib.h>


int fatorial(int m[][5]){
    int valor = 0, temp = 0;

    for(int i = 0; i < 5; i++){

        for(int k = 0; k < 5; k++){

            valor = 1;
            if(m[i][k] > 0){
                for(int j = 1; j <= m[i][k]; j++){
                    valor *= j;
                }
            }
            printf(" %d ", valor);
        }
    }
}

int main()
{
    int m[5][5] = {{1, 2, 3, 4, 5},{1, 2, 3, 4, 5},{1, 2, 3, 4, 5},{1, 2, 3, 4, 5},{1, 2, 3, 4, 5} };

    fatorial(m);
    return 0;
}
