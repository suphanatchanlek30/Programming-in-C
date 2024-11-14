#include <stdio.h>

int main(void){
	int R, C;
	scanf("%d %d", &R, &C);
	int i, j;
	for(i=0;i<=R;i++){
		for(j=0;j<=C;j++){
			printf("(%d, %d) ", i, j);
		}
		printf("\n");
	}
	return 0;
}
