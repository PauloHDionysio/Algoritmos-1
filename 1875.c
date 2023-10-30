#include <stdio.h>


int main() {
    int teste1, teste2, contG, contB, contR;
    char marcou, sofreu;
        scanf("%d", &teste1);
            for(int i = 0; i < teste1; i++){
                scanf("%d", &teste2);
                    for(int j = 0; j < teste2; j++){
                    contG = 0;
                    contB = 0;
                    contR = 0;
                        scanf("%c %c", &marcou, &sofreu);
                            if (marcou == 'G' && sofreu == 'R')
                                contG++;
                            if(marcou == 'G' && sofreu == 'B')
                                contG+=2;
                            if(marcou == 'R' && sofreu == 'B')
                                contR++;    
                            if(marcou == 'R' && sofreu == 'G')
                                contG+=2;
                            if(marcou == 'B' && sofreu == 'G')
                                contB++;
                            if(marcou == 'B' && sofreu == 'R')
                                contR+=2;                        
                    }
                        if(contR == contB && contR == contG)
                            printf("trempate\n");
                        if(contR > contB && contR == contG 
                        || contR == contB && contR > contG 
                        || contB > contR && contB == contG
                        || contG > contR && contG == contB)
                            printf("empate\n");
                        if(contR > contB && contR > contG)
                            printf("red\n");
                        if(contB > contR && contB > contG)
                            printf("blue\n");
                        if(contG > contR && contG > contB)
                            printf("green\n");
            }
    return 0;
}