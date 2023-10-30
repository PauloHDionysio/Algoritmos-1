#include <stdio.h>

int main(){
    int n, rep, qtd2 = 0, qtd3 = 0, qtd4 = 0, qtd5 = 0;
        scanf("%d", &n);
            for(int i = 0; i < n; i++){
                scanf("%d", &rep);
                    if(rep%2==0)
                        qtd2++;
                    if(rep%3==0)
                        qtd3++;
                    if(rep%4==0)
                        qtd4++;
                    if(rep%5==0)
                        qtd5++;
            }
            printf("%d multiplo(s) de 2\n", qtd2);
            printf("%d multiplo(s) de 3\n", qtd3);
            printf("%d multiplo(s) de 4\n", qtd4);
            printf("%d multiplo(s) de 5\n", qtd5);
            
    return 0;
}