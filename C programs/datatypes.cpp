#include <stdio.h>

int main() {
    int a = 10;
    char b = 'C';
    float c = 3.14;
    double d = 3.14159265358979323846;
    void *e = NULL;
    bool b1 = true;

    printf("a = %d\n", a);
    printf("b = %c\n", b);
    printf("c = %.2f\n", c);
    printf("d = %lf\n", d);
    printf("e = %p\n", e);

    return 0;
}

