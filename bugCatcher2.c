#include <stdio.h>
#include <string.h>

int main(void){
	int Ant = 0;
	int Butterfly = 0;
	int Crickets = 0;
	int Dragonfly = 0;
	int Earwig = 0;
	
	char bug[100];
	// input
	fgets(bug, sizeof(bug), stdin);
	
	int i;
	for(i=0;i<strlen(bug);i++){
		if(bug[i] == 'A'){
			Ant += 1;
		} else if (bug[i] == 'B'){
			Butterfly += 1;
		} else if (bug[i] == 'C'){
			Crickets += 1;
		} else if (bug[i] == 'D'){
			Dragonfly += 1;
		} else if (bug[i] == 'E'){
			Earwig += 1;
		} 
	}
	
	printf("%d\n", Ant);
	printf("%d\n", Butterfly);
	printf("%d\n", Crickets);
	printf("%d\n", Dragonfly);
	printf("%d\n", Earwig);
	
	return 0;
}
