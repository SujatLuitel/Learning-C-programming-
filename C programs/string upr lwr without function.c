#include<stdio.h>
int upr(char[]);
int lwr(char[]);
int main(){
	char uprstr[100], lwrstr[100];
	printf("Enter a string to convert it into uppercase: ");
	gets(uprstr);
	upr(uprstr);
	printf("The string in uppercase is: %s\n\n",uprstr);
	
	printf("Enter a string to convert it into lowercase: ");
	gets(lwrstr);
	lwr(lwrstr);
	printf("The string in lowercase is: %s\n",lwrstr);
	return 0;
}
int upr(char s[]){
	int c=0;
	while(s[c]!='\0'){
		if(s[c]>='a' && s[c]<='z'){
			s[c]=s[c]-32;
		}
		c++;
	}
}
int lwr(char s[]){
	int c=0;
	while(s[c]!='\0'){
		if(s[c]>='A' && s[c]<='Z'){
			s[c]=s[c]+32;
		}
		c++;
	}
}
 
