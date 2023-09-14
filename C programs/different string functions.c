#include<stdio.h>
#include<string.h>
int main(){
	char name[50];
	printf("Enter your name: ");
	scanf("%s",name);
	printf("The lenght of your name is: %d.\n",strlen(name));
	printf("The Uppercase form of your name is: %s.\n",strupr(name));
	printf("The Lowercase form of your name is: %s.\n",strlwr(name));
	return 0;
}
