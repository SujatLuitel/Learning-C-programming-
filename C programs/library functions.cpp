#include <stdio.h>
#include<string.h>
int main(){
	char name[100];
	printf("Enter your name: ");
	scanf("%s",name);
	printf("Your name is %s.\n",name);
	printf("Length of your name: %d",strlen(name));
	return 0;
}	
