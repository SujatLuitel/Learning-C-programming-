#include<stdio.h>
int main(){
	int n, a, rem, rev=0;
	printf("Enter a number to reverse: ");
	scanf("%d",&n);
	a=n;
	while(n!=0){
		rem = n%10;
		rev = rev*10 + rem;
		n = n/10;
	}
	printf("The number in reverse is: %d\n",rev);
	if(a==rev){
		printf("The number is Palindrome.");
	}
	else{
		printf("The number is not Palindrome.");
	}
	return 0;
}
