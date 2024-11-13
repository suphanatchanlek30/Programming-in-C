#include <stdio.h>

void sortArray(int arr[], int size) {
    int temp;
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(void) {
    int N, M;
    scanf("%d", &N);
    int arr1[N];
    int i, j;

    for (i = 0; i < N; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &M);
    int arr2[M];
    for (i = 0; i < M; i++) {
        scanf("%d", &arr2[i]);
    }

    int truee[N];
    int count = 0;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (arr1[i] == arr2[j]) {
                truee[count++] = arr1[i];
                break;
            }
        }
    }

    sortArray(truee, count);

    for (i = 0; i < count; i++) {
        printf("%d ", truee[i]);
    }

    return 0;
}

