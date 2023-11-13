#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s = 0;
    float i = 1;

    while(i <= 10){
        s += (i/(i*i));
        i++;
        s -= (i/(i*i));
        i++;
    }
    printf("%.2f\n", s);

    return 0;
}
