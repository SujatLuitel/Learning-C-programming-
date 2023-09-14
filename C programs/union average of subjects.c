#include <stdio.h>
int main(){
	char subject[5];
	int i, marks[5], total, average;
	printf("Enter the name of subjects:\n");

	scanf("%s",&subject[1]);

	printf("%s",subject[1]);
	for(i=0;i<5;i++){
		printf("Enter the marks of %s: ",subject[i]);
		scanf("%s",&marks[i]);
	}
	printf("total");
	for(i=0;i<5;i++){
		total=total+marks[i];
	}
	average = total/5;
	printf("Average: %s",average);
	return 0;
}
