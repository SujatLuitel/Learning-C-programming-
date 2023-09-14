#include <stdio.h>

int main() {
   int a = 5, b = 5;

   printf("Prefix increment: %d\n", ++a); // Output: Prefix increment: 6
   printf("Postfix increment: %d\n", b++); // Output: Postfix increment: 5

   printf("New value of a: %d\n", a); // Output: New value of a: 6
   printf("New value of b: %d\n", b); // Output: New value of b: 6

   return 0;
}

