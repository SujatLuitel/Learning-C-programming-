#include <stdio.h>
int main(){
	int a,i;
	printf("Enter a number: ");
	scanf("%d",&a);
	for (i=a;i>=0;i--){
		printf("%d\n",i);
	}
	return 0;
}
