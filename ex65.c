#include <stdio.h>
#include <stdlib.h>

int multipRec(int n1, int n2){
    if(n1 > 0){
        return n2 + multipRec(n1-1, n2);
    }else{
        return 0;
    }
}

int main(){

    int n1, n2;

    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("%d", multipRec(n1, n2));
}