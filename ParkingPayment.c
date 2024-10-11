#include <stdio.h>

int main(void){
	int in_hour, in_minute;
	int out_hour, out_minute;
	int price;
	
	scanf("%d", &in_hour);
	scanf("%d", &in_minute);
	scanf("%d", &out_hour);
	scanf("%d", &out_minute);
	
	int total_hour, total_minute;
	total_hour = out_hour - in_hour;
	total_minute = out_minute - in_minute;
	
	int last_minute;
	int total;
	
	if(total_minute >= 1){
		last_minute = total_hour += 1;
	}
	
	if(total_hour == total_minute <= 15) {
		price = 0;
	} else if (total_hour <= 3){
		price = total_hour * 10;
	} else if (total_hour >= 4 && total_hour <= 6){
		total = total_hour - 3;
		price = (total * 20) + 30;
	} else if (total_hour > 6 ) {
		price = 200;
	}
	
	printf("%d", price);
	return 0;
}
