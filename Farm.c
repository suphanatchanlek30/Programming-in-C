#include <stdio.h>

// Function meadow
double calculateMeadowArea(int X) {
    return (X / 4.0) * (X / 4.0);
}

// Function river
double calculateRiverArea(int X) {
    return (X / 2.0) * (X / 4.0);
}

// Function mountain
double calculateMountainArea(int X) {
    return (X / 2.0) * (X / 2.0);
}

int main(void) {
    int X, Y;
    double area;

    // Input
    scanf("%d %d", &X, &Y);

    // Call function Calculate
    switch (Y) {
        case 1: // ทุ่งโล่ง
            area = calculateMeadowArea(X);
            break;
        case 2: // ติดกับแม่น้ำ
            area = calculateRiverArea(X);
            break;
        case 3: // ภูเขา
            area = calculateMountainArea(X);
            break;
        default:
            printf("Invalid type\n");
            return 1;
    }

    // Output
    printf("%.6f\n", area);

    return 0;
}