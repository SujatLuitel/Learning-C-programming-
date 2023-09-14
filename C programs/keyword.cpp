#include <stdio.h>

int main() {
    int num1, num2, sum; // int is a keyword used to declare integer variables
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    return 0; // return is a keyword used to return a value from a function
}

