#include <stdio.h>

int main(void) {

    char text;
    int Number1, Number2, Number3;

    printf("Do you want to find smallest or largest number? <S/L>: ");
    scanf("%c", &text);

    printf("Enter 3 integers: ");
    scanf("%d %d %d", &Number1, &Number2, &Number3);

    switch (text)
    {
    case 'S':
        if(Number1 <= Number2 && Number1 <= Number3){
            printf("Smallest number: %d\n", Number1);
        } else if (Number2 < Number1 && Number2 < Number3){
            printf("Smallest number: %d\n", Number2);
        } else {
            printf("Smallest number: %d\n", Number3);
        }
        break;
    case 'L':
        if(Number1 >= Number2 && Number1 >= Number3){
            printf("Largest number: %d\n", Number1);
        } else if (Number2 > Number1 && Number2 > Number3){
            printf("Largest number: %d\n", Number2);
        } else {
            printf("Largest number: %d\n", Number3);
        }
        break;
    default:
        break;
    }

    return 0;
}