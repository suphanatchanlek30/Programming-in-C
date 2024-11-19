#include <stdio.h>
#define MAX_SIZE 100

// Prototype
void swap_elements(int *arr, int pos1, int pos2, int n);

int main(void){
	int n, i;
	int pos1;
	int pos2;
	
	printf("Enter the number of elements (max %d): ", MAX_SIZE);
	scanf("%d", &n);
	
	// check n
	if(n > 100){
		printf("Invalid number.\n");
	    return 1;
	}
	
	int arr[n];
	printf("Enter %d numbers: ", n);
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Enter first position to swap (0-%d): ", n-1);
	scanf("%d", &pos1);
	
	printf("Enter second position to swap (0-%d): ", n-1);
	scanf("%d", &pos2);
	
	// check pos1, pos2
	if (pos1 < 0 || pos1 >= n || pos2 < 0 || pos2 >= n) {
	    printf("Invalid positions.\n");
	    return 1;
	}
	
	// call function
	swap_elements(arr, pos1, pos2, n);
	
	return 0;
}

void swap_elements(int *arr, int pos1, int pos2, int n){
	int i;
	int temp;
	
	temp = *(arr + pos1);
	*(arr + pos1) = *(arr + pos2);
	*(arr + pos2) = temp;
	
	printf("After swapping elements at positions %d and %d:\n", pos1, pos2);
	for(i=0;i<n;i++){
		printf("%d ", *(arr + i));
	}
}
