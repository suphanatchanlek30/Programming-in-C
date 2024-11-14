#include <stdio.h>

int main(void){
	int M, N;
	scanf("%d %d", &M, &N);
	int K;
	scanf("%d", &K);
	int i,j;
	
	int A[K], B[K];
	for(i=1;i<=K;i++){
		scanf("%d %d", &A[i], &B[i]);
	}
	
	char map[M][N];
	for(i=1;i<=M;i++){
		for(j=0;j<=N;j++){
			map[i][j] = '_';
		}
	}
	for(i=1;i<=K;i++){
		int row = A[i];
		int col = B[i];
		map[row][col] = 'x';
	}
	
	for(i=1;i<=M;i++){
		for(j=1;j<=N;j++){
			printf("%c", map[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
