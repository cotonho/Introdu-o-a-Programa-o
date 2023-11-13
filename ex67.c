#include <stdio.h>
#include <stdlib.h>

int somaAnt(int n){
    if(n > 0){
        return n + somaAnt(n - 1);
    }
    else{
        return 0;
    }
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d", somaAnt(n));
}