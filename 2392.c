#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main(){
    int qtd_pedra, num_sapos, pos_inicial, distancia;
    scanf("%d %d", &qtd_pedra, &num_sapos);
    int pedras[qtd_pedra];

        // inicializando todas as pedras com zero
        for (int i = 0; i < qtd_pedra; i++){
            pedras[i] = 0;
        }

        // numero de pedras e numero de sapos
        for (int i = 0; i < num_sapos; i++){
            scanf("%d %d", &pos_inicial, &distancia);
                pedras[pos_inicial - 1] = 1;
            
            // verificacao das possiveis pedras serem ocupadas
            for(int j = pos_inicial-1 + distancia; j < qtd_pedra; j += distancia){
                pedras[j] = 1;
            }

            // verificacao das possiveis pedras serem ocupadas (na volta)
            for (int j = pos_inicial - 1 - distancia; j >= 0; j -= distancia) {
                pedras[j] = 1;
            }              
            
        }

        //printando as pedras onde podera ter sapo
        for (int i = 0; i < qtd_pedra; i++){
            printf("%d\n", pedras[i]);
        }
        
}