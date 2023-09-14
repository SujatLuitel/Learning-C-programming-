#include <stdio.h>
int checkPrime(int n){
	if(n<2 || n%2==0){
		printf("%d is not a Prime Number.",n);
	}
	else{
		printf("%d is a Prime Number.",n);
	}
	return 0;
}
int main(){
	int n;
	printf("Enter a positive integer: ");
	scanf("%d",&n);
	checkPrime(n);
	return 0;
}
