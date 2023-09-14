// Write a program to find SP and SP with VAT when the MP is Rs.2600, discount is 27% and VAT is 13%.

#include<stdio.h>

int main(){
	float SP, SPwithVAT, MP=2600, discount=27, VAT=13;
	SP=MP-((discount/100)*MP);
	SPwithVAT=SP+((VAT/100)*SP);
	printf("The SP is %f. \n The SP with VAT is %f.",SP,SPwithVAT);
	return 0;
}
