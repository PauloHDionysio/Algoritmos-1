#include <stdio.h>
int main(){
    
    int vet[1010], aux, fun, N, E, A, B;
        scanf("%d %d", &fun, &N); //indicando o numero de funcionarios e mesas //indicando quantos eventos deverão ser processados
            
                    for(int i = 0; i < N; i++)
                        vet[i] = i;
                    
                    while(fun--){
                        scanf("%d %d", &E, &A);

                        if(E == 1){
                            scanf("%d", &B);

                            aux = vet[A];
                            vet[A] = vet[B];
                            vet[B] = aux;
                        }else{
                            aux = 0;
                            B = vet[A];

                            while(A != B){
                                B = vet[B];
                                aux++;
                                }
                            printf("%d\n", aux);
                        }
                    }
    return 0;    
}