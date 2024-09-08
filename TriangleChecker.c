#include <stdio.h>

int main(void) {
    int length_of_a, length_of_b, length_of_c;

    // Input Length
    scanf("%d", &length_of_a);
    scanf("%d", &length_of_b);
    scanf("%d", &length_of_c);

    int NoTriangle = 0;
    int NoLength = 0;

    int equilateral_triangle = 1;
    int isosceles_triangle = 2;
    int scalene_triangle = 3;

    // Calculate 
    if(length_of_a + length_of_b > length_of_c && length_of_a + length_of_c > length_of_b && length_of_b + length_of_c > length_of_a){
        if(length_of_a == length_of_b && length_of_b == length_of_c && length_of_c == length_of_a) {
            printf("%d\n", equilateral_triangle);
            if(length_of_a >= length_of_b && length_of_a >= length_of_c) {
                printf("%d\n", length_of_a);
            } else if(length_of_b >= length_of_a && length_of_b >= length_of_c) {
                printf("%d\n", length_of_b);
            } else {
                printf("%d\n", length_of_c);
            }
        } else if (length_of_a == length_of_b || length_of_b == length_of_c || length_of_c == length_of_a){
            printf("%d\n", isosceles_triangle);
            if(length_of_a >= length_of_b && length_of_a >= length_of_c) {
                printf("%d\n", length_of_a);
            } else if(length_of_b >= length_of_a && length_of_b >= length_of_c) {
                printf("%d\n", length_of_b);
            } else {
                printf("%d\n", length_of_c);
            }
        } else if (length_of_a != length_of_b && length_of_b != length_of_c && length_of_c != length_of_a){
            printf("%d\n", scalene_triangle);
            if(length_of_a >= length_of_b && length_of_a >= length_of_c) {
                printf("%d\n", length_of_a);
            } else if(length_of_b >= length_of_a && length_of_b >= length_of_c) {
                printf("%d\n", length_of_b);
            } else {
                printf("%d\n", length_of_c);
            }
        }
    } else {
        printf("%d\n", NoTriangle);
        printf("%d\n", NoLength);
    }

    return 0;
}