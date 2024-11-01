#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Prototype
int palindrome(char *str);
int isVowel(char str);
int Consonants(char *str);
int Vowels(char *str);
int Upper_case(char *str);
int Lower_case(char *str);
int Size_of_Input(char *str);

int main(void){
	
	char str[51];
	// Input 
	scanf("%50s", str);
	
	// Call Function	
	int is_Size_of_Input = Size_of_Input(str);
	int is_Consonants = Consonants(str);
	int is_Vowels = Vowels(str);
	int is_Upper_case = Upper_case(str);
	int is_Lower_case = Lower_case(str);
	int is_palindrome =  palindrome(str);
	
	// Output
	printf("Size of input string is %d\n", is_Size_of_Input);
	printf("#Consonants: %d\n", is_Consonants);
	printf("#Vowels: %d\n", is_Vowels);
	printf("#Upper-case letters: %d\n", is_Upper_case);
	printf("#Lower-case letters: %d\n", is_Lower_case);
	// check Palindrome
	if(is_palindrome){
		printf("Is a palindrome string: Yes");
	} else {
		printf("Is a palindrome string: No");
	}
	
	return 0;
}

int Size_of_Input(char *str){
	int length_str = strlen(str);
	return length_str;
}

int isVowel(char str) {
    str = tolower(str);
    return (str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u');
}

int Consonants(char *str){
	int i;
	int consonants = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]) && !isVowel(str[i])) {
            consonants++;
        }
    }
	return consonants;
}

int Vowels(char *str){
	int i;
	int vowels = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]) && isVowel(str[i])) {
            vowels++;
        }
    }
	return vowels;
}

int Upper_case(char *str){
	int i;
	int Upper = 0;
	for(i=0;str[i] != '\0'; i++){
		// A-Z
		// ใช้ ฟังก์ชั่น isupper จาก ctype.h เพื่อตรวจสอบว่าเป็นตัวใหญ่หรือไม่ ไล่ตาม for loop ทีละตัว
		if(isupper(str[i])){
			Upper += 1;
		}
	}
	return Upper;
}

int Lower_case(char *str){
	int i;
	int Lower = 0;
	for(i=0;str[i] != '\0'; i++){
		// a-z
		// ใช้ ฟังก์ชั่น islower จาก ctype.h เพื่อตรวจสอบว่าเป็นตัวเล็กหรือไม่ ไล่ตาม for loop ทีละตัว
		if(islower(str[i])){
			Lower += 1;
		}
	}
	return Lower;
}

int palindrome(char *str){
	int i;
	int length_str = strlen(str);
	/*
		ThamasattasamahT 
		length_str  = 16
		เริ่มต้นที่ 0 เมื่อ i < length_str / 2
		ถ้าตัวที่ 0 != ตัวที่ length_str - i - 1
		ให้ return 0 คือ false

		แต่ถ้าเหมือนกันครบทุกเงื่อนไข ให้ return 1 คือ true
	 */
	for (i = 0; i < length_str / 2; i++) {
        if (str[i] != str[length_str - i - 1]) {
            return 0; // No palindrome
        }
    }
    return 1; // Yes palindrome
}

