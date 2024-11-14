#include <stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	int InterArrivalTime[n];
	int ServiceTime[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d %d", &InterArrivalTime[i], &ServiceTime[i]);
	}
	return 0;
}
