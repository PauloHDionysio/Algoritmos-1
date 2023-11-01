#include <stdio.h>

int main() {
    int N, X, count = 0;
    scanf("%d", &N);
        for (int i = 0; i < N; i++){
            scanf("%d", &X);
            count = 0;
            for (int i = 1; i <= X; i++){
                if (X % i == 0){
                    count++;
                }                
            }
            if (count > 2)
                printf("%d nao eh primo\n", X);
            else
                printf("%d eh primo\n", X);
        }
    return 0;
}