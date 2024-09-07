#include <stdio.h>

int main(void) {
    int X1, S, X2;

    // Input X1, S
    scanf("%d %d", &X1, &S);

    // Calculate X2
    X2 = (2*S) - X1;

    // Output X2
    printf("%d\n", X2);
    return 0;
}