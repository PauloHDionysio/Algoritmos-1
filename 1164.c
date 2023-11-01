#include <stdio.h>
 
int main() {
    int N, soma, X;
    scanf("%d", &N);
        for (int i = 1; i <= N; i++){
            scanf("%d", &X);
            soma = 0;
            for (int j = 1; j < X; j++){
                if(X % j == 0){
                    soma += j;
                }
            }
            
            if (soma == X)
                printf("%d eh perfeito\n", X);
            else
                printf("%d nao eh perfeito\n", X);
        }
    return 0;
}