#include <stdio.h>
#define MAX 3.1415
 
int main() {

    int volume, r, gas, qtdbalao;
    
        scanf("%d %d", &r, &gas);
        r = r*r*r;
        volume = (4 * (MAX * r)) / 3;
        
        qtdbalao = 0;
        while (gas > 0){
            gas -= volume;
            qtdbalao++;
        }
        
    printf("%d\n", qtdbalao - 1);
    return 0;
}