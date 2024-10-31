#include <stdio.h>

// prototypes
float findMax(float arr[], int N);
int findMaxIndex(float arr[], int N);
float findMin(float arr[], int N);
int findMinIndex(float arr[], int N);
float findAverage(float arr[], int N);
void ReverseOrder(float arr[], int N);
void AboveAverage(float arr[], int N);
void NegativeCoordinates(float arr[], int N);

int main(void) {
    int N;
    int i;
    
    // input N and check Input N
    do {
        scanf("%d", &N);
    } while(N <= 0 || N > 50);
    
    float arr[N];
    // input number array
    for(i = 0; i < N; i++) {
        scanf("%f", &arr[i]);
    }
    
    printf("Maximum value: %10.2f\n", findMax(arr, N));
    printf("Minimum value: %10.2f\n", findMin(arr, N));
    printf("Maximum index: %10d\n", findMaxIndex(arr, N));
    printf("Minimum index: %10d\n", findMinIndex(arr, N));
    printf("Average: %10.2f\n", findAverage(arr, N));
    
    printf("Reverse order: ");
    ReverseOrder(arr, N);
    printf("\n");
    
    printf("Above average list: ");
    AboveAverage(arr, N);
    printf("\n");
    
    printf("Negative coordinates: ");
    NegativeCoordinates(arr, N);
    printf("\n");
    
    return 0;
}

// Max
float findMax(float arr[], int N) {
    int i;
    float max = arr[0];
    for(i = 0; i < N; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// IndexMax
int findMaxIndex(float arr[], int N) {
    int i;
    int maxIndex = 0;
    for(i = 0; i < N; i++) {
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

// Min
float findMin(float arr[], int N) {
    int i;
    float min = arr[0];
    for(i = 0; i < N; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// IndexMin
int findMinIndex(float arr[], int N) {
    int i;
    int minIndex = 0;
    for(i = 0; i < N; i++) {
        if(arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

// Average
float findAverage(float arr[], int N) {
    int i;
    float sum = 0;
    for(i = 0; i < N; i++) {
        sum += arr[i];
    }
    return sum / N;
}

// ReverseOrder
void ReverseOrder(float arr[], int N) {
    int i;
    for(i = N-1; i >= 0; i--) {
        printf("%.2f", arr[i]);
        if(i > 0) printf(" ");
    }
}

// AboveAverage
void AboveAverage(float arr[], int N) {
    int i;
    float average = findAverage(arr, N);
    int first = 1;
    for(i = N-1; i >= 0; i--) {
        if(arr[i] > average) {
            if(!first) printf(" ");
            printf("%.2f", arr[i]);
            first = 0;
        }
    }
}

// NegativeCoordinates
void NegativeCoordinates(float arr[], int N) {
    int i, j;
    for(i=0;i<N;i++){
    	if(arr[i] < 0){
    		for(j=i+1;j<N;j++){
    			if(arr[j] < 0){
    				printf("(%.2f, %.2f), ", arr[i], arr[j]);
				}
			}
		} else {
			continue;
		}
	}
}
