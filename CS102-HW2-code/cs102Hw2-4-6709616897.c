#include <stdio.h>

int main(void) {
    int Number1, Number2;
    int i;

    printf("Please enter the beginning integer: ");
    scanf("%d", &Number1);
    printf("Please enter the last integer: ");
    scanf("%d", &Number2);

    printf("All the numbers that can be divided by 13 are:\n");

    for(i = Number1; i <= Number2; i++){
        if(i % 13 == 0){
            printf("%d\n", i);
        }
    }

    printf("Bye!!\n");
    
    return 0;
}