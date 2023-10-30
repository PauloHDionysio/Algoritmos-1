#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 10000

int main(){
    int n, t, cont = 0; 
        while(scanf("%d", &n) && n != 0){
            while(true){
            bool a = false;
            for(int i = 1; i <= n; i++){
            scanf("%d", &t);
                if(t!=i)
                    a = true;
            }
            cont++;
            if(a == false)
                break;
            }
        }
        printf("%d\n", cont);
    return 0;
}