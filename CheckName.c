#include <stdio.h>
#include <string.h>

int main(void){
	char name[100];
	
	scanf("%s", name);
	int i, sum = 0, sum2 = 0, suma = 0, sum3 = 0;
	
	int length = strlen(name);
	
	// A-Z	
	for(i=0; i < length; i++){
		if(name[i] == 'A' || name[i] == 'J' || name[i] == 'S'){
			sum += 1;
		} else if (name[i] == 'B' || name[i] == 'K' || name[i] == 'T'){
			sum += 2;
		} else if (name[i] == 'C' || name[i] == 'L' || name[i] == 'U'){
			sum += 3;
		} else if (name[i] == 'D' || name[i] == 'M' || name[i] == 'V'){
			sum += 4;
		} else if (name[i] == 'E' || name[i] == 'N' || name[i] == 'W'){
			sum += 5;
		} else if (name[i] == 'F' || name[i] == 'O' || name[i] == 'X'){
			sum += 6;
		} else if (name[i] == 'G' || name[i] == 'P' || name[i] == 'Y'){
			sum += 7;
		} else if (name[i] == 'H' || name[i] == 'Q' || name[i] == 'Z'){
			sum += 8;
		} else if (name[i] == 'I' || name[i] == 'R'){
			sum += 9;
		}
	}
	
	// digit A-Z
	while (sum > 9) {
        sum2 = 0;
        while (sum != 0) {
            sum2 += sum % 10;
            sum /= 10;
        }
        sum = sum2;
    }
    
    // A-Z
    if(sum % 2 == 0){
    	printf("Your destiny number is %d and it is lucky.\n", sum);
	} else {
		printf("Your destiny number is %d and it is unlucky.\n", sum);
	}
    
    
    // A E I O U
    for(i=0; i < length; i++){
		if(name[i] == 'A'){
			suma += 1;
		} else if (name[i] == 'U'){
			suma += 3;
		}  else if (name[i] == 'E'){
			suma += 5;
		} else if (name[i] == 'O'){
			suma += 6;
		}  else if (name[i] == 'I'){
			suma += 9;
		}
	}
	
	// A E I O U
	if(suma > 20){
    	printf("Your soul number is %d and it is high.\n", suma);
	} else if(suma >= 11 && suma <= 19){
		printf("Your soul number is %d and it is average.\n", suma);
	} else if(suma >= 0 && suma <= 10){
		printf("Your soul number is %d and it is low.\n", suma);
	}

	return 0;
}
