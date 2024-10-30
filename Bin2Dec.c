#include <stdio.h>
#include <math.h>

int main() {
    int N;
    int decimal = 0;
    int i;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        int bit;
        scanf("%d", &bit);

        decimal += bit * pow(2, N - 1 - i);
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}

