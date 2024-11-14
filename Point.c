#include <stdio.h>
#include <math.h>

int main(void){
	int N;
	scanf("%d", &N);
	int i;
	int arr[N];
	for(i=0;i<N;i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0;i<N;i++){
		printf("%d\n", (int)pow(2, arr[i]));
	}
	
	return 0; 
}
