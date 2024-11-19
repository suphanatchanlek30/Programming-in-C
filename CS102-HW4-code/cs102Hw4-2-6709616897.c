#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

struct Registration {
	int id;
	char name[51];
	int age;
	float income;
};

// Prototype
void displayinfo(struct Registration person[], int count_person);

int main(void){
	struct Registration person[MAX_SIZE];
	int choice;
	int count_person = 0;
	
	while(1){
        printf("Poverty Registration System\n");
        printf("1. Register New Person\n");
        printf("2. Display All Registered Persons\n");
        printf("3. Exit\n");
        printf("==\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if(choice == 1){
        	if(count_person < MAX_SIZE){
        		// input
        		printf("Enter ID: ");
        		scanf("%d", &person[count_person].id);
        		
        		printf("Enter Name: ");
        		getchar(); // clear
        		fgets(person[count_person].name, 50, stdin);
        		person[count_person].name[strcspn(person[count_person].name, "\n")] = 0; // remove newline
        		
        		printf("Enter Age: ");
        		scanf("%d", &person[count_person].age);
        		
        		printf("Enter Monthly Income: ");
        		scanf("%f", &person[count_person].income);
        		
        		count_person+=1;
        		
        		printf("Person registered successfully.\n");
        		printf("==\n");
			}
        	
		} else if(choice == 2){
			// function displayinfo
			displayinfo(person, count_person);
			
		} else if(choice == 3){
			printf("Exiting program.");
			break;
		}
	}
	
	return 0;
}

void displayinfo(struct Registration person[], int count_person){
    int i;
    if(count_person == 0){
        printf("No registered persons to display.\n");
        printf("==\n");
    } else {
    	printf("ID\tName\t\tAge\tMonthly Income\n");
	    for(i = 0; i < count_person; i++){
	        printf("%d\t%s\t%d\t%.2f\n", person[i].id, person[i].name, person[i].age, person[i].income);
	    }
	    printf("==\n");
	}
}

