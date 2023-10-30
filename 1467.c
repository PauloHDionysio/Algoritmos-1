#include <stdio.h>

int main(){
    char ch;
    int A, B, C;
        do{
        scanf("%d %d %d", &A, &B, &C);
        }while(A != 1 && A != 0 || B != 1 && B != 0 || C != 1 && C != 0);

        do{
            if(A == B && A == C && C == B)
            printf("*\n");
            if(B == A && C != A)
            printf("C\n");
            if(C == A && B != A)
            printf("B\n");
            if(B == C && A != B)
            printf("A\n");
        
        }while((scanf("%d %d %d", &A, &B, &C) != EOF));
    return 0;
}