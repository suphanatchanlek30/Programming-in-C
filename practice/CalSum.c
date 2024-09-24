#include <stdio.h>

int main(void) {
    int number, i, sum = 0;

    scanf("%d", &number);

    for(i = 1; i <= number; i++){
        sum += i;
    }

    printf("%d", sum);
    return 0;
}