#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float S = 0, termo1 = 1;
    for (float i = 0; i < 40; i++){
        S += termo1 / pow(2, i);
        termo1 += 2;
    }
    printf("%.2f\n", S);
}