#include <stdio.h>

int main(void){
	
	int Number;
	scanf("%d", &Number);
	
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	
	while(Number > 0){
		int total = Number % 10;
		sum1 += total;
		Number /= 10;
	}
	
	while(sum1 > 0){
		int total = sum1 % 10;
		sum2 += total;
		sum1 /= 10;
	}
	
	while(sum2 > 0){
		int total = sum2 % 10;
		sum3 += total;
		sum2 /= 10;
	}
	
	printf("%d", sum3);
	
	return 0;
}
