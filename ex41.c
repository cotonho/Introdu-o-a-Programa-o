#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[100], i;

    for(i = 0; i < 100; i++){
        valores[i] = i + 1;
        printf("%d\n", valores[i]);
    }


    return 0;
}
