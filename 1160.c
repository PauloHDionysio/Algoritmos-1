#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int T, PA, PB, anos;
    float G1, G2;

    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        scanf("%d %d %f %f", &PA, &PB, &G1, &G2);
        anos = 0;
        while(PA <= PB){
            PA = PA + (PA * G1/100);
            PB = PB + (PB * G2/100);
            anos++;
            if(anos > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(anos <= 100){
            printf("%d anos.\n", anos);
        }
        
    }    
    
    return 0;
}