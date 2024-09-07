#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;

    scanf("%lf %lf", &a, &b);
    c = sqrt(pow(a, 2) + pow(b, 2));

    printf("%.6lf", c);
    return 0;
}