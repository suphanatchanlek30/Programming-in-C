#include <stdio.h>
#include <string.h>

int main(void){
	
	char text[100];
	int i;
	int A = 0, B = 0, C = 0, D = 0, E = 0;
	
	scanf("%s", text);
	
	int legth = strlen(text);
	
	for(i=0; i<legth;i++){
		if (text[i] == 'A') {
            A += 1;
        } else if (text[i] == 'B') {
            B += 1;
        } else if (text[i] == 'C') {
            C += 1;
        } else if (text[i] == 'D') {
            D += 1;
        } else if (text[i] == 'E') {
            E += 1;
        }
	}
	
	printf("A: %d\nB: %d\nC: %d\nD: %d\nE: %d\n", A, B, C, D, E);
	return 0;
}
