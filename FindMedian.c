#include <stdio.h>

int main(void) {
    int N;
    int numberMedian1, numberMedian2;
    double Median;

    // Input number
    scanf("%d", &N);

    // Declare the array
    int number[N];

    // Input
    for (int i = 0; i < N; i++) {
        scanf("%d", &number[i]);
    }

    // Sort
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (number[j] > number[j + 1]) {
                int temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }

    // Calculate Median
    if (N % 2 == 0) {
        numberMedian1 = N / 2 - 1;
        numberMedian2 = N / 2;
        Median = (number[numberMedian1] + number[numberMedian2]) / 2.0;
    } else {
        numberMedian1 = N / 2;
        Median = number[numberMedian1];
    }

    // Output
    printf("Min = %d\n", number[0]);
    printf("Max = %d\n", number[N - 1]);
    printf("Median = %.1lf\n", Median);

    return 0;
}
