#include <stdio.h>
#include <conio.h>

int main(){
	char input;
	printf("Enter a letter to check whether its a consonent or a vowel: ");
	scanf("%c",&input);
	switch (input){
		case 'a': printf("Vowel");
		break;
		case 'e': printf("Vowel");
		break;
		case 'i': printf("Vowel");
		break;
		case 'o': printf("Vowel");
		break;
		case 'u': printf("Vowel");
		break;
		default: printf("Consonent");
	}
	return 0;
}
