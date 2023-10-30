#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, x, y;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int soma = 0;
        scanf("%d %d", &x, &y);
        // Realizar a soma entre os valores de x e y
        if(x > y){
            for(int j = y+1; j < x; j++){
                if(j % 2 != 0){
                    soma += j;
                }
            }
        }
        else if(y > x){
            for(int j = x+1; j < y; j++){
                if(j % 2 != 0){
                    soma += j;
                }
            }
        }
        else{
            soma = 0;
        }
        printf("%d\n", soma);
    }
    return 0;
}