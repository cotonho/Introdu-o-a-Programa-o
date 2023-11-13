#include <stdio.h>
#include <stdlib.h>

int minimax(int m[][5]){
    int temp = 0, valor = 0;

    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 5; j++){

            if(valor < m[i][j]){
                valor = m[i][j];
                temp = i;
            }
        }
    }

    int temp2 = m[temp][0];

    for(int i = 0; i < 5; i++){
        if(temp2 > m[temp][i]){temp2 = m[temp][i];}
    }

    return temp2;
}


int main()
{
    int m[5][5] = {{1, 2, 3, 4, 5},{6, 7, 8, 9, 10}, {11, 12, 13, 14, 15},{16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};

    for(int i = 0; i < 5; i++){

      for(int j = 0; j < 5; j++){

            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("%d", minimax(m));


    return 0;
}
