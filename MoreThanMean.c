#include <stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	
	int count = 0;
	float arr[n];
	int i;
	float sum = 0;
	
	for(i=0;i<n;i++){
		scanf("%f", &arr[i]);
	}
	
	for(i=0;i<n;i++){
		sum += arr[i];
	}
	
	float avg = sum / n;
	
	for(i=0;i<n;i++){
		if(arr[i] > avg){
			count += 1;
		}
	}
	
	printf("%d", count);
	
	return 0;
}
