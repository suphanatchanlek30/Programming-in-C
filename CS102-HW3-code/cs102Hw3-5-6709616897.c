#include <stdio.h>

// Question 5 of Homework 3 (CS102 HW3 1/2567)
// Your program will not successfully be compiled and run properly until readSquare and findMagicNumber functions are defined correctly.
// Let's define readSquare and findMagicNumber functions here !

// Prorotype
void readSquare(int arr[][8], int N);
int findMagicNumber(int arr[][8], int N);

int main(){

    int arr[8][8];
    int N;

    scanf("%d", &N);
    readSquare(arr, N);

    int magicNumber = findMagicNumber(arr, N);

    if (magicNumber == -1) {
        printf("Your square is NOT a magic square.");
    } else {
        printf("Your square is a magic square!! with the magic constant = %d.", magicNumber);
    }

    return 0;
}

// function input 
void readSquare(int arr[][8], int N){
	int i, j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d", &arr[i][j]);
		}
	}
}

// function calculate
int findMagicNumber(int arr[][8], int N) {
    // calculate the sum of first row
    int magicSum = 0;
    int i,j;
    for(j = 0; j < N; j++) {
        magicSum += arr[0][j];
    }
    
    // Check rows
    for(i = 0; i < N; i++) {
        int rowSum = 0;
        for(j = 0; j < N; j++) {
            rowSum += arr[i][j];
        }
        if(rowSum != magicSum) {
            return -1;
        }
    }
    
    // Check columns
    for(j = 0; j < N; j++) {
        int colSum = 0;
        for(i = 0; i < N; i++) {
            colSum += arr[i][j];
        }
        if(colSum != magicSum) {
            return -1;
        }
    }
    
    // Check main diagonal
    int diagSum = 0;
    for(i = 0; i < N; i++) {
        diagSum += arr[i][i];
    }
    if(diagSum != magicSum) {
        return -1;
    }
    
    // Check other diagonal
    diagSum = 0;
    for(i = 0; i < N; i++) {
        diagSum += arr[i][N-1-i];
    }
    if(diagSum != magicSum) {
        return -1;
    }
    
    // Check if all numbers are unique and in range 1 to N*N
    int used[64] = {0};
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            int num = arr[i][j];
            if(num < 1 || num > N*N || used[num-1] == 1) {
                return -1;
            }
            used[num-1] = 1;
        }
    }
    
    return magicSum;
}
