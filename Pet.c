#include <stdio.h>

int main(){
    int x[5], c, s, u;
    for (int i = 1; i <= 5; i++){
        scanf(" %d %d %d %d", &x[0], &x[1], &x[2], &x[3]);
        u = x[0] + x[1] + x[2] + x[3];
        if (u > s){
            s = u;
            c = i;
        }
    }

    printf("%d %d", c, s);

    return 0;
}