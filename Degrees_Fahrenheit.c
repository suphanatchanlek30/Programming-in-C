#include <stdio.h>

int main(void) {
    float Fahrenheit1, Fahrenheit2, Fahrenheit3;

    printf("Please input temperature1 (F): ");
    scanf("%f", &Fahrenheit1);
    printf("Please input temperature2 (F): ");
    scanf("%f", &Fahrenheit2);
    printf("Please input temperature3 (F): ");
    scanf("%f", &Fahrenheit3);

    double degrees_Celsius1, degrees_Celsius2, degrees_Celsius3;

    degrees_Celsius1 = 5 * (Fahrenheit1 - 32) / 9;
    degrees_Celsius2 = 5 * (Fahrenheit2 - 32) / 9;
    degrees_Celsius3 = 5 * (Fahrenheit3 - 32) / 9;

    printf("temperature1: %.f F is %.2f C\n", Fahrenheit1, degrees_Celsius1);
    printf("temperature2: %.f F is %.2f C\n", Fahrenheit2, degrees_Celsius2);
    printf("temperature3: %.f F is %.2f C\n", Fahrenheit3, degrees_Celsius3);
    return 0;
}