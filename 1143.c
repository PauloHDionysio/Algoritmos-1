#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    int potencia;
    scanf("%d", &n);
    
    for (int i = 1; i < n+1; i++){
        potencia = i;
        for (int j = 0; j < 3; j++){
            if(j == 0){
                printf("%d", i);
            }else{
            potencia *= i;
            printf(" %d", potencia);
            }
        }
        printf("\n");
    }
    return 0;
}