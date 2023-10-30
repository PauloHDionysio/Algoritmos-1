#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int X, Z;
    scanf("%d %d", &X, &Z);
    while(Z <= X){
        scanf("%d", &Z);
    }
    int soma = 0, count = 0;
    while (soma < Z){
        soma += X;
        X++;
        count++;
    }
    printf("%d\n", count);
    
}