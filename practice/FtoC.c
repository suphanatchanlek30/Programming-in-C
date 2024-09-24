#include <stdio.h>

int main(void) {

    double number;

    scanf("%lf", &number);

    double C = (number - 32) * 5 / 9;

    printf("%.2lf", C);

    return 0;
}