#include <stdio.h>
int main(){
	int units, total_charge, service_charge=50;
	printf("Enter the total units: ");
	scanf("%d",&units);
	if(units>=0 && units<=20){
		total_charge = 80 + service_charge;
		printf("Total Charge is %d",total_charge);
	}
	else if(units>20 && units<=100){
		total_charge = (5*units) + service_charge;
		printf("Total Charge is %d",total_charge);
	}
	else if(units>100 && units<=200){
		total_charge = (7*units) + service_charge;
		printf("Total Charge is %d",total_charge);
	}
	else if(units>200){
		total_charge = (10*units) + service_charge;
		printf("Total Charge is %d",total_charge);
	}
	else{
		printf("Invalid input !");
	}
	return 0;
}
