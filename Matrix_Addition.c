#include <stdio.h>

int main(void) {
    int m, n, i, j;

    scanf("%d %d", &m, &n);

    int Matrix1[m][n];
    int Matrix2[m][n];
    int Sum[m][n];

    // Input Matrix 1
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &Matrix1[i][j]);
        }
    }

    // Input Matrix 2
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &Matrix2[i][j]);
        }
    }

    // Calculate Matrix
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            Sum[i][j] = Matrix1[i][j] + Matrix2[i][j];
        }
    }

    // Output Matrix
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}