#include <stdio.h>

int main(void) {

    float rate;
    float dollar;
    int coins_10, coins_5, coins_2, coins_1, coins_050, coins_025;

    // Input rate and dollar
    scanf("%f", &rate);
    scanf("%f", &dollar);

    // คำนวณจำนวนเงินทั้งหมดในหน่วยเงินที่แลก
    float total_dollar = rate * dollar;

    // เปลี่ยนจำนวนเงินให้เป็นหน่วย %
    int remainingAmount = (int)(total_dollar * 100 + 0.5); // แปลงเป็นเซ็นต์

    // คำนวณเหรียญ 10
    coins_10 = remainingAmount / 1000; // 10 บาท = 1000 สตางค์
    remainingAmount %= 1000;

    // คำนวณเหรียญ 5
    coins_5 = remainingAmount / 500; // 5 บาท = 500 สตางค์
    remainingAmount %= 500;

    // คำนวณเหรียญ 2
    coins_2 = remainingAmount / 200; // 2 บาท = 200 สตางค์
    remainingAmount %= 200;

    // คำนวณเหรียญ 1
    coins_1 = remainingAmount / 100; // 1 บาท = 100 สตางค์
    remainingAmount %= 100;

    // คำนวณเหรียญ 50 สตางค์
    coins_050 = remainingAmount / 50; // 50 สตางค์
    remainingAmount %= 50;

    // คำนวณเหรียญ 25 สตางค์
    coins_025 = remainingAmount / 25; // 25 สตางค์
    remainingAmount %= 25;

    // Output
    printf("%d\n", coins_10);
    printf("%d\n", coins_5);
    printf("%d\n", coins_2);
    printf("%d\n", coins_1);
    printf("%d\n", coins_050);
    printf("%d\n", coins_025);

    return 0;
}
