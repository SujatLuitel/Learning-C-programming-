#include<stdio.h>
#include<conio.h>

int main(){
	char upr, lowr;
	int ascii;
	printf("Enter a uppercase character: ");
	scanf("%c",&upr);
	ascii = upr + 32;
	printf("The lowercase character is: %c \n",ascii);
	printf("Enter a lowercase character: ");
	scanf("%c",&lowr);
	ascii = lowr - 32;
	printf("The uppercase character is: %c \n",ascii);
	return 0;
}
