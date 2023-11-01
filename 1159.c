#include <stdio.h>
 
int main() {
    int X, soma = 0;
    scanf("%d", &X);
        while (X != 0){
            soma = 0;
            for (int i = 0; i < 5; i++){
                if(X % 2 == 0){
                    soma += X;
                    X += 2;
                }else{
                    X++;
                    soma += X;
                    X += 2;
                }
            }
            printf("%d\n", soma);
            scanf("%d", &X);
        }
        
    
}