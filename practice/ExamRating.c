#include <stdio.h>

int main(void){
    int a1, a2;
    int b1, b2;
    int c1, c2;
    int rating1 = 0;
    int rating2 = 0;

    scanf("%d %d %d", &a1, &b1, &c1);
    scanf("%d %d %d", &a2, &b2, &c2);

    // a
    if(a1 > a2){
        rating1 += 1;
    } else if (a1 == a2){
        rating1 += 0;
        rating2 += 0;
    } else {
        rating2 += 1;
    }

    // b
    if(b1 > b2){
        rating1 += 1;
    } else if (b1 == b2){
        rating1 += 0;
        rating2 += 0;
    } else {
        rating2 += 1;
    }

    // c
    if(c1 > c2){
        rating1 += 1;
    } else if (c1 == c2){
        rating1 += 0;
        rating2 += 0;
    } else {
        rating2 += 1;
    }

    printf("%d %d\n", rating1, rating2);

    return 0;
}