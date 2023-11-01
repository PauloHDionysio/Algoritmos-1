#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float S = 0;
    for (float i = 1; i < 101; i++){
        S += 1/i;
    }
    printf("%.2f\n", S);
    
}