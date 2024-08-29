#include <stdio.h>

int main(void) {
    int Number_integer1, Number_integer2, Number_integer3;

    // Input Number_integer1, Number_integer2, Number_integer3
    printf("Please enter length of each side of your triangle: ");
    scanf("%d %d %d", &Number_integer1, &Number_integer2, &Number_integer3);

    // Calculate
    if(Number_integer1 > 0 && Number_integer2 > 0 && Number_integer3 > 0 && (Number_integer1 + Number_integer2 > Number_integer3) && (Number_integer1 + Number_integer3 > Number_integer2) && (Number_integer2 + Number_integer3 > Number_integer1)){
        if(Number_integer1 == Number_integer2 && Number_integer2 == Number_integer3){
            printf("This is an equilateral triangle triangle.");
        } else if (Number_integer1 == Number_integer2 || Number_integer2 == Number_integer3 || Number_integer1 == Number_integer3){
            printf("This is an isosceles triangle.");
        } else if (Number_integer1 != Number_integer2 && Number_integer1 != Number_integer3 && Number_integer2 != Number_integer3){
            printf("This is a scalene triangle.");
        }
    } else {
        printf("This is NOT a possible triangle.");
    }

    return 0;
}