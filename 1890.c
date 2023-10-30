#include <stdio.h>
#include <math.h>

int main(){
    int t, c, d, prod;
        scanf("%d", &t);
            for(int i = 0; i < t; i++){
            scanf("%d %d", &c, &d);
                if(c != 0 && d != 0){
                    prod = pow(26, c) * pow(10, d);
                    printf("%d\n", prod);
                }
                else if(c == 0 && d == 0){
                    prod = 0 + 0;
                    printf("%d\n", prod);
                }
                else if(c == 0){
                    prod = 0 + pow(10, d);
                    printf("%d\n", prod);
                }
                else if(d == 0){
                    prod = pow(26, c) + 0; 
                    printf("%d\n", prod);
                }
            }
    return 0;
}