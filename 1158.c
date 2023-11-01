#include <stdio.h>
 
int main() {
    int N, X, Y, soma = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        soma = 0;
        scanf("%d %d", &X, &Y);
        //Y -> quantidade de vezes que vai somar
        //X -> ponto inicial
        if (X % 2 == 0){
            X++;
        }
        for (int j = 0; j < Y; j++){
            soma += X;
            X += 2;
        }
        printf("%d\n", soma);
        
    }
    
    return 0;
}