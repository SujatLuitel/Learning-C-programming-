#include <stdio.h>
int main (){
	int rows, columns, i, j, first[10][10], second[10][10], sum[10][10];
	printf("Enter the number of rows and columns in the matrix:\n");
	scanf("%d%d",&rows,&columns);
	printf("Enter the elements of the first matrix:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			scanf("%d",&first[i][j]);
		}
	}
	printf("Enter the elements of the second matrix:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			scanf("%d",&second[i][j]);
		}
	}
	printf("\n\n");

	printf("The sum of first and second matrix is:\n\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			sum[i][j] = first[i][j] + second[i][j];
			printf("%d\t",sum[i][j]);
			if(j==(columns-1)){
				printf("\n\n");
			}
		}
	}
	return 0;
}
