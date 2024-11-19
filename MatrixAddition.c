#include <stdio.h>

int main(void){
	int row, col;
	scanf("%d %d", &row, &col);
	
	int arr1[row][col];
	int arr2[row][col];
	int result[row][col];
	
	int i,j;
	// matrix 1
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d", ßarr1[i][j]);
		}
	}
	
	// matrix 2
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d", arr2[i][j]);
		}
	}
	
	// sum matrix
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			result[i][j] += arr1[i][j] + arr2[i][j];
		}
	}
	
	// print
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
