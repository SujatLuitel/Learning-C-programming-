#include<stdio.h>
#include<conio.h>
int main(){
	void world();
	return 0;
}

void world(){
	printf("Helllo World\n");
}

int name(){
	char name[10];
	scanf("%s",&name);
	printf("Hello %s",name);
	return 0;
}

int sum(){
	int a,b,sum;
	printf("Enter first and second number:\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("The sum of %d and %d is %d.",a,b,sum);
	return 0;
}


