#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n*4; i++){
        if(i%4 != 0)
            printf("%d ", i);
        if(i%4 == 0 && i != 0)
            printf("PUM\n");
    }
    printf("PUM\n");
}