#include <stdio.h>
#include <string.h>
#define MAX 12
 
int main() {
    
    int qtd_pessoas, divint, rest;
    float cuia, garrafa, volume, div;
    char nome[MAX];
        scanf("%d %f %f", &qtd_pessoas, &cuia, &garrafa);
            for(int i = 0; i < qtd_pessoas; i++){
               gets(nome);
            }

        volume = garrafa / cuia;
        rest = (garrafa * cuia) - garrafa;


    return 0;
}