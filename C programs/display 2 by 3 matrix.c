#include<stdio.h>
int main(){
	int i, j, a[2][3];
	printf("Enter the elements of the matrix: \n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements in matrix form:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
			if(j==2){
				printf("\n");
			}
		}
	}
	return 0;
}
