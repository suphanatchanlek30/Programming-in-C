#include <stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	int i;
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	int hour = 3600, minute = 60, second = 1;
	
	for(i=0;i<n;i++){
		int hour1 = arr[i] / hour;
		arr[i] %= 3600;
		
		int minute1 = arr[i] / minute;
		arr[i] %= 60;
		
		int second1 = arr[i] / second;
		arr[i] %= 1;
		
		printf("%d %d %d\n", hour1, minute1, second1);
	}
	return 0;
}
