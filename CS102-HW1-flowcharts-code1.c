#include <stdio.h>

int main(void) {
    float mother_height, father_height;
    float average_height;
    float plus, minus;

    // Input mother_height, father_height
    printf("Enter the height of the mother (centimeters): ");
    scanf("%f", &mother_height);

    printf("Enter the height of the father (centimeters): ");
    scanf("%f", &father_height);

    // Calculate average_height
    average_height = (father_height + mother_height) / 2.0;

    // +/- 13.5 centimeters
    plus = average_height + 13.5;
    minus = average_height - 13.5;

    // Output
    printf("The possible height of the child is between %.2f to %.2f centimeters.\n", minus, plus);

    return 0;
}