#include <stdio.h>

int main(){
	float l, b, area, per;

	printf("Enter the length: ");
	scanf("%f",&l);

	printf("Enter the breadth: ");
	scanf("%f",&b);

	area = l*b;
	per = 2*(l+b);

	printf("Area of rectangle is %.2f.\n", area);
	printf("Perimeter of rectangle is %.2f.", per);

return 0;
}

