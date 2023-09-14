#include<stdio.h>
int main(){
	int a=5, b=3, sum=0;
	while(--a>0){
		sum+=a/2+b%2;
		b++;
	}
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("sum=%d",sum);
	return 0;
}
