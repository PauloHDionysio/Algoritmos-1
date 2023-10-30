#include <stdio.h>
#include <math.h>

int main(){
    int N, c=0, i, t;
    scanf("%d", &N);
    while (N){
        c=0;
        t=0;
        
        if(N==0) return 0;
        while(!c){
            t++;
            int a[N];
            for (i=0;i<N;i++){
                scanf("%d", &a[i]);
            }
            c=1;
            for (i=0;i<N-1;i++){
                if (a[i]>a[i+1]) c=0;
            }
            
            
        }
        printf("%d\n", t);
        scanf("%d", &N);
        
    }
}