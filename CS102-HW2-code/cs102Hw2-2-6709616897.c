#include <stdio.h>

int main(void) {
    int length_a, length_b, length_c;

    printf("Please enter length of each side of your triangle: ");
    scanf("%d %d %d", &length_a, &length_b, &length_c);

    if (length_a > 0 && length_b > 0 && length_c > 0 && length_a + length_b > length_c && length_b + length_c > length_a && length_c + length_c + length_a > length_c){
        if(length_a == length_b && length_b == length_c){
            printf("This is an equilateral triangle");
        } else if (length_a == length_b || length_b == length_c || length_c == length_a){
            printf("This is an isosceles triangle");
        } else if (length_a != length_b && length_b != length_c && length_c != length_a){
            printf("This is an scalene triangle");
        }
    } else {
        printf("This is NOT a possible triangle");
    }
    return 0;
}