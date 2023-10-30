#include <stdio.h>
#include <string.h>

int main() {
    char msg[1000];
    
    fgets(msg, sizeof(msg), stdin);

    for (int i = 0; i < strlen(msg); i++) {
        if (msg[i] == 'p') {
            memmove(&msg[i], &msg[i + 1], strlen(msg) - i);
            i--; 
        }
    }
    printf("%s\n", msg);

    return 0;
}