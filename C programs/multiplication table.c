#include <stdio.h>
#include <conio.h>
int main(){
	int a,b,i;
	scanf("%d",&a);
	for(i=1;i<=10;i++){
		b=a*i;
		printf("%d * %d = %d\n",a,i,b);
	}
	return 0;
}
