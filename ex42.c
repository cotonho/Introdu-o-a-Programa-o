#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[70], i;

    for(i = 0; i < 70; i++) {
        if((i+1)%3 == 0) {
            valores[i] = 10;
        }
        else{
            valores[i] = (i+1) * 10;
        }
        printf("%d\n", valores[i]);
    }

    return 0;
}
