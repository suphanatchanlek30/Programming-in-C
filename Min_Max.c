#include <stdio.h>

int main(void) {
    int m, i, j;

    // Input Number
    scanf("%d", &m);
    int M[m];

    // Input array
    for(i = 0; i < m; i++) {
        scanf("%d", &M[i]);
    }

    // Calculate Max, Min
    for(i = 0; i < m; i++) {
        for (j = 0; j < m-i-1; j++)
        {
            if(M[j] > M[j+1]) {
                int Max = M[j];
                M[j] = M[j+1];
                M[j+1] = Max;
            }
        }
    }

    printf("%d\n", M[0]);
    printf("%d\n", M[m-1]);


    return 0;
}