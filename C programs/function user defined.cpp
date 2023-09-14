#include <stdio.h>

// function prototype
int add(int x, int y);

int main() {
    int a = 10, b = 20, sum;
    sum = add(a, b);
    printf("The sum of %d and %d is %d\n", a, b, sum);
    return 0;
}

// function definition
int add(int x, int y) {
    int result = x + y;
    return result;
}

