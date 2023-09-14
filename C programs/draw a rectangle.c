#include <stdio.h>

int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");

   // Draw rectangle
   rectangle(100, 100, 200, 150);

   getch();
   closegraph();
   return 0;
}

