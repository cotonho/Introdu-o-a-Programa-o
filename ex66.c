#include <stdio.h>
#include <stdlib.h>

int fatDup(int n){
    if(n % 2 != 0){
        if(n > 1){
            return n * fatDup(n-2);
        }
        else{
            return 1;
        }
    }
    else{
        printf("O valor nao e impar."); 
        return 0;
    }
}

int main(){
    int n1;

    scanf("%d", &n1);

    printf("%d", fatDup(n1));
}