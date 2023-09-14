#include <stdio.h>
int main(){
	int i, n, sqrt = 0;
	printf("Enter a number to find its sqrt: ");
	scanf("%d",&n);
	for (i=n/2; i>=2; i--){
		if(n==1){
			printf("The Square Root of %d is 1\n",n);
		}
		else if(n/i==i){
			sqrt = i;
			printf("The Square Root of %d is %d\n",n, i);
		}
	}
	if(sqrt == 0){
		printf("The given number [%d] has no Square Root\n",n);
	}
	return 0;
	
}
