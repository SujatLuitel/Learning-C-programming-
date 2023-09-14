#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t; 
    int n;
    float ci;

    // Get the principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &p);

    // Get the interest rate
    printf("Enter the interest rate: ");
    scanf("%f", &r);

    // Get the number of years
    printf("Enter the number of years: ");
    scanf("%f", &t);


    // Calculate the compound interest
    ci = p * pow(1 + (r / 100), t);

    // Display the compound interest
    printf("Compound interest: %.2f", ci - p);

    return 0;
}

