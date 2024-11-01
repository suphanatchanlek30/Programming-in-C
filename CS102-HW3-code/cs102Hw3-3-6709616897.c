#include <stdio.h>

// Prototype
int  Magic_square(int N, int Array[N][N]);

int main(void){
	int N;
	int i, j;
	
	// Input Size Array N * N	
	scanf("%d", &N);
	
	// check N >= 3 and <= 8	
	if (N < 3 || N > 8) {
        return 1;
    }
	
	int Array[N][N];
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d", &Array[i][j]);
		}
	}
	
	// Call function	
	int is_Magic_square = Magic_square(N, Array);
	
	// Check is_Magic_square 	
	if(is_Magic_square){
		printf("This is a magic square!");
	} else {
		printf("This is NOT a magic square!");
	}
	
	return 0;
}

int  Magic_square(int N, int Array[N][N]){
	int magic_sum = 0;
    int i, j;

    // Calculate the magic sum from the first row
    for (j = 0; j < N; j++) {
        magic_sum += Array[0][j];
    }

    // a. Check if all numbers from 1 to N^2 are present and unique
    int found[N * N + 1];
    for (i = 1; i <= N * N; i++) {
        found[i] = 0;
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            int value = Array[i][j];
            if (value < 1 || value > N * N || found[value]) {
                return 0;
            }
            found[value] = 1;
        }
    }

    // b. Check row sum
    for (i = 0; i < N; i++) {
        int row_sum = 0;
        for (j = 0; j < N; j++) {
            row_sum += Array[i][j];
        }
        if (row_sum != magic_sum) {
            return 0;
        }
    }

    // b. Check column sum
    for (j = 0; j < N; j++) {
        int col_sum = 0;
        for (i = 0; i < N; i++) {
            col_sum += Array[i][j];
        }
        if (col_sum != magic_sum) {
            return 0;
        }
    }

    // b. Check both diagonal sums
    int diagonal1_sum = 0, diagonal2_sum = 0;
    for (i = 0; i < N; i++) {
        diagonal1_sum += Array[i][i];
        diagonal2_sum += Array[i][N - i - 1];
    }
    if (diagonal1_sum != magic_sum || diagonal2_sum != magic_sum) {
        return 0;
    }

    return 1;
}
