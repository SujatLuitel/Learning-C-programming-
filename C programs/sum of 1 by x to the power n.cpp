#include <stdio.h>
#include <math.h>
int main(){
	int i,n;
	float x, sum;
	printf("X = ");
	scanf("%f",&x);
	printf("N = ");
	scanf("%d",&n);
	sum = 1/x;
	for (i=1;i<n;i++){
		sum-=1/pow(x,i+1);
	}
	printf("Sum = %f",sum);
	return 0;
}
