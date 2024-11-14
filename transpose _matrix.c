#include <stdio.h>

int main(void){
	int R, C;
	scanf("%d %d", &R, &C);
	int matrix[R][C];
	int i, j;
	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	
	for(j=0;j<C;j++){
		for(i=0;i<R;i++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
