#include <stdio.h>
 
int main() {
 
    int x,y;

    scanf("%d", &x);
    scanf("%d", &y);

    while(x > 0 && y > 0){
        if(x > y){
            int soma;
            soma = 0;
            for(int i = y; i <= x; i++){
                soma = soma + i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", soma);
        }
        else{
            int soma;
            soma = 0;
            for(int i = x; i <= y; i++){
                soma = soma + i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", soma);
        }

        scanf("%d", &x);
        scanf("%d", &y);
    }
 
    return 0;
}