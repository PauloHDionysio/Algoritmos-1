#include <stdio.h>

int main(){
    char direcao[1001], direcao1[] = "NLSO";
    int N, soma = 0;
        scanf("%d", &N);
            do{
                soma = 1;
                scanf("%s", direcao);
                for(int i = 0; i < N; i++){
                    if(direcao[i] == 'D'){
                        soma++;
                            if(soma > 4)
                            soma = 1;
                    }
                    else{
                        soma--;
                            if(soma == 0)
                            soma = 4;
                    }
                }
                printf("%c\n", direcao1[soma - 1]);

                scanf("%d", &N);
            }while(N != 0);
    return 0;     
}