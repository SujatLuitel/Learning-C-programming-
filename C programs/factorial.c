#include<stdio.h>
int main(){
	int a, i, factorial=1;
	printf("Enter the number to find its factorial: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		factorial = factorial*i;
	}
	printf("Factorial: %d",factorial);
	return 0;
}
