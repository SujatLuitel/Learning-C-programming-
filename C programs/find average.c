#include <stdio.h>
int main(){
	int a[5],i,total=0,average;
	printf("Enter five numbers:\n");
	for(i=1;i<=5;i++){
		scanf("%d",&a[i]);
		total=total+a[i];
	}
	average=total/5;
	printf("total: %d\n",total);
	printf("average: %d",average);
	return 0;
}
