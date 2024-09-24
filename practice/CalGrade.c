#include <stdio.h>

int main(void) {
    int score;

    scanf("%d", &score);

    if(score >= 90 && score <= 100){
        printf("A");
    } else if (score >= 85 && score <= 89){
        printf("B+");
    } else if (score >= 75 && score <= 84){
        printf("B");
    } else if (score >= 70 && score <= 74){
        printf("C+");
    } else if (score >= 60 && score <= 69){
        printf("C");
    } else if (score >= 0 && score <= 59){
        printf("See you next semester");
    } else {
        printf("Invalid value");
    }

    return 0;
}