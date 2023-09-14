#include<stdio.h>
#include<conio.h>

int main(){
	char upr[10], lwr[10];
	int ascii;
	printf("Enter a uppercase string: ");
	scanf("%s",&upr);
	ascii = upr + 32;
	printf("The lowercase string is: %s \n",ascii);
	
	return 0;
}
