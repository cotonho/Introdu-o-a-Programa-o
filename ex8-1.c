#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int i;
    while(i<=10){
        printf("%d\n", 10 - i);
        i++;
        sleep(1);
    }

    printf("Fim.");
    return 0;
}
