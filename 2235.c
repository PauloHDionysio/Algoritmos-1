#include <stdio.h>

int main(){
    int s1, s2, s3, dif1, dif2, dif3, n1, n2, n3;
        scanf("%d %d %d", &n1, &n2, &n3);
            if(n1 - n2 == 0 || n1 - n3 == 0 || n2 - n3 == 0)
                printf("S\n");
            else 
                if(n1 + n2 - n3 == 0 || n2 - n1 + n3 == 0 || n3 - n1 + n2 == 0)
                printf("S\n");
                else if(n1 - n2 - n3 == 0 || n2 - n1- n3 == 0 || n3 - n1 - n2 == 0)
                printf("S\n");
            else 
                printf("N\n");
            return 0;
}