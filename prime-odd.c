#include <stdio.h>

int main(void) {
    int N, i;

    // Input Number
    scanf("%d", &N);

    int A[N];

    // Input A[]
    for(i=0; i<N; i++) {
        scanf("%d", &A[i]);
    }

    // Calculate
    for(i=0; i<N; i++) {
        if(A[i] % 2 != 0){
            printf("T\n");
        } else {
            printf("F\n");
        }
    }
    
    return 0;
}