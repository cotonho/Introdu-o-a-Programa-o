#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menor(int v[],int i){
    int a;

    if(i == 5){
        return 1000;
    }

    a = v[i];

    int b = menor(v, i + 1);

    if(a < b){
        return a;
    }else{
    return b;}


}

int main()
{
    srand(time(NULL));

    int v[5] = {60, 12, 15, 43, 60};



    printf("%d\n", menor(v, 0));
    return 0;
}
