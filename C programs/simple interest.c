#include <stdio.h>
int main(){
	int p,t;
	float r,si;
	printf("Enter principle, rate, and time:\n");
	scanf("%d%f%d",&p,&r,&t);
	si=(p*t*r)/100;
	printf("The Simple Interest is %f",si);
	return 0;
}
