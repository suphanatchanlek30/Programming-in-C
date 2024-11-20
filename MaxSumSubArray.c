#include <stdio.h>

int main(void){
	int n;
	
	scanf("%d", &n);
	
	int arr[n];
	int i, j;
	
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	int sum[n];
	
	for(i=0;i<n;i++){
		sum[i] = 0;
	}
	
	for(i=0;i<n-5+1;i++){
		for(j=i;j<i+5;j++){
			sum[i] += arr[j];
		}
	}
	
	/*
	for(i=0;i<n/2+1;i++){
		printf("%d ", sum[i]);
	}
	*/
	
	int max = -1;
	for(i=0;i<n/2+1;i++){
		if(sum[i] > max){
			max = sum[i];
		}
	}
	printf("%d", max);
	
	return 0;
}
