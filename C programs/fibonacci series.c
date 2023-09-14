#include <stdio.h>
int main(){
	int n, n1 = 0, n2 = 1, n3, i;
	printf("Enter the series you want to find: ");
	scanf("%d",&n);
	printf("Fibonacci Series: %d\t%d\t",n1,n2);
	for(i=2;i<n;i++){
		n3=n1+n2;
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}
