#include <stdio.h>
int main(){
    int VG1, VG2, a1, d1, lvl1, bonus, n, a2, d2, lvl2;
        scanf("%d", &n);
            for(int i = 0; i < n; i++){
                bonus = 0;
                VG1 = 0;
                VG2 = 0;
                scanf("%d", &bonus);
                scanf("%d %d %d", &a1, &d1, &lvl1);
                scanf("%d %d %d", &a2, &d2, &lvl2);
                    VG1 = ((a1 + d1)/2);
                    VG2 = ((a2 + d2)/2);
                        if(lvl1%2 == 0){
                            VG1 += bonus;
                        }
                        if(lvl2%2 == 0){
                            VG2 += bonus;
                        }
                        
                            if(VG1 > VG2){
                                printf("Dabriel\n");
                            }
                            if(VG2 > VG1){
                                printf("Guarte\n");
                            }
                            if(VG1 == VG2){
                                printf("Empate\n");
                            }
            }
    return 0;
}