#include <stdio.h>

int main(void) {

    float height_mother, height_father;
    float average_height;
    float plus_height, minus_height;

    printf("Enter the height of the mother (centimeters): ");
    scanf("%f", &height_mother);
    printf("Enter the height of the father (centimeters): ");
    scanf("%f", &height_father);

    average_height = (height_mother + height_father) / 2.0;

    plus_height = average_height + 13.5;
    minus_height = average_height - 13.5;

    printf("The possible height of the child is between %.2f to %.2f centimeters.\n", minus_height, plus_height);

    return 0;
}