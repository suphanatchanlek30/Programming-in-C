#include <stdio.h>

int main(void) {
    int n;
    int i;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int currentNumber = arr[0];
    int currentCount = 1;

    int maxNumber = currentNumber;
    int maxCount = currentCount;

    for (i = 1; i < n; i++) {
        if (arr[i] == currentNumber) {
            currentCount++;
        } else {
            if (currentCount > maxCount || 
               (currentCount == maxCount && currentNumber > maxNumber)) {
                maxCount = currentCount;
                maxNumber = currentNumber;
            }
            currentNumber = arr[i];
            currentCount = 1;
        }
    }

    if (currentCount > maxCount || 
       (currentCount == maxCount && currentNumber > maxNumber)) {
        maxCount = currentCount;
        maxNumber = currentNumber;
    }

    printf("%d %d\n", maxNumber, maxCount);

    return 0;
}

