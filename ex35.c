#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    n = 2;
    for(i=0; i < 100; i++){
        printf("%d, ", n);
        n += 2;
    }
    return 0;
}
