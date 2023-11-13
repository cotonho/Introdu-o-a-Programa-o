#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int lista[30], i, j;
    j = 0;

    srand(time(NULL));


    while(j<30){
        i = rand() % 100;
        if(i % 3 == 0){
            lista[j] = i;
            printf("%d: %d\n", j, i);
            j++;
        }
    }


    return 0;
}
