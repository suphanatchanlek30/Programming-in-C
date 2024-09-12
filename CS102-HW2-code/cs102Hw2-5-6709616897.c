#include <stdio.h>

int main(void) {

    int Number1, i = 2, isPrime = 1;
    // 1 == true and 0 == false

    do
    {
        printf("Please enter an integer <between 2 to 9999999> : ");
        scanf("%d", &Number1);

        if (Number1 < 2 || Number1 > 9999999) {
            printf("%d is not between 2 to 9999999, please re-enter.\n", Number1);
        }

    } while (Number1 < 2 || Number1 > 9999999);
    
    if(Number1 == 2) {
        isPrime = 1; // true
    } else {
        // ถ้า num = 10
        // i*i = 4
        // i*i <= num ให้ i++
        // คำนวน 10 % 4 == 0 จริง
        // ให้ isPrime = 0 แสดงว่า ไม่เป็นจำนวนเฉพาะ
        // เมื่อ หารลงตัว == 0 จะทำการ break ทันที
        for (i = 2; i * i <= Number1; i++){
            if (Number1 % i == 0) {
                isPrime = 0; // false ไม่เป็นจำนวนเฉพาะ
                break; // เมื่อเจอตัวหารลงตัว หยุดลูปทันที
            } else {
                isPrime = 1; // true เป็นจำนวนเฉพาะ
            }
        }
    }

    // ถ้ารับเข้าเป็น เลข 3 จะไม่เข้าเงื่อนไขลูป จะข้ามลูป และยังคงค่า isPrime = 1 เหมือนเดิมไม่เปลี่ยน

    // true == 1 แสดงว่า เป็นจำนวนเฉพาะ
    if (isPrime) {
        printf("%d is a prime number.\n", Number1);
    } else {
        printf("%d is not a prime number.\n", Number1);
    }

    return 0;
}