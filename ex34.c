#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, t;
    float j;
    t= 0;
    for(i = 0; i < 20; i++){
        printf("digite um número: ");
        scanf("%d", &n);
        t += n;
    }

    j = t / 20;
    printf("A média é %f", j);

    return 0;
}
