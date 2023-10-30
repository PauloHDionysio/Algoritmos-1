#include <stdio.h>

int main() {
    char D[] = {A,C,G,T}, S[] = {A,C,G,T}, str;

        while((scanf("%s %s"), D, S) != EOF){
            if (!strstr(D, S))
                printf("Nao Resistente\n");
            else
                printf("Resistente\n");
        }
    return 0;
}