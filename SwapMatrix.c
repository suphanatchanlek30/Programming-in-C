#include <stdio.h>

int main(void){
	int i, j;
	int arr[4][5];
	
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	int row1, col1;
	int row2, col2;
	scanf("%d %d", &row1, &col1);
	scanf("%d %d", &row2, &col2);
	
	int temp;
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			if(i == row1 && j == col1){
				temp = arr[i][j];
				arr[i][j] = arr[row2][col2];
				arr[row2][col2] = temp;
			}
		}
	}
	
	int max1 = 0;
	int max2 = 0;
	int max3 = 0;
	int max4 = 0;
	
	for(i=0;i<1;i++){
		for(j=0;j<5;j++){
			if(arr[i][j] > max1){
				max1 = arr[i][j];
			}
		}
	}
	
	for(i=1;i<2;i++){
		for(j=0;j<5;j++){
			if(arr[i][j] > max2){
				max2 = arr[i][j];
			}
		}
	}
	
	for(i=2;i<3;i++){
		for(j=0;j<5;j++){
			if(arr[i][j] > max3){
				max3 = arr[i][j];
			}
		}
	}
	
	for(i=3;i<4;i++){
		for(j=0;j<5;j++){
			if(arr[i][j] > max4){
				max4 = arr[i][j];
			}
		}
	}
	
	printf("%d %d %d %d", max1, max2, max3, max4);
	return 0;
}
