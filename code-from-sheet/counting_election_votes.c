#include <stdio.h>

int main(void) {
    // มีผู้สมัคอยู่ 5 คน คือ เบอร์ 1, 2, 3, 4, 5 
    // รับตัวเลขการเลือกตั้งเรื่อยๆจน รับเลข -999 มาโปรแกรมถึงจะหยุดรับและให้แสดงผล มีผู้มาลงคะแนนเสียงทั้งหมดกี่คน
    // มีบัตรเสียกี่ใบ
    // บัตรเสียถ้าเลขที่ รับเข้ามาคือ เลข 0

    // จำนวนคนมาลงเสียงเลือกตั้งทั้งหมด
    int cardCount = 0;
    // จะนวนบัตรเสีย
    int Invalid_card = 0;

    // number
    int number1 = 0, number2 = 0, number3 = 0, number4 = 0, number5 = 0;

    int choice;

    do{
        // Input All Number
        scanf("%d", &choice);

        // Calculate
        if(choice == 1){
            number1 += 1;
            cardCount += 1;
        } else if(choice == 2){
            number2 += 1;
            cardCount += 1;
        } else if(choice == 3){
            number3 += 1;
            cardCount += 1;
        } else if(choice == 4){
            number4 += 1;
            cardCount += 1;
        } else if(choice == 5){
            number5 += 1;
            cardCount += 1;
        } else if(choice == 0){
            Invalid_card += 1;
            cardCount += 1;
        }

    } while(choice != -999);

    // Output
    printf("number1 = %d\n", number1);
    printf("number2 = %d\n", number2);
    printf("number3 = %d\n", number3);
    printf("number4 = %d\n", number4);
    printf("number5 = %d\n", number5);
    printf("-----------------------------------\n");
    printf("Invalid_card = %d\n", Invalid_card);
    printf("cardCount = %d\n", cardCount);

    return 0;
}