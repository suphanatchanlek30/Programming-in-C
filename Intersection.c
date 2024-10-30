#include <stdio.h>

int main(void){
	int n1;
	scanf("%d", &n1);
	
	int arr1[n1];
	int i,j;
	
	// input arr1[]
	for(i=0;i<n1;i++){
		scanf("%d", &arr1[i]);
	}
	
	int n2;
	scanf("%d", &n2);
	int arr2[n2];
	
	// input arr2[]
	for(i=0;i<n2;i++){
		scanf("%d", &arr2[i]);
	}
	
	int arr3[100];
    int count = 0;
    
    // Calculate
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                arr3[count] = arr1[i];
                count++;
                break;
            }
        }
    }
    
	// sort    
    for(i = 0; i < count - 1; i++) {
        for(j = 0; j < count - i - 1; j++) {
            if(arr3[j] > arr3[j + 1]) {
                int temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
            }
        }
    }
    
	// output    
    for(i = 0; i < count; i++) {
        printf("%d ", arr3[i]);
    }
	
	return 0;
}
