#include <stdio.h>

int main(void){
	int R, C;
	int i, j;
	
	scanf("%d", &R);
	scanf("%d", &C);
	
	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			if(j % 2 == 0){
				printf("@");
			} else {
				printf("#");
			}
		}
		printf("\n");
	}
	return 0;
}
