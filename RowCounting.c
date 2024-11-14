#include <stdio.h>

int main(void){
	int R, C;
	scanf("%d %d", &R, &C);
	
	int i,j;
	int number = 1;
	for(i=1;i<=R;i++){
		for(j=1;j<C;j++){
			printf("%d ", number++);
		}
		printf("\n");
	}
	return 0;
}
