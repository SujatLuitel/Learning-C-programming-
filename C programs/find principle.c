#include <stdio.h>

int main(){
	int p,t,r,si;
	printf("Enter time, rate and simple interest:\n");
	scanf("%d%d%d",&t,&r,&si);
	p=((100*si)/t*r);
	printf("%d",p);
	return 0;
}
