#include <stdio.h>
#define MAX_ID 9
#define MAX_NAME 31
#define MAX_LASTNAME 51

struct data
{
	char std_id[MAX_ID];
	char firstName[MAX_NAME];
	char lastName[MAX_LASTNAME];
	int Number_class;
};
typedef struct data Student;

int main(void){
	int N; 
	scanf("%d", &N);
	Student Number[N];
	int i;
	int fone = 0;
	
	
	// Input 
	for(i=0;i<N;i++){
		scanf("%s %s %s %d", Number[i].std_id, Number[i].firstName, Number[i].lastName, &Number[i].Number_class);
	}	
	
	int Number_true;
	scanf("%d", &Number_true);
	
	for(i=0;i<N;i++){
		if(Number[i].Number_class == Number_true){
			printf("%s %s %s\n", Number[i].std_id, Number[i].firstName, Number[i].lastName);
			fone = 1;
		}
	}
	
	if(!fone){
		printf("None");
	}
	
	return 0;
}
